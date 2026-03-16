# include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums){
    int i = 0;
    //int n = nums.size();
    for (int j = 1; j<nums.size(); j++){
        if(nums[i] != nums[j]){
            nums[i+1] = nums[j];
            i++;
        }
    }
    return i+1;
}


int main() {
    //vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> nums[i];
    }

    int k = removeDuplicates(nums);

    cout << "Unique count = " << k << "\n";
    cout << "Array after removing duplicates: ";
    for (int x = 0; x < k; x++) {
        cout << nums[x] << " ";
    }
    cout << endl;
}