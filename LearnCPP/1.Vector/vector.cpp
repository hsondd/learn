#include <iostream>
#include <vector>

main()
{
    std::vector<int> pho;
    pho.push_back(1);
    pho.push_back(2);
    pho.push_back(3);
    pho.push_back(4);

    // for (int i = 0; i < pho.size(); ++i)
    // {
    //     std::cout << pho[i] << std::endl;
    // }

    for (std::vector<int>::iterator it = pho.begin(); it != pho.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}