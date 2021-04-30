#include <iostream>
#include <list>

std::list<int> g_data;
const int SIZE = 5000000;

void Download() {
    std::cout << "[Downloader] Stared download" << std::endl;
    for(int i = 0; i < SIZE; ++i)
    {
        g_data.push_back(1);
    }
    std::cout<< "[Downloader] Finished download" << std::endl;
}

int main() {
    std::cout << "[main] User started an operation" << std::endl;
    Download();
    std::cout << "[main] User started another operation" << std::endl;

    return 0;
}