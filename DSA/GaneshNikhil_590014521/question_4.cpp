#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n  , k;
    cout<<"Size: "
    cin >> n;
    

    cout<<"No of rotations: ";
    cin>>k;


    vector<int> arr(n);

    cout<<"Enter elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // array rotation 
    int k = k % n;

    vector<int> temp(n);

    // copy first n -d 

    for(int i = 0 ; i < n - k ; i++){
        temp[i] = arr[k + i];
    }

    // copy first d elements 
    for(int i = 0. i < d ; i++){
        temp[n - k + i] = arr[i];
    }

    for (int i = 0; i < n; i++){
        arr[i] = temp[i];
    }

     // Print the rotated vector
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
        
    // // reverse first d elements 
    // reverse(arr.begin(), arr.begin() + k);

    // // reverse the remaining n - d 

    // reverse(arr.begin() + d , arr.end());

    // reverse(arr.begin() , arr.end());

}