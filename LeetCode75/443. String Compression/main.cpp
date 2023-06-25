#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <cassert>

using namespace std;

int compressedLen(vector<char> &data) {
    int n = data.size();
    int i = 0;
    int count = 1;
    int index = 0;

    for (i = 1; i <= n; i++ ) {
        if (i < n && data[i] == data[i-1]) {
            count++;
        } else {
            data[index++] = data[i-1]; 
            
            if (count > 1) {
                string strCount = to_string(count);
                for (char ch: strCount) {
                    data[index++] = ch;
                }
                count = 1;
            }
            
        }

    }

    return index;
    
    // if (n == 1) return 1;

    // map<char, int> table;
    // int count = 0;

    // for (char ch: data) {
    //     table[ch]++;
    //     if (table[ch] == 10 || table[ch] == 100 || table[ch] == 1000) {
    //         count++;
    //     }
    // }

    // return table.size() * 2 + count;
}

int main() {
    vector<char> data = {'a','a','b','b','c','c','c'};
   
   int len = compressedLen(data);
    
   int count = 1;
   for (char ch : data) {
    cout << ch << " ";
    if (count++ == len)
        break;
   }
    
    return 0;
}

// C++ Template
