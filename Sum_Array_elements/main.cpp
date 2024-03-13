#include <iostream>

using namespace std;

int main() {
    int array[2][2];

    cout << "Enter numbers for the 2x2 array:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> array[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            sum += array[i][j];
        }
    }

    cout << "Sum of elements: " << sum << endl;

    return 0;
}
