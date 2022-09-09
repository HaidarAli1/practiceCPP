#include <iostream>
using namespace std;



int main ()
{
    int i = 1;

    struct Variables {
        int x;
        int y;
        char op;
        char restart;
        double total;
    } inputVar;

    while (i == 1) 
    {
        cout << "What do you want the first number to be?" << endl;
        cin >> inputVar.x;

        cout << "What do you want the second number to be?" << endl;
        cin >> inputVar.y;

        cout << "Operator +,-,*,/" << endl;
        cin >> inputVar.op;

        if (inputVar.op == '+')
        {
            inputVar.total = inputVar.x + inputVar.y;
        }else if (inputVar.op == '-')
        {
            inputVar.total = inputVar.x - inputVar.y;
        }else if (inputVar.op == '*')
        {
            inputVar.total = inputVar.x * inputVar.y;
        }else if (inputVar.op == '/')
        {
            inputVar.total = inputVar.x / inputVar.y;
        }

        cout << inputVar.total << endl;

        cout << "Would you like to restart the program? y/n" << endl;
        cin >> inputVar.restart;

        if (inputVar.restart == 'n' || inputVar.restart == 'N'){return 0;}
        cin.clear();
    }
}