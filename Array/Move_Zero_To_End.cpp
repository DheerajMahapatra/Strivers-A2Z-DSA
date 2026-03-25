#include <bits/stdc++.h>
using namespace std;


vector<int> moveZeroes(vector<int>& arr) {
    vector<int> temp;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {;
            temp.push_back(arr[i]);
        }
    }

    while (temp.size() < arr.size()) {
        temp.push_back(0);
    }

    return temp;
}


int main() {
    //vector<int> arr = {0, 1, 0, 3, 12};

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "\n";
    cout << "Array Before moving zeroes: ";
    for (auto &val : arr) {
        cout << val << " ";
    }

    cout << "\n";
    vector<int> result = moveZeroes(arr);


    cout << "\n";
    cout << "Array After moving zeroes: ";
    for (auto &val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
