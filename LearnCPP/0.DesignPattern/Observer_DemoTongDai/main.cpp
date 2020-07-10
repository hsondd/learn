#include <iostream>
#include "thuebao.h"

using namespace std;

int main()
{
    Thuebao *thuebao1;
    Thuebao *thuebao2;
    thuebao1 = new Thuebao("0869197910");
    thuebao2 = new Thuebao("0582915644");


    delete thuebao1;
    delete thuebao2;
    return 0;
}

