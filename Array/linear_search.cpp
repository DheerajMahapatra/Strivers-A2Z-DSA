#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &nums, int  target){
    // int n = arr.size();
    for (int i = 0; i<nums.size(); i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter the size of the Array: ";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cout << "Enter the " << i+1<< " Element :";
        cin >> arr[i];
    }

    cout << "\n";
    cout <<"Original Array: ";
    for(auto &val: arr){
        cout << val << " ";
    }

    cout << "\n";
    int num;
    cout << "Enter the number to search: ";
    cin >> num;
    
    cout << "\n";
    int result = linearSearch(arr,num);
    cout << "Number found in " << result << " index:";
}