/*
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr [], int n){
    for(int i = 0; i<=n-2; i++){
        int mini = i;
        for(int j = i; j<=n-1; j++){
            if (arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}


int main(){
    int n;
    cout << "Enter how many elements in array : ";
    cin >> n;
    int arr[n];
    
    for (int i = 0; i<n; i++){
        cout << "Enter the "<< i+1 << " element :";
        cin >> arr[i];
    }
    
    cout << "Before selection sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    selection_sort(arr, n);
    cout << "After selection sort: "<< "\n" ;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
*/





#include<bits/stdc++.h>
using namespace std;

vector<int> selection_sort(vector<int>& nums){
    int n = nums.size();

    for(int i = 0; i<=n-2; i++){
        int mini = i;
        for(int j = i; j<=n-1; j++){
            if(nums[j] < nums[mini]){
                mini = j;
            }
        }
        int temp = nums[mini];
        nums[mini] = nums[i];
        nums[i] = temp;
    }
    return nums;
}

int main(){
    int n;
    cout << "Enter how many elements will be present in array : ";
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i<n; i++){
        cout << "Enter the " << i+1 << " element : ";
        cin >> nums[i];
    }

    cout << "Before selection sort : \n";
    for(int i = 0; i<n; i++){
        cout << nums[i] << " ";
    }
    cout << "\n";

    vector<int> sorted = selection_sort(nums);

    cout << "After selection sort : \n";

    for(int i = 0; i<n; i++){
        cout << sorted[i] << " ";
    }

}