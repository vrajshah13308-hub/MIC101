#include <iostream>
using namespace std;

int main(){
    int n;
    
    do {
        cout << "Enter non negative integer: ";
        cin >> n;
        if (n < 0) {
        cout << "Invalid input." << endl;
        }
    }while (n < 0);

    unsigned long long factorial = 1;
    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i<=n);

    cout << "Factorial of " << n << " is " << factorial << endl;
    return 0;
    }