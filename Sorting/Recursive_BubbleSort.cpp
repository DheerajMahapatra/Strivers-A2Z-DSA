/*
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    if (n == 1) return;
    
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }
    
    bubble_sort(arr, n - 1);
}

int main() {
    int n;
    cout << "Enter how many elements in array : ";
    cin >> n;
    int arr[n];
    
    for (int i = 0; i<n; i++){
        cout << "Enter the "<< i+1 << " element :";
        cin >> arr[i];
    }
    
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
    
    // Call the recursive Bubble Sort function
    bubble_sort(arr, n);
    
    cout << "After Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
*/













/*
#include <bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[], int n) {
    
if (n == 1) return;

int didSwap = 0;

for (int j = 0; j <= n - 2; j++) {
    if (arr[j] > arr[j + 1]) {
        // Swap arr[j] and arr[j + 1]
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
        didSwap = 1;
    }
}

if (didSwap == 0) return;

bubble_sort(arr, n - 1);
}

int main() {
    int n;
    cout << "Enter how many elements in array : ";
    cin >> n;
    int arr[n];
    
    for (int i = 0; i<n; i++){
        cout << "Enter the "<< i+1 << " element :";
        cin >> arr[i];
    }
    
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    bubble_sort(arr, n);
    
    cout << "After Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/











#include<bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int>& nums){

    int n = nums.size();

    if(n == 1)
        return nums;

    int didSwap = 0;

    for(int j = 0; j <= n-2; j++){

        if(nums[j] > nums[j+1]){

            int temp = nums[j+1];
            nums[j+1] = nums[j];
            nums[j] = temp;

            didSwap = 1;
        }
    }

    if(didSwap == 0)
        return nums;


    bubbleSort(nums);

    return nums;
}

int main(){

    int n;

    cout << "Enter how many elements will be present in array : ";
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){

        cout << "Enter the " << i+1 << " element : ";
        cin >> nums[i];
    }

    cout << "Before Bubble sort : \n";

    for(int i = 0; i < n; i++)
        cout << nums[i] << " ";

    cout << "\n";

    vector<int> sorted = bubbleSort(nums);

    cout << "After Bubble sort : \n";

    for(int i = 0; i < sorted.size(); i++)
        cout << sorted[i] << " ";
}