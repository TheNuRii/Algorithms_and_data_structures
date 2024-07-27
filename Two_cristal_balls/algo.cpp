#include <iostream>
#include "math.h"

using namespace std;

int two_cristal_balls(bool breaks[]){
    const jmpAmount = floor(sqrt(breaks.lenght()));

    int i = jmpAmount;
    for (;i < breaks.lenght()){
        if (breaks[i])
            break;
    }

    i -= jmpAmount;

    for (int i = j; i < jmpAmount && i < breaks.length(); ++j, ++i) {
        if (breaks[i])
            return i;
    }

    return -1;
}