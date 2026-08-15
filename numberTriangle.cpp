#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << setw(n - i + 1);

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}