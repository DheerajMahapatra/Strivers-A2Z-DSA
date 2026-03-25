/*
// Brute Force
# include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k){
    int n = nums.size();
    k = k % n;
    
    // Store last k elements
    vector<int> temp(k);
    for (int i = 0; i < k; i++){
        temp[i] = nums[n - k +i];
    }
    
    // Shift remaining elements to right
    for(int i = n - k - 1; i >= 0; i--){
        nums[i+k] = nums[i];
    }
    
    // Last insert the temporary elements
    for(int i = 0; i < k; i++){
        nums[i] = temp[i];
    }
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
    
    cout << "\n";
    cout <<"Before Rotate The Array : ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    
    cout << "\n";
    int k;
    cout << "Enter the Rotation Number: ";
    cin >> k;
    rotate(nums, k);
    
    cout << "\n";
    cout <<"After Right Rotate The Array : ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    
    return 0;
}
*/










// Optimal
# include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k){
    int n = nums.size();
    k = k % n;

    // Step 1: reverse whole array
    reverse(nums.begin(), nums.end());

    // Step 2: reverse first k elements
    reverse(nums.begin(), nums.begin() + k);

    // Step 3: reverse remaining
    reverse(nums.begin() + k, nums.end());

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

    cout << "\n";
    cout <<"Before Rotate The Array : ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

    cout << "\n";
    int k;
    cout << "Enter the Rotation Number: ";
    cin >> k;
    rotate(nums, k);

    cout << "\n";
    cout <<"After Right Rotate The Array : ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

    return 0;
}