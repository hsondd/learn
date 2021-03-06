#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <limits.h>

#define NUM_CHILDREN (2)

#define LEFT (0)
#define RIGHT (1)

// Invariants: 
// - Every key below child[LEFT] < key < every key below child[RIGHT]
// - Every heapKey in both subtrees < heapKey.
// - Every node stores a correct value for size.
// heapKeys are chosen randomly to ensure balance with high probability.
struct tree {
    int key;
    int heapKey;
    size_t size;   // number of nodes in this subtree
    struct tree *child[NUM_CHILDREN];
};

#ifdef SANITY_CHECK
// slow version that doesn't use size fields
static size_t
treeComputedSize(const struct tree *t)
{
    if(t == 0) {
        return 0;
    } else {
        return 1 + treeComputedSize(t->child[LEFT]) + treeComputedSize(t->child[RIGHT]);
    }
}
#endif // SANITY_CHECK


// return size of t
// this is an O(1) operation
static size_t
treeSize(const struct tree *t)
{
    if(t == 0) {
        return 0;
    } else {
        return t->size;
    }
}

// fix t->size to be correct
static void
fixSize(struct tree *t)
{
    if(t == 0) {
        return;
    } else {
        t->size = 1;  // 1 for the root
        for(int dir = LEFT; dir <= RIGHT; dir++) {
            t->size += treeSize(t->child[dir]);
        }
    }

#ifdef SANITY_CHECK
    assert(treeSize(t) == treeComputedSize(t));
#endif
}

void
treePrintHelper(const struct tree *t, int depth)
{
    if(t == 0) {
        return;
    }

    treePrintHelper(t->child[LEFT], depth+1);

    // print indented root
    for(int i = 0; i < depth; i++) {
        putchar(' ');
    }

    printf("%d [%d] size=%zu\n", t->key, t->heapKey, t->size);

    treePrintHelper(t->child[RIGHT], depth+1);
}

void
treePrint(const struct tree *t)
{
    treePrintHelper(t, 0);
}

int
treeHeight(const struct tree *t)
{
    if(t == 0) {
        return -1;
    } else {
        int l = treeHeight(t->child[LEFT]);
        int r = treeHeight(t->child[RIGHT]);
        return 1 + ((l > r) ? l : r);
    }
}

// return 1 if it finds key, 0 otherwise
int
treeSearch(const struct tree *t, int key)
{
    if(t == 0) {
        // no key!
        return 0;
    } else if(key == t->key) {
        // found it
        return 1;
    } else if(key < t->key) {
        // look in left
        return treeSearch(t->child[LEFT], key);
    } else {
        // look in right
        return treeSearch(t->child[RIGHT], key);
    }
}

// return largest element <= key
// or INT_MIN if there is no such element.
int
treeSearchMaxLE(const struct tree *t, int key)
{
    if(t == 0) {
        // no key!
        return INT_MIN;
    } else if(key == t->key) {
        // found it
        return key;
    } else if(key < t->key) {
        // look in left
        return treeSearchMaxLE(t->child[LEFT], key);
    } else {
        // look in right
        int result = treeSearchMaxLE(t->child[RIGHT], key);

        if(result == INT_MIN) {
            // didn't find it
            return t->key;
        } else {
            return result;
        }
    }
}

// search for element with k smaller elements
int
treeSearchByRank(const struct tree *t, size_t k)
{
    if(t == 0) {
        return INT_MAX;
    }

    size_t leftSize = treeSize(t->child[LEFT]);

    if(leftSize == k) {
        // got it
        return t->key;
    } else if(k < leftSize) {
        return treeSearchByRank(t->child[LEFT], k);
    } else {
        return treeSearchByRank(t->child[RIGHT], k-(leftSize+1));
    }
}

// rotate the tree pointed to by parent
// so that child in direction moves up
void
treeRotateUp(struct tree **parent, int dir)
{
    // get pointers to anything that might move
    assert(parent);
    struct tree *child = *parent;
    assert(child);
    struct tree *grandchild = child->child[dir];
    assert(grandchild);
    struct tree *middleSubtree = grandchild->child[!dir];

    // do the move
    *parent = grandchild;
    grandchild->child[!dir] = child;
    child->child[dir] = middleSubtree;

    // fix sizes starting at the bottom
    fixSize(child);
    fixSize(grandchild);
}


// insert key into tree pointed to by parent
// if not already present
void
treeInsert(struct tree **parent, int key)
{
    if(*parent == 0) {
        // no key!
        *parent = malloc(sizeof(struct tree));
        (*parent)->key = key;
        (*parent)->heapKey = rand();
        (*parent)->child[LEFT] = (*parent)->child[RIGHT] = 0;
        fixSize(*parent);
    } else if(key == (*parent)->key) {
        // found it
        return;
    } else if(key < (*parent)->key) {
        // look in left
        treeInsert(&(*parent)->child[LEFT], key);
    } else {
        // look in right
        treeInsert(&(*parent)->child[RIGHT], key);
    }

    // check heap property
    for(int dir = LEFT; dir <= RIGHT; dir++) {
        if((*parent)->child[dir] != 0 && (*parent)->child[dir]->heapKey > (*parent)->heapKey) {
            treeRotateUp(parent, dir);
        }
    }

    fixSize(*parent);
}

// delete a node with a given key if present
// parent is pointer to location pointing to root
void
treeDelete(struct tree **parent, int key)
{
    if(*parent == 0) {
        // tree is empty, go home
        return;
    } else if(key == (*parent)->key) {
        // got it, let's start deleting
        // check easy case
        // look for a child that is null
        for(int dir = LEFT; dir <= RIGHT; dir++) {
            if((*parent)->child[dir] == 0) {
                // no child in this direction, promote child in other direction
                struct tree *deleteMe;
                deleteMe = *parent;
                *parent = deleteMe->child[!dir];
                free(deleteMe);
                fixSize(*parent);
                return;
            }
        }

        // easy case didn't work, promote higher heapKey child
        int biggerKid = 
            (*parent)->child[LEFT]->heapKey > (*parent)->child[RIGHT]->heapKey
            ? LEFT : RIGHT;

        treeRotateUp(parent, biggerKid);

        // *parent now points to former bigger kid
        // call treeDelete recursively
        treeDelete(&(*parent)->child[!biggerKid], key);
    } else if(key < (*parent)->key) {
        // in left subtree
        treeDelete(&(*parent)->child[LEFT], key);
    } else {
        // in right subtree
        treeDelete(&(*parent)->child[RIGHT], key);
    }

    fixSize(*parent);
}

int
main(int argc, char **argv)
{
    if(argc != 1) {
        fprintf(stderr, "Usage: %s\n", argv[0]);
        return 1;
    }

    struct tree *t = 0;
    int key;

    while(scanf("%d", &key) == 1) {
        if(key >= 0) {
            treeInsert(&t, key);
        } else {
            treeDelete(&t, -key);
        }
        treePrint(t);
        printf("--- largest <= 10 is %d\n", treeSearchMaxLE(t, 10));
        printf("--- rank 5 is %d\n", treeSearchByRank(t, 5));
    }

    return 0;
}