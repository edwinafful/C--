#include <iostream>

using namespace std;

int main()
{
    cout << "CODE TO SORT ELEMENTS OF AN ARRAY IN DESCENDING ORDER!" << endl;
    // OUR LIST OF NUMBERS
    int arry[]={5, 3, 2, 6 , 4, 7, 8, 9, 1} ;
    // CALCULATING THE SIZE OF THE ELEMENT IN THE ARRAY BY DIVIDING IT BY A SINGLE ELEMENT
    int n = sizeof(arry) / sizeof(arry[0]);

    //Start sorting the numbers from the begining
    for(int i = 0; i < n - 1; i++)
    {
        // Go through each pair of numbers
        for (int j = 0; j + 1 < n - 1 ; j++)
        {
            // Swapping numbers if the first number is smaller than the next number
            if(arry[j] < arry[j + 1])
            {
                int temp = arry[j];
                arry[j]={arry[j + 1]};
                arry[j + 1]= {temp};
            }
        }
    }
       cout << "Sorted numbers in descending order: ";
    for (int i = 0; i < n; ++i){
        cout << arry[i] << " ";
    }
    return 0;
}
