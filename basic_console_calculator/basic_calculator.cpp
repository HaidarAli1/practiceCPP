#include <iostream>
using namespace std;

int t = 1;

int main ()
{
    
    while (t == 1) 
    {
        int x;
        cout << "What do you want the first number to be?" << endl;
        cin >> x;

        int y;
        cout << "What do you want the second number to be?" << endl;
        cin >> y;

        char op;
        cout << "Operator +,-,*,/" << endl;
        cin >> op;

        double total;

        if (op == '+')
        {
            total = x + y;
        }else if (op == '-')
        {
            total = x - y;
        }else if (op == '*')
        {
            total = x * y;
        }else if (op == '/')
        {
            total = x / y;
        }

        cout << total << endl;

        char restart;
        cout << "Would you like to restart the program? y/n" << endl;

        if (restart == 'n' || restart == 'N')
        {
            t = 0;
        }
        cin.clear();
    }
    return 0;
    
    
}