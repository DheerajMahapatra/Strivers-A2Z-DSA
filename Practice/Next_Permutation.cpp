/*
# include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    next_permutation(nums.begin(), nums.end());
}

int main(){
    vector<int> nums ={1,2,3};
    nextPermutation(nums);

    for(auto &val : nums){
        cout << val << " ";
    }
    return 0;
}
*/

# include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums){
    int n = nums.size();
    int i;

    // Finding the pivot point
    for (i = n-2; i>=0; i--){
        if (nums[i] < nums[i+1]){
            break;
        }
    }

    // Finding the next greater
    if(i >= 0){
        for (int j = n-1; j >=0; j--){
            if (nums[j] > nums[i]){
                swap (nums[j], nums[i]);
                break;
            }
        }
    }

    // Reverse=ing the suffix
    reverse(nums.begin() + i + 1, nums.end());

    // Printing the Next Permutation
    for (int k = 0; k < n; k++){
        cout << nums[k] << " ";
    }
}

int main(){
    vector<int> nums = {1,2,3};
    nextPermutation(nums);
}
