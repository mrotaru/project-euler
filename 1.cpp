#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    int total = 0;
    for( int i = 0; i < 1000; i++ )
    {
        if( !(i%3) ) { total += i; continue; }
        if( !(i%5) ) { total += i; continue; }
    }
    cout << "total: " << total << endl;
    return 0;
}
