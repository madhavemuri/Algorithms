#include <string>
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool isVowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;

    return false;
}

int maxVowelSubStr(string str, int k) {
    int vowels = 0;
    int n = str.length();
    for (int i = 0; i < k; i++) {
        vowels+=isVowel(str[i]);
    }
    
    int maxVowels = vowels;

    for (int i = k; i < n; i++) {
        vowels += isVowel(str[i]) - isVowel(str[i-k]);
        maxVowels = max(maxVowels, vowels); 
    }

    return maxVowels;

}

int main() {
    string str = "abciiidef";
    int k = 3;
   int val =  maxVowelSubStr(str, k);

   cout << val << endl;
    return 0;
}

// C++ Template
