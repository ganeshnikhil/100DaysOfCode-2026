#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;

    cout << "Size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter target: ";
    cin >> target;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left, right;
    int lower_res = n, upper_res = n;

    // Lower Bound
    left = 0;
    right = n - 1;

    while (left <= right) {
        int mididx = left + (right - left) / 2;

        if (arr[mididx] >= target) {
            lower_res = mididx;
            right = mididx - 1;
        } else {
            left = mididx + 1;
        }
    }

    // Upper Bound
    left = 0;
    right = n - 1;

    while (left <= right) {
        int mididx = left + (right - left) / 2;

        if (arr[mididx] > target) {
            upper_res = mididx;
            right = mididx - 1;
        } else {
            left = mididx + 1;
        }
    }

    cout << "Count: " << upper_res - lower_res << endl;

    return 0;
}



