#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n1, n2;

    cout << "Size1: ";
    cin >> n1;

    cout << "Size2: ";
    cin >> n2;

    if (n1 != n2) {
        cout << "false\n";
        return 0;
    }

    vector<int> arr1(n1);
    vector<int> arr2(n2);

    cout << "Enter elements in array one: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements in array two: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    unordered_map<int, int> freq;

    for (int x : arr1) {
        freq[x]++;
    }

    for (int x : arr2) {
        freq[x]--;
    }

    for (auto &p : freq) {
        if (p.second != 0) {
            cout << "false\n";
            return 0;
        }
    }

    cout << "true\n";
    return 0;
}