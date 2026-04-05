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



// Better
/*
#include <bits/stdc++.h>
using namespace std;

int missing_number(vector<int> &nums){
    int n = nums.size();
    
    vector<int> hash(n+1, 0);
    
    for(int i = 0; i < n-1; i++){
        hash[nums[i]] = 1;
    }
    
    for(int i = 1; i <= n; i++){
        if(hash[i] == 0){
            return i;
        }
    }
    
    return -1;
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
    
    cout << "\nOriginal Array: ";
    for(auto &val : nums){
        cout << val << " ";
    }
    cout << "\n\n";
    
    int result = missing_number(nums);
    
    if(result == -1){
        cout << "No missing number. ";
    } else {
        cout << "Missing number is: " << result;
    }
    
    return 0;
}
*/









// Better For Multiple Values
/*
#include <bits/stdc++.h>
using namespace std;

vector<int> missing_numbers(vector<int> &nums){
    
// Step 1: find max element
int maxi = *max_element(nums.begin(), nums.end());

// Step 2: hash array till max
vector<int> hash(maxi + 1, 0);

// Step 3: mark present
for(int i = 0; i < nums.size(); i++){
    hash[nums[i]] = 1;
}

// Step 4: find missing
vector<int> missing;
for(int i = 1; i <= maxi; i++){
    if(hash[i] == 0){
        missing.push_back(i);
    }
}

return missing;
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
    
    cout << "\nOriginal Array: ";
    for(auto &val : nums){
        cout << val << " ";
    }
    cout << "\n\n";
    
    vector<int> result = missing_numbers(nums);
    
    if(result.empty()){
        cout << "No missing numbers.";
    }
    else{
        cout << "Missing numbers are: ";
        for(auto &val : result){
            cout << val << " ";
        }
    }
    
    return 0;
}
*/









// Optimal Using SUM
/*
#include <bits/stdc++.h>
using namespace std;

int missing_number(vector<int> &nums){
    int n = nums.size();
    
    // Step 1: Expected sum
    int expectedSum = ((n+1) * (n + 2)) / 2;
    
    // Step 2: Actual sum of array
    int actualSum = 0;
    for(int i = 0; i < n; i++){
        actualSum += nums[i];
    }
    
    // Step 3: Missing number
    return expectedSum - actualSum;
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
    
    cout << "\nOriginal Array: ";
    for(auto &val : nums){
        cout << val << " ";
    }
    cout << "\n\n";

    int result = missing_number(nums);
    cout << "Missing number is: " << result;
    
    return 0;
}
*/








/*
// Optimal Using XOR
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& a, int N) {
    int xor1 = 0, xor2 = 0;
    
    int n = N - 1;
    
    // Step 1: XOR of array and 1 to N-1
    for(int i = 0; i < n; i++) {
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i + 1);
    }
    
    // Step 2: include N
    xor1 = xor1 ^ N;

    // Step 3: missing number
    return xor1 ^ xor2;
}

int main(){
    int N;
    cout << "Enter N (range 1 to N): ";
    cin >> N;
    
    vector<int> arr(N - 1);
    
    cout << "Enter " << N-1 << " elements: \n";
    for(int i = 0; i < N-1; i++){
        cin >> arr[i];
    }
    
    cout << "\nArray: ";
    for(auto &val : arr){
        cout << val << " ";
    }
    cout << "\n\n";
    
    int result = missingNumber(arr, N);
    cout << "Missing number is: " << result;
    
    return 0;
}
*/









// Striver Solution
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int xorVal = nums.size();
    
    for(int i = 0; i < nums.size(); i++){
        xorVal ^= i ^ nums[i];
    }
    
    return xorVal;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements (range 0 to n):\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "\nArray: ";
    for(auto &val : arr){
        cout << val << " ";
    }
    cout << "\n\n";

    int result = missingNumber(arr);
    cout << "Missing number is: " << result;

    return 0;
}