/*
# include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n){
    int largest = arr[0];
    for (int i = 0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}


int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cout << "Enter "<< i+1 <<" elements: ";
        cin >> arr[i];
    }

    int ans = largestElement(arr, n);

    cout << "Largest Element is: " << ans;

    return 0;
}
*/






# include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &nums){
    int n = nums.size();
    int largest = nums[0];
    for (int i = 0; i<n; i++){
        if(nums[i]>largest){
            largest = nums[i];
        }
    }
    return largest;
}


int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cout << "Enter "<< i+1 <<" elements: ";
        cin >> arr[i];
    }

    int ans = largestElement(arr);

    cout << "Largest Element is: " << ans;

    return 0;
}