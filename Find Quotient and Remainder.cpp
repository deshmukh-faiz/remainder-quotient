#include <iostream>
using namespace std;

int main()
{

    int dividend, divisor, remainder, quotient;

    cout << "Enter dividend" << endl;
    cin >> dividend;

    cout << "Enter divisor" << endl;
    cin >> divisor;

    remainder = dividend % divisor;
    cout << "remaider:" << remainder << endl;

    quotient = dividend / divisor;
    cout << "quotient:" << quotient << endl;

    return 0;
}