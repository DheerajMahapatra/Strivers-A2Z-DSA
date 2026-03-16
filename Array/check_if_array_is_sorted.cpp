#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& nums) {
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        if (nums[i] < nums[i - 1])
            return false;
    }

    return true;
}

int main() {
    // int arr[] = {1, 2, 3, 4, 5}, n = 5;
    // printf("%s", isSorted(arr, n) ? "True" : "False");
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> nums[i];
    }

    int ans = isSorted(nums);

    if(ans == false){
        cout << "The Array is not Sorted";
    }
    else{
        cout << "The Array is Sorted";
    }

    return 0;
}
