#include <iostream>
using namespace std;

int main()
{
    int i,fictorial=1;
    cout << "Enter the value of i" << endl;
    cin >> i;
    do {
        fictorial = fictorial * i;
        i--;
    } while (i > 0);

    cout << "Fictorial of i: " << fictorial << endl;
    return 0;
    }