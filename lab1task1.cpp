#include <iostream>
#include <string>

using namespace std;

int main() {
   
    string input;
    cout << "Enter a string: ";
    getline(cin, input);  

    int wordCount = 0;
    int spaceCount = 0;

   
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            spaceCount++;  
        } else {
            if (i == 0 || input[i - 1] == ' ') {
                wordCount++; 
            }
        }
    }

    
    cout << "Number of words: " << wordCount << endl;
    cout << "Number of spaces: " << spaceCount << endl;

    return 0;
}
