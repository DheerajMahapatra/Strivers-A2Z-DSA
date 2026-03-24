/*
#include <bits/stdc++.h>
using namespace std;

void leader(vector<int> &nums){
    int n = nums.size();
    vector<int> result;

    for (int i = 0; i < n; i++){
        bool isLeader = true;
        
        for (int j = i + 1; j < n; j++){
            if (nums[j] > nums[i]){
                isLeader = false;
                break;
            }
        }
        
        if (isLeader){
            result.push_back(nums[i]);
        }
    }

    for(auto val : result){
        cout << val << " ";
    }
}

int main(){
    vector<int> nums = {10,22,12,3,0,6};
    leader(nums);
    return 0;
}
*/















# include <bits/stdc++.h>
using namespace std;

vector<int> leaderOfArray(vector<int> &nums){
        int n = nums.size();
        int leader = nums[n-1];

        vector<int> result;
        result.push_back(nums[n-1]);

        for (int i = n -1; i >= 0; i--){
            if (nums[i] > leader){
                result.push_back(nums[i]);
                leader = nums[i];
            }
        }

        reverse(result.begin(), result.end());
        for(auto val : result){
            cout << val << " ";
        }

}


int main(){
    vector<int> nums = {10,22,12,3,0,6};
    leaderOfArray(nums);
    return 0;
}