#include <bits/stdc++.h>

using namespace std;

class Weapon
{
    public:
        void loadFeatures()
        {
            cout << "Loading weapon feature.\n";
        }
};

class Bomb : public Weapon
{
    public:
        void loadFeatures()
        {
            cout << "Loading bomb features.\n";
        }
};

class Gun : public Weapon
{
    public:
        void loadFeatures()
        {
            cout << "Loading gun features.\n";
        }
};

int main08()
{
    Weapon *w = new Weapon;
    Bomb *b = new Bomb;
    Gun *g = new Gun;

    w->loadFeatures();
    b->loadFeatures();
    g->loadFeatures();

    return 0;
}
