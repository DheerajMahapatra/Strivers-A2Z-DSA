/*
#include <bits/stdc++.h>
using namespace std;


// Function to partition the array
int partition(vector<int>& arr, int low, int high) {
    // Choose the last element as pivot
    int pivot = arr[high];
    
    // Initialize i to place smaller elements
    int i = low - 1;
    
    // Traverse the array
    for (int j = low; j < high; j++) {
        // If element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            // Increment i and swap with j
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    
    
    return i + 1;
    
}


// Function to perform quicksort
void quickSort(vector<int>& arr, int low, int high) {
    // Base case: if low is not less than high
    if (low < high) {
        // Find pivot index after partitioning
        int pivotIndex = partition(arr, low, high);
        
        // Recursively sort elements before pivot
        quickSort(arr, low, pivotIndex - 1);
        
        // Recursively sort elements after pivot
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    
vector<int> arr = {10, 7, 8, 9, 1, 5};

quickSort(arr, 0, arr.size() - 1);

for (int num : arr)
cout << num << " ";

return 0;
}
*/










/*
#include <bits/stdc++.h>
using namespace std;

// Function to partition the array
int partition(vector<int>& arr, int low, int high) {
    
int pivot = arr[high];
int i = low - 1;

for (int j = low; j < high; j++) {
    
if (arr[j] <= pivot) {
    i++;
    swap(arr[i], arr[j]);
}
}

swap(arr[i + 1], arr[high]);

return i + 1;
}

// Function to perform quicksort
void quickSort(vector<int>& arr, int low, int high) {
    
if (low < high) {
    
int pivotIndex = partition(arr, low, high);

quickSort(arr, low, pivotIndex - 1);

quickSort(arr, pivotIndex + 1, high);
}
}

int main() {
    
int n;
cout << "Enter how many elements will be present in array : ";
cin >> n;

vector<int> nums(n);

for (int i = 0; i < n; i++) {
    cout << "Enter the " << i + 1 << " element : ";
    cin >> nums[i];
}

cout << "Before Quick sort : \n";
for (int i = 0; i < n; i++) {
    cout << nums[i] << " ";
}
cout << "\n";

quickSort(nums, 0, n - 1);

cout << "After Quick sort : \n";
for (int i = 0; i < n; i++) {
    cout << nums[i] << " ";
}

cout << "\n";
}
*/
















#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {

    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {

        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {

    if (low < high) {

        int pIndex = partition(arr, low, high);

        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr) {

    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main() {

    int n;
    cout << "Enter how many elements will be present in array : ";
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << " element : ";
        cin >> nums[i];
    }

    cout << "Before Quick sort : \n";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";

    nums = quickSort(nums);

    cout << "After Quick sort : \n";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << "\n";
}