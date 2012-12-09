#include <iostream>
using namespace std;

int a = 0;
int b = 1;
const int MAX_FIB = 4000000;
//const int MAX_FIB = 35;

unsigned long int sum;

// Return the next number in the Fibonnaci sequence, and update `a` and `b`.
//------------------------------------------------------------------------------
int Fibonnaci()
{
    int ret = a + b;
    a = b;
    b = ret;
}

int main(int argc, const char *argv[])
{
    int fib = 0;
    while( fib < MAX_FIB )
    {
        fib = Fibonnaci();
        if( !( fib % 2 ) )
        {
            sum += fib;
        } 
    }
    cout << "sum: " << sum << endl;
    return 0;
}
