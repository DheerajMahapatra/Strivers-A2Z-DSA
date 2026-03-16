#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums){
    int cnt = 0;
    int n = nums.size();

    for(int i = 0; i < n-1; i++){
        if(nums[i] > nums[i+1]){
            cnt++;
        }
    }

    // check last and first element
    if(nums[n-1] > nums[0]){
        cnt++;
    }

    return cnt <= 1;
}

int main(){

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> nums[i];
    }

    bool ans = check(nums);

    if(ans){
        cout << "True (Array is Sorted and Rotated)";
    }
    else{
        cout << "False (Array is NOT Sorted and Rotated)";
    }

    return 0;
}