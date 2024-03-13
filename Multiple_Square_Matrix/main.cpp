#include <iostream>
using namespace std;

void mul_Matrices(int arry_1[][2], int arry_2[][2], int result[][2]) {
    result[0][0] = arry_1[0][0] * arry_2[0][0] + arry_1[0][1] * arry_2[1][0];
    result[0][1] = arry_1[0][0] * arry_2[0][1] + arry_1[0][1] * arry_2[1][1];
    result[1][0] = arry_1[1][0] * arry_2[0][0] + arry_1[1][1] * arry_2[1][0];
    result[1][1] = arry_1[1][0] * arry_2[0][1] + arry_1[1][1] * arry_2[1][1];
}

int main() {
    int array_1[2][2] = {{1, 2},
                         {3, 4}};

    int array_2[2][2] = {{5, 6},
                         {7, 8}};

    int result[2][2];

    // Multiply matrices
    mul_Matrices(array_1, array_2, result);

    // Print result
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << result[i][j] << " " ;
        }
        cout << endl;
    }
   return 0;
}
