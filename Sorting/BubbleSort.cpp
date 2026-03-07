/*
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = n-1; i>=0; i--){
        int didSwap = 0;
        for(int j = 0; j<=i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0){
            break;
        }
        cout <<i<< " Step\n";
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
    
    bubble_sort(arr, n);
    cout << "After Bubble sort: "<< "\n" ;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
*/









/*
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    int step = 1;
    
    for(int i = n-1; i >= 0; i--){
        int didSwap = 0;
        
        for(int j = 0; j <= i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = 1;
            }
        }

        cout << "Step " << step << ": ";
        
        for(int k = 0; k < n; k++){
            cout << arr[k] << " ";
        }
        cout << endl;
        
        step++;
        
        if(didSwap == 0){
            break;
        }
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
    
    cout << "\nBefore Bubble sort:\n";
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    cout << "\n\n";
    
    bubble_sort(arr, n);
    
    cout << "\nAfter Bubble sort:\n";
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
*/















#include<bits/stdc++.h>
using namespace std;

vector<int> bubble_sort(vector<int>& nums){
    int n = nums.size();
    for(int i = n-1; i>=0; i--){
        int didSwap = 0;
        for(int j = 0; j<=i-1; j++){
            if (nums[j] > nums[j+1]){
                int temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0){
            break;
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

    cout << "Before selection sort : \n";
    for(int i = 0; i<n; i++){
        cout << nums[i] << " ";
    }
    cout << "\n";

    vector<int> sorted = bubble_sort(nums);

    cout << "After Bubble sort : \n";

    for(int i = 0; i<n; i++){
        cout << sorted[i] << " ";
    }

}