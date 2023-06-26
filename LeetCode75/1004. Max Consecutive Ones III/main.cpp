#include <iostream>
#include <vector>

using namespace std;

int longestOnes(vector<uint8_t>& data, int k) {
    int n = data.size();
    int zeroes = 0;
    int left = 0;
    int maxOnes = 0;

    for (int right = 0; right < n; right++)  {
        if (data[right] == 0) {
            zeroes++;
        }

        while (zeroes > k) {
            if (data[left] == 0) {
                zeroes--;
            }
            left++;
        }
        maxOnes = max(maxOnes, right - left + 1);
    }

    return maxOnes;

    // int n = data.size();


    // int j = 0;
    // int i = 0;
    // int Ones = 0;
    // while (j < k || data[i] == 1) {
    //     if (data[i] == 0) {
    //         j++;
    //     }
    //     i++;
    //     Ones++;
    // }

    // int maxOnes = i;

    // for (; i < n; i++) {
    //     Ones += data[i]  - (1 - data[i-k]);
    //     maxOnes = max(maxOnes, Ones);
    // }

    // return maxOnes;
}

int main() {
    vector<uint8_t> data = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    
//{1,1,1,0,0,0,1,1,1,1,0};
    int k = 3;

    int val = longestOnes(data, k);

    cout << val << endl; 

    return 0;
}

// C++ Template
