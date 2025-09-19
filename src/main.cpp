#include <iostream>
#include "growingTree.h"

int main(){
    int UpSpeed;
    int DownSpeed;
    int desiredHeight;

    std::cin >> UpSpeed >> DownSpeed >> desiredHeight;
    std::cout << growingTree(UpSpeed, DownSpeed, desiredHeight) << std::endl;
    return 0;
}