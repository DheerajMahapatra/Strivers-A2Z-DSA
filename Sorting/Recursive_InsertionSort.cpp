/*
#include <bits/stdc++.h>
using namespace std;


void insertion_sort(int arr[], int i, int n) {
    
if (i == n) return;

int j = i;

while (j > 0 && arr[j - 1] > arr[j]) {
        // Swap arr[j] and arr[j-1]
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }
    
    insertion_sort(arr, i + 1, n);
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
    
    cout << "Before Using Insertion Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
    insertion_sort(arr, 0, n);
    
    cout << "After Using Insertion Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
*/









#include<bits/stdc++.h>
using namespace std;

void insertion(vector<int>& nums, int i){

    if(i == nums.size()) return;

    int j = i;

    while(j > 0 && nums[j-1] > nums[j]){
        swap(nums[j], nums[j-1]);
        j--;
    }

    insertion(nums, i+1);
}

vector<int> insertionSort(vector<int>& nums) {

    insertion(nums,1);
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

    cout << "Before Insertion sort : \n";

    for(int i = 0; i < n; i++)
        cout << nums[i] << " ";

    cout << "\n";

    vector<int> sorted = insertionSort(nums);

    cout << "After Insertion sort : \n";

    for(int i = 0; i < sorted.size(); i++)
        cout << sorted[i] << " ";
}