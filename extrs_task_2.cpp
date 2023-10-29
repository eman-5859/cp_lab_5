#include <iostream>
using namespace std;
int main()
{
    int i =1;
    int count = 0;
    do {
        cout << i << " ";
        i *= 2;
        count++;
    } while (count < 10);
    cout << endl;
    return 0;
}