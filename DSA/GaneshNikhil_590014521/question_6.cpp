#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;

    cout << "Size1: ";
    cin >> n1;

    cout << "Size2: ";
    cin >> n2;

    vector<int> arr1(n1);
    vector<int> arr2(n2);

    cout << "Enter elements of sorted array one: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of sorted array two: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    vector<int> uni;
    int i = 0, j = 0;

    while (i < n1 && j < n2) {

        if (i > 0 && arr1[i] == arr1[i - 1]) {
            i++;
            continue;
        }

        if (j > 0 && arr2[j] == arr2[j - 1]) {
            j++;
            continue;
        }

        if (arr1[i] < arr2[j]) {
            uni.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            uni.push_back(arr2[j]);
            j++;
        }
        else {
            uni.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while (i < n1) {
        if (i == 0 || arr1[i] != arr1[i - 1])
            uni.push_back(arr1[i]);
        i++;
    }

    while (j < n2) {
        if (j == 0 || arr2[j] != arr2[j - 1])
            uni.push_back(arr2[j]);
        j++;
    }

    cout << "\nUnion: ";
    for (int x : uni) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}