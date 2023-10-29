#include <iostream>
using namespace std;

int main()
{
    int i=1, octal = 0,decimal,rem;
    cout << "Enter the value: " << endl;
    cin >> decimal;
    do {
        rem = decimal % 8;
        decimal = decimal/8;
        octal += rem * i;
        i = i * 10;
    } while (decimal > 0);
    cout << "octal: " << octal << endl;
    return 0;
    }