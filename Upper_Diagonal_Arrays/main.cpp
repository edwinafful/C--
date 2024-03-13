#include <iostream>

using namespace std;

int main()
{
    cout << "CODE TO FIND THE UPPER DIAGONAL OF 3 BY 3 ARRAYS" << endl;

    int arry[3][3] = {{1, 2, 3}, {4, 5, 6,}, {7, 8, 9}};

    cout<<"Upper diagonal: "<< arry[0][1] << "," << arry[0][2] <<","  << arry[1][2];

    return 0;
}
