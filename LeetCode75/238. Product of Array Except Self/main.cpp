#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> productOfArrExceptSelf(vector<int> data) {
    int n = data.size();
    vector<int> leftProduct(n, 1);

    for (int i = 1; i < n; i++) {
        leftProduct[i] *= leftProduct[i-1] * data[i-1];
    }

    int rightProduct = 1;
    for (int i=n-1; i >= 0; i--) {
        leftProduct[i] *= rightProduct;
        rightProduct *= data[i];
    }

    return leftProduct;

}

int main() {

    vector<int> nums = {1,2,3,4};

    for (int val : productOfArrExceptSelf(nums)) {
        cout << val << " ";
    }
    cout << "\n";


    return 0;
}

// C++ Template
