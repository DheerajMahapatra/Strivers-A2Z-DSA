#include <bits/stdc++.h>
using namespace std;

// Function to find the single non-repeating element
int getSingleElement(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int cnt = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] == num)
                cnt++;
        }

        if (cnt == 1) return num;
    }

    return -1;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cout << "Enter the " << i+1 << " element: ";
        cin >> arr[i];
    }

    cout << "\nArray: ";
    for(auto &val : arr){
        cout << val << " ";
    }
    cout << "\n\n";

    int result = getSingleElement(arr);
    cout << "Single non-repeating element: " << result;

    return 0;
}