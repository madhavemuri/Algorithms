#include <string>
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int maxSumofKsubArr(vector<int> data, int k)  {
    int n = data.size();

    double max_avg = 0;
    double sum = 0;
     for (int i = 0; i < k; i++)
        sum += data[i];

    max_avg = sum /k;

    for (int i = k; i < n ; i++) {
        sum += data[i] - data[i-k];
        double avg = sum / k;
        max_avg = max(max_avg, avg);
    }

    return max_avg;
}

int main() {
    vector<int> data = {1,12,-5,-6,50,3};
    int k = 4;

    int val = maxSumofKsubArr(data, k);

    cout << val << endl;

    return 0;
}

// C++ Template
