#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <cassert>

using namespace std;

int maxNofKsumPairs(vector<int> data, int k) {
    unordered_map<int, int> freq;

    int count = 0;

    for (int val: data) {
        int comp = k - val;
        if (freq[comp] > 0) {
            count++;
            freq[comp]--;
        } else {
            freq[val]++;
        }
    }

    return count;
    // int n = data.size();

    // int sum = 0;
    // int left = 0;
    // int right = n - 1;
    // int count = 0;

    // while (left < right) {
    //     sum = data[left] + data[right];    
    //     if (sum == k ) {
    //         left++;
    //         right--;
    //        // if (left != right)
    //             count++;
    //     } else if (sum < k) {
    //         left++;
    //     } else {
    //         right--;
    //     }
    // }

    // return count;
}


int main() {
    vector<int> data = {4,4,1,3,1,3,2,2,5,5,1,5,2,1,2,3,5,4}; // {3, 1, 3, 4, 3}; //{1, 3, 5, 3, 4};

    int sum = 2; //6;

    int op = maxNofKsumPairs(data, sum);

    cout << op << endl;

    return 0;
}

// C++ Template
