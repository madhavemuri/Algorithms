#include <string>
#include <iostream>
#include <cassert>

using namespace std;

string gcd(string str1, string str2) {
    string result;

    int len1 = str1.length();
    int len2 = str2.length();
    if (len1 == 0 || len2 == 0) return "";

    if (len1 < len2) {
        swap(str1, str2);
    }

    int i = 0;
    while (i < str1.length()) {
        for (int j = 0; j < str2.length(); j++) {
            if (str1[i + j] != str2[j]) {
                return "";
            }
        }
        i += str2.length();
    }

    cout << "gcd : " << str2 << "\n";
    return result += str2;
}

string gcds(string str1, string str2) {
    if (str1 + str2 != str2 + str1) {
        return "";
    }

    int len1 = str1.length();
    int len2 = str2.length();

    while (len2 != 0) {
        int temp = len2;
        len2 = len1 % len2;
        len1 = temp;
    }

    return str1.substr(0, len1);

}

int main() {
    // Test case 1
    string inp1 = "abcabc";
    string inp2 = "abc";

    string out = gcds(inp1, inp2);

    assert(out == "abc");
    
    // Test case 2
    string inp3 = "abcabc";
    string inp4 = "acc";

    string out1 = gcds(inp3, inp4);

    assert(out1 == "");

    // Test case 3
    string inp5 = "ababab";
    string inp6 = "abab";

    string out2 = gcds(inp6, inp5);

    assert(out2 == "ab");
    
    

    cout << "all test cases are passed";
    return 0;
}