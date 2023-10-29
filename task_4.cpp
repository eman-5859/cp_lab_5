#include <iostream>
using namespace std;

int main()
{
    int i;
    float a, b;
    do{
        cout << "Enter the first number: " << endl;
        cin >> a;
        cout << "Enter the second number: " << endl;
        cin >> b;
        cout << "1-Add. " << endl << "2-devision." << endl << "3-subtraction. " << endl << "4-multiplication " << endl;
        cout << "Enter the operation: " << endl;
        cin >> i;
            switch (i){
            case 1:
                cout << "Add: " << a + b << endl;
                break;
         case 2:
            cout << "devision: " << a / b << endl;
            break;
         case 3: 
            cout << "subtraction: " << a - b << endl;
            break;
        
         case 4:
            cout << "multiplication: " << a * b << endl;
            break;
         default:
             cout << "Please enter the correct info." << endl;
                 break;
       
        }
    } while (i > 0);
    return 0;

}
