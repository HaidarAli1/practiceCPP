#include <iostream>
#include "checkersclass.h"
using namespace std;

int main () {
    pawn piece[23];

    int i;
    while (i != 23)
    {
        cout << piece[i].color << endl;
        i++;
    }

    cout << piece[3].color << endl;
    return 0;
}