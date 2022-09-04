#include <iostream>
using namespace std;

void print_number(int x);

int main () 
{
    print_number(123);
    return 0;
}



void print_number(int x)
{
    cout << "The number is " << x << endl;
}
