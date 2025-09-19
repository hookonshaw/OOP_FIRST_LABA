#include <iostream>
#include "growingTree.h"

int growingTree(int UpSpeed, int DownSpeed, int desiredHeight){
    if (UpSpeed <= 0 || desiredHeight <= 0) {
        return -1;
    }
    if (desiredHeight <= UpSpeed) {
        return 1;
    }
    if (UpSpeed <= DownSpeed) {
        return -1;
    }
    int currentHeight = 0;
    int day = 0;
    
    while (currentHeight < desiredHeight) {
        day++;
        currentHeight += UpSpeed;
        
        if (currentHeight >= desiredHeight) {
            return day;
        }
        currentHeight -= DownSpeed;
        
        if (day > 1000000) {
            return -1;
        }
    }
    return day;
}