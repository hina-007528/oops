#include <iostream>
#include <string>

using namespace std;

int main() {
   
    string input;
    cout << "Enter a string: ";
    getline(cin, input);  

    int start = 0;          
    int end = input.length() - 1;  

    bool isPalindrome = true;

    while (start < end) {
        
        if (input[start] == ' ') {
            start++;
        } else if (input[end] == ' ') {
            end--;
        }
       
        else if (input[start] != input[end]) {
            isPalindrome = false;
            break;
        } else {
            start++;
            end--;
        }
    }

    
    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
