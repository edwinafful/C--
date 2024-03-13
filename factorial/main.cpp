#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    else {
        int fact = 1;
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        return fact;
    }
}

int main() {
    int num;
    cout << "Enter a positive value: ";
    cin >> num;

    if (num < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else
        cout << "Factorial of " << num << " = " << factorial(num);

    return 0;
}
