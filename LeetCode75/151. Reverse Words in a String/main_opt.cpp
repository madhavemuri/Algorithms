#include <string>
#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;

string reverseWords(string str) {
    // Reverse the entire string
    reverse(str.begin(), str.end());

    int n = str.length();
    int i = 0;  // pointer for placing characters
    int j = 0;  // pointer for reading characters

    // Reverse each word and remove additional spaces
    while (j < n) {
        // Skip leading spaces
        while (j < n && str[j] == ' ') {
            j++;
        }

        // Copy non-space characters
        while (j < n && str[j] != ' ') {
            str[i++] = str[j++];
        }

        // Add a space after each word if it's not the last word
        if (j < n) {
            str[i++] = ' ';
        }
    }

    // Resize the string to the new size
    str.resize(i);

    // Reverse each word individually
    int start = 0;
    for (int end = 0; end < i; end++) {
        if (str[end] == ' ') {
            reverse(str.begin() + start, str.begin() + end);
            start = end + 1;
        }
    }

    // Reverse the last word
    reverse(str.begin() + start, str.end());

    return str;
}

int main() {
    string cities = "pune  bangalore hyderabad   chennai    mumbai";
    string reverse = "mumbai chennai hyderabad bangalore pune";
    assert(reverseWords(cities) == reverse);

    return 0;
}
