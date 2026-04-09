#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxi = 0;
    int cnt = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 1) {
            cnt++;
            maxi = max(maxi, cnt);
        } else {
            cnt = 0;
        }
    }

    return maxi;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cout << "Enter the "<< i+1 <<" element: ";
        cin >> arr[i];
    }

    cout << "\nArray: ";
    for(auto &val : arr){
        cout << val << " ";
    }
    cout << "\n\n";

    int result = findMaxConsecutiveOnes(arr);
    cout << "Maximum consecutive 1s: " << result;

    return 0;
}