#include <string>
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool isSubsequence(string str1, string str2) {
    int len1 = str1.length();
    int len2 = str2.length();

    int i = 0;
    int j = 0;

    while (i < len1 && j < len2) {
        if (str1[i] == str2[j]) {
            j++;
        }
        i++;
    }

    return j == len2;

}

int main() {
    string str1 = "abghiok";
    string str2 = "ahmk";

    bool isTrue = isSubsequence(str1, str2);

    if (isTrue) {
        cout << "str2 in subsequence of str1" << endl;
    }

    return 0;
}

// C++ Template
