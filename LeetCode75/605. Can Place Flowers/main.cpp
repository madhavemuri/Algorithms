#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool canPlaceFlowers(vector<int> data, int n) {

    int size = data.size();

    for (int i = 0; i < size; i++ ) {
        if (data[i] == 0 &&  (i == 0 || data[i-1] == 0) && 
                             (i == size - 1 || data [i+1] == 0)) {
            data[i] = 1;
            n--;
        }
        if (n == 0)
            return true;
    }

    return false;
}

int main() {
    vector<int> data = {1,0,0,0,1}; //{1, 0, 1, 1, 0, 0, 0, 1};

    int n = 2;

    cout << (canPlaceFlowers(data, n) ? "true" : "false") << "\n";

    return 0;
}

// C++ Template
