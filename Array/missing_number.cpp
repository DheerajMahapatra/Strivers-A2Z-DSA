// Brute Force
/*
# include <bits/stdc++.h>
using namespace std;

int missing_number(vector<int> &nums){
    int n = nums.size();
    
    for(int i = 1; i <= n; i++){
        bool flag = 0;
        
        for(int j = 0; j < n-1; j++){
            if (nums[j] == i){
                flag = 1;
                break;
            }
        }
        
        if (flag == 0) return i;
        
        else{
            return 0;
        }
    }
}

int main(){
    int n;
    cout << "Enter the size of first array: ";
    cin >> n;
    
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> nums[i];
    }
    
    cout << "\nOriginal Array: ";
    for(auto &val : nums){
        cout << val << " ";
    }
    
    cout << "\n\n";
    
    int result = missing_number(nums);
    cout << "The missing number is : " << result ;
    
    return 0;
}
*/




