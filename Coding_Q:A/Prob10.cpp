//PALINDROME
#include <iostream>
#include <string>
#include <algorithm> // For transform function
using namespace std;

bool isPalindrome(string str) {
    // Transform to lowercase and remove non-alphanumeric characters
    string filteredStr;
    for (char c : str) {
        if (isalnum(c)) {
            filteredStr += tolower(c);
        }
    }

    int n = filteredStr.length();
    int i = 0;
    int j = n - 1;
    
    while (i < j) {
        if (filteredStr[i] != filteredStr[j]) {
            return false;
        }
        i++;
        j--;
    }
    
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    cout << (isPalindrome(str) ? "true" : "false") << endl;
    return 0;
}
