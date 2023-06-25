#include <string>
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;
int moveZeroes(vector<int> &data) {
    int n = data.size();

    int idx=0;
    for (int i = 0; i < n; i++) {
        if (data[i] != 0) {
            data[idx++] = data[i];
          //  data[i] = 0;
        }
    }

    while (idx < n) {
        data[idx++] = 0;
    }

    return idx;

    // list<int> result;

    // for (int val: data) {
    //     if (val == 0) {
    //         result.push_back();
    //     } else {
    //         result.push_front
    //     }
    // }

    // int idx = 0;

    // for (!result.empty()) {
    //     data[idx++] = result.pop();
    // }
    // return data.size();
}

int main() {
    // nums = [0,1,0,3,12]
    vector<int> data = {0, 1, 0, 3 , 12};

    int len = moveZeroes(data);

    for (int val: data) {
        cout << val << " ";
    }
    cout << endl;
    cout << len << endl;

    return 0;
}

// C++ Template
