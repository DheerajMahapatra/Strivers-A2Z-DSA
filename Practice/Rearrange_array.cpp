// Brute Force
/*
# include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums){
    vector<int> pos;
    vector<int> neg;
    // vector<int> result;
    
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }
    
    // int pnt1=0;
    // int pnt2 = 0;
    
    // for(int i = 0; i < nums.size(); i++){
        //     if (i % 2 == 0){
            //         result.push_back(pos[pnt1]);
            //         pnt1++;
            //     }
            //     else{
                //         result.push_back(neg[pnt2]);
                //         pnt2++;
                //     }
                // }
                
                for (int i = 0; i < nums.size()/2; i++)
                {
                    nums[2 * i] = pos[i];
                    nums[2 * i + 1] = neg[i];
                }
                
                return nums;
            }

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    rearrangeArray(nums);
    for(auto &val : nums){
        cout << val << " ";
    }
    return 0;
}
*/







// Optimal

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);

    int posIndex = 0;
    int negIndex = 1;

    for (int i = 0; i < n ; i++){
        if (nums[i] > 0){
            result[posIndex] = nums[i];
            posIndex += 2;
        }
        else{
            result[negIndex] = nums[i];
            negIndex += 2;
        }
    }

    return result;

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
    cout <<"Original Array : ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

    vector<int> result = rearrangeArray(nums);

    cout << "\n";
    cout <<"After Arrange The Array : ";
    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }

    return 0;
}