/*
# include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr){
    int temp = arr[0];
    for (int i = 1; i<arr.size(); i++){
        arr[i-1] = arr[i];
    }
    arr[arr.size() - 1] = temp;
    return arr;
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
    
    cout <<"Before Rotate The Array : ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

    vector<int> ans = rotateArray(nums);
    
    cout << "\n";
    cout <<"After Rotate The Array : ";
    for (int i = 0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    
    return 0;
}
*/







# include<bits/stdc++.h>
using namespace std;

void rotateArrayByOne(vector<int> &nums){
    int temp = nums[0];
    for (int i = 1; i<nums.size(); i++){
        nums[i-1] = nums[i];
    }
    nums[nums.size() - 1] = temp;
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

    cout <<"Before Rotate The Array : ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

    rotateArrayByOne(nums);

    cout << "\n";
    cout <<"After Rotate The Array : ";
    for (int i = 0; i<n; i++){
        cout << nums[i] << " ";
    }

    return 0;
}