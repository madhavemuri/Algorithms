#include <string>
#include <iostream>
#include <cassert>

using namespace std;

string mergeAlternatively(string word1, string word2) {
    int len1 = word1.size();
    int len2 = word2.size();

    cout << "First word is : " << word1 <<
            "\nSecond word is : "<< word2 << "\n";

    if (len1 == 0) return word2;

    if (len2 == 0) return word1;

    cout << "lengths are : " << len1 << " and " << len2 ;

    string result;

    int j=0, i=0;
    for (i=0; i < len1 && i < len2; i++) {

        result += word1[i];
        result += word2[i];
    }

    cout << result << "i:" << i << "\n";

    while (i < len1) {
        result += word1[i++];
    }

    while (i < len2) {
        result += word2[i++];
    }

    return result;
}

int main() {

    string inp1 = "hello";
    string inp2 = "world!!";

    // Test case 1
    assert(mergeAlternatively(inp1, inp2) == "hweolrllod!!");

    string inp3 = "madhav";
    string inp4 = "";

    // Test case 2
    assert(mergeAlternatively(inp3, inp4) == "madhav");

    // Test case 3
    assert(mergeAlternatively(inp4, inp3) == "madhav");

    // Test case 4
    string inp5 = "abc";
    string inp6 = "def";
    string output2 = mergeAlternatively(inp5, inp6);
    assert(output2 == "adbecf");

    // Test case 5
    string inp7 = "xyz";
    string inp8 = "123456";
    string output3 = mergeAlternatively(inp7, inp8);
    assert(output3 == "x1y2z3456");

    cout << "All test cases are passed!! \n";

    return 0;
}