#include <string>
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool increaseTripletSequence(vector<int> data) {
    int minNum = INT32_MAX;
    int secondMinNum = INT32_MAX;
    int n = data.size();


    for (int i=0; i < n; i++) {
        if (data[i] <= minNum) {
            minNum = data[i];
        } else if (data[i] <= secondMinNum) {
            secondMinNum = data[i];
        } else {
            return true;
        }

    }
    return false;
    // int n = data.size();

    // for (int i = 1; i < n - 1; i++) {
    //     if (data[i] > data[i - 1] && data[i] < data[i+1]) {
    //         return true;
    //     }

    // }
    //return false;
}

int main() {
    vector<int> data = {20,100,10,12,5,13}; //{1, 4, 5, 6, 7, 9, 4, 5};

    bool valid = increaseTripletSequence(data);

    if (valid) {
        cout << "It's a increasing Triplet Sequence.\n";
    }

    return 0;
}

// C++ Template
