#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Weapon
{
    public:
        virtual void features()
        {
            cout << "Loading weapon features.\n:";
        }
};

class Bomb : public Weapon
{
    public:
        void features()
        {
            cout << "Loading bomb features\n";
        }
};

class Gun : public Weapon
{
    public:
        void features()
        {
            cout << "Loading gun features\n";
        }
};

class Loader
{
    public:
        void loadFeatures(Weapon *wp)
        {
            wp->features();
        }
};

int main()
{
    Loader *l = new Loader;
    Weapon *wp;
    Bomb b;
    Gun g;

    wp = &b;
    l->loadFeatures(wp);

    wp = &g;
    l->loadFeatures(wp);

    return 0;
}