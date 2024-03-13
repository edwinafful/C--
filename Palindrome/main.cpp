#include <iostream>
#include <cctype>
using namespace std;

bool isPalindrome(char word[], int length) {
    for (int i = 0; i < length / 2; ++i) {
        if (tolower(word[i]) != tolower(word[length - i - 1])) {
            return false;
        }
    }
    return true;
}

int main() {
    const int MAX_LENGTH = 100;
    char word[MAX_LENGTH];

    cout << "Enter a word: ";
    cin >> word;

    int length = 0;
    while (word[length] != '\0') {
        ++length;
    }

    if (isPalindrome(word, length)) {
        cout << "It is Palindrome" << endl;
    } else {
        cout << "It is not Palindrome" << endl;
    }

    return 0;
}
