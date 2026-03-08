/*
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    for (int i = 0; i<n; i++){
        int j = i;
        while (j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            
            j--;
        }
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
    
    cout << "Before Insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    insertion_sort(arr, n);
    cout << "After Insertion sort: "<< "\n" ;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
*/














/*
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    int step = 1;
    
    for (int i = 1; i < n; i++){
        int j = i;
        
        while (j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
        
        cout << "Step " << step << ": ";
        
        for(int k = 0; k < n; k++){
            cout << arr[k] << " ";
        }
        
        cout << endl;
        step++;
    }
}

int main(){
    
int n;

cout << "Enter how many elements in array : ";
cin >> n;

int arr[n];

for(int i = 0; i < n; i++){
    cout << "Enter the " << i+1 << " element : ";
    cin >> arr[i];
}

cout << "\nBefore Insertion sort:\n";

for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
}

cout << "\n\n";

insertion_sort(arr, n);

cout << "\nAfter Insertion sort:\n";

for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
}

return 0;
}
*/










#include<bits/stdc++.h>
using namespace std;

vector<int> insertion_sort(vector<int>& nums){
    int n = nums.size();
    for (int i = 1; i < n; i++){
        int j = i;
        
        while (j > 0 && nums[j-1] > nums[j]){
            int temp = nums[j-1];
            nums[j-1] = nums[j];
            nums[j] = temp;
            j--;
        }
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

    cout << "Before Insertion sort : \n";
    for(int i = 0; i<n; i++){
        cout << nums[i] << " ";
    }
    cout << "\n";

    vector<int> sorted = insertion_sort(nums);

    cout << "After Insertion sort : \n";

    for(int i = 0; i<n; i++){
        cout << sorted[i] << " ";
    }

}