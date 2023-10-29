#include <iostream>
using namespace std;
int main()
{
    int i = 7;
    int count = 0;
    do {
        cout<<i<<" ";
        i += 7;
        count++;
    } while (count < 14);
  cout<<endl;
    return 0;
}