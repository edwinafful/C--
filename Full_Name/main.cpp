#include <iostream>

using namespace std;
string display_fullName(string a, string b, string c)
{
   string fullName = a +" "+ b + " " + c;
   return fullName;
}
int main()
{
    cout << "CODE TO DISPLAY FULL NAME" << endl; // CODE TO DISPALY FUULL NAME
    //Declaration of varibales
    string firstName;
    string middleName;
    string lastName;
    //Prompt user and accept values
    cout <<"Enter your Fisrt name: ";
    cin >> firstName;

    cout <<"Enter your Middle name: ";
    cin >> middleName;

    cout <<"Enter your last name: ";
    cin >> lastName;
    // Store the Called function display_fullName in a new variable
    string result = display_fullName(firstName, middleName, lastName);
    //Output the result
    cout <<"Your Name: " << result <<endl;

    return 0;
}
