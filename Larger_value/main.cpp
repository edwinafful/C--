#include <iostream>

using namespace std;

int large(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    cout << "FINDING THE LARGER NUMBER" << endl;
    int num1;
    cout <<"Enter value for num1: ";
    cin >> num1;

    int num2;
    cout <<"Enter value for num2: ";
    cin >> num2;

    int larger_value = large(num1, num2);
    cout<< "The larger value is: " << larger_value << endl;
    return 0;
}
