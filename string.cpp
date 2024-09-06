#include <iostream>
#include <string>
#include <algorithm> // for std::reverse
#include <cctype>    // for tolower and isalpha

using namespace std; // No need to prefix with std:: anymore

bool isVowel(char ch) {
    ch = tolower(ch); // Convert character to lowercase for easy comparison
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    string inputString;
    
    // Ask the user to input a string
    cout << "Enter a string: ";
    getline(cin, inputString);

    // Reverse the string
    string reversedString = inputString;
    reverse(reversedString.begin(), reversedString.end());

    // Count vowels and consonants
    int vowelCount = 0, consonantCount = 0;
    for(char ch : inputString) {
        if (isalpha(ch)) { // Check if it's an alphabet character
            if (isVowel(ch))
                vowelCount++;
            else
                consonantCount++;
        }
    }

    // Output the results
    cout << "You entered: " << inputString << endl;
    cout << "Reversed string: " << reversedString << endl;
    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Numb of consonants: " << consonantCount << endl;

    return 0;
}
