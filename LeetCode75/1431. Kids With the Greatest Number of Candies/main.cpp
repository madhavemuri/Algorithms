#include <string>
#include <iostream>
#include <vector>
#include <algorithm> // max_element()
#include <cassert>

using namespace std;

vector<bool> isGreater(vector<int> data, int extra) {
    int maxVal = *max_element(data.begin(), data.end());
    vector<bool> result = {};

    for (int val  : data) {
        if (val + extra >= maxVal) {
            result.push_back(true);
        } else {
            result.push_back(false);
        }
    }

    return result;
}

int main() {
    vector<int> data = {1,2,1,1,2} ;

    int extra_candies = 1;
    
    vector<bool> out = isGreater(data, extra_candies);

    for (int val : out) {
        cout << (val ? "true" : "false") << " "; 
    }
    cout << "\n";

    return 0;
}
