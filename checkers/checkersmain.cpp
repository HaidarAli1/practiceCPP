#include <iostream>
#include "checkersclass.h"
using namespace std;

int main () {
    pawn piece[23];

    for(int num = 0; num <= 11; num++){
        piece[num].board_place(num ,piece[num].xpos , piece[num].ypos);
    }

    return 0;
}
