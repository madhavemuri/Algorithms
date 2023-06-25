#include <string>
#include <iostream>
#include <list>
#include <cassert>

using namespace std;

bool isVowel(char ch) {
    char c = tolower(ch);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    }
    return false;
}

string reverseVowel(string str) {
    list<char> vowels;

    for (char ch: str) {
        if (isVowel(ch)) {
                vowels.push_back(ch);
        }
    }

    for (int i=0; i < str.size(); i++) {
        if (isVowel(str[i])) {
            str[i] = vowels.back();
            vowels.pop_back();
        }
    }

    return str;
}

string reverseVowelOpt(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (!isVowel(str[left])) {
            left++;
            continue;
        }
        if (!isVowel(str[right])) {
            right--;
            continue;
        }
        swap(str[left], str[right]);
        left++;
        right--;
    }
    return str;
}

int main() {

    string inp = "hello";
    string out = "holle";

    assert(reverseVowel(inp) == out);

    assert(reverseVowelOpt(inp) == out);

    return 0;
}

// C++ Template
