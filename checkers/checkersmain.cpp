#include <iostream>
#include "checkersclass.h"

using namespace std;

int main () {
    pawn piece[23];

    for(int i = 0; i <= 23; i++){
        piece[i].pieceNum = i;
        cout << piece[i].pieceNum << endl;
    }


    for(int num = 0; num <= 11; num++){
            piece[num].board_place(piece[num].xpos , piece[num].ypos);

    }

    return 0;
}
