#include <bits/stdc++.h>

using namespace std;

class Product
{
    int pID;
    float cost;
    public:
        Product(int pID, float cost)
        {
            this->pID = pID;
            this->cost = cost;
        }

        void setProductID(int pID)
        {
            this->pID = pID;
        }

        int getProductID()const
        {


            return pID;
        }

        void print()
        {
            cout << "Product ID: " << this->pID;
            cout << " Cost: " << this->cost << endl;
        }
};

int main()
{
    int pID = 1234;
    float cost = 100.00;

    Product p(pID, cost);
    p.getProductID();
    p.print();

    return 0;
}