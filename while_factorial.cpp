#include <iostream>
using namespace std;

int main(){
    int n;
    
    cout << "Enter a non-negative integer: ";
    cin >> n;
    
    while (n < 0) {
        cout << "Invalid Input, enter a non-negative number: " ;
        cin >> n;
    }
    unsigned long long factorial = 1;
    int i = 2;
    while (i<=n){
        factorial *= i;
        i++;
    }
    cout << "Factorial of " << n << " is " << factorial << endl;
return 0;
}