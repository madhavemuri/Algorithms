#include <string>
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int max_area(vector<int> data) {
    int n = data.size();

    int left = 0;
    int right = n - 1;

    int currentArea = 0;
    int maxArea = 0;
    while (left < right) {
        currentArea = min(data[left], data[right]) * (right - left);
        if (currentArea > maxArea) {
            maxArea = currentArea;
        }
        if (data[left] < data[right]) {
            left++;
        } else {
            right--;
        }

    }

    return maxArea;

}

int main() {
    vector<int> data = {1,8,6,2,5,4,8,3,7};

    int area = max_area(data);

    cout << area << endl;

    return 0;
}

// C++ Template
