#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, ans;
    char op, x;
    do{
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter the operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;
        switch (op){
            case '+':
                ans = a + b;
                cout << ans << "\n";
                break;
            case '-':
                ans = a - b;
                cout << ans << "\n";
                break;
            case 'x':
            case 'X':
                ans = a * b;
                cout << ans << "\n";
                break;
            case '/':
                ans = a / b;
                cout << ans << "\n";
                break;
            case '^':
                ans = pow(a,b);
                cout << ans << "\n";
                break;
            default:
                cout << "Invalid operator" << endl;
        }
        cout << "Do you want to calculate further? ";
        cin >> x;
    }while (x == 'y' || x == 'Y');
    cout << "\n Thanks" << endl;
    
    return 0;
}