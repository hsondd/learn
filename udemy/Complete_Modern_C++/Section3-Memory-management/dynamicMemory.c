#include <stdio.h>
#include <stdlib.h>
void Malloc() {
    int *p = (int*)malloc(sizeof(int));
    if (p == NULL)
    {
        printf("Failed to allocate memory\n");
        return -1;
    }
    *p = 5;
    printf("%d\n", *p);
    free(p);

}
int main()
{
    return 0;
}