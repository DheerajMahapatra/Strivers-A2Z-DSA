/*
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low, right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right])
            temp.push_back(arr[left++]);
        else
            temp.push_back(arr[right++]);
    }

    while (left <= mid)
        temp.push_back(arr[left++]);

    while (right <= high)
        temp.push_back(arr[right++]);

    for (int i = low; i <= high; i++)
        arr[i] = temp[i - low];
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}


int main() {
    vector<int> arr = {5, 2, 8, 4, 1};

    mergeSort(arr, 0, arr.size() - 1);

    for (int x : arr)
        cout << x << " ";

    cout << endl;
    return 0;
}
*/








/*
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low, right = mid + 1;
    
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right])
        temp.push_back(arr[left++]);
        else
        temp.push_back(arr[right++]);
    }
    
    while (left <= mid)
    temp.push_back(arr[left++]);
    
    while (right <= high)
    temp.push_back(arr[right++]);
    
    for (int i = low; i <= high; i++)
    arr[i] = temp[i - low];
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high)
    return;
    
    int mid = (low + high) / 2;
    
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    
    merge(arr, low, mid, high);
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
    
    cout << "Before Merge sort : \n";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";
    
    mergeSort(nums, 0, n - 1);
    
    cout << "After Merge sort : \n";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    
    cout << "\n";
}
*/















#include <bits/stdc++.h>
using namespace std;

// For Merge the Array
void merge(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;
    int left = low, right = mid + 1;

    // Compare Left And Right Sub-Array then Merge
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right])
            temp.push_back(arr[left++]);
        else
            temp.push_back(arr[right++]);
        }

    // Add Remain Left Sub-Array to the Array
    while(left <= mid)
        temp.push_back(arr[left++]);

    // Add Remain Right Sub-Array to the Array
    while(right <= high)
        temp.push_back(arr[right++]);

    for(int i = low; i <= high; i++)
        arr[i] = temp[i - low];
}

// For Recursive call the functions
void mergeSortHelper(vector<int>& arr, int low, int high){
    if(low >= high) return;

    int mid = (low + high) / 2;

    mergeSortHelper(arr, low, mid);
    mergeSortHelper(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

vector<int> mergeSort(vector<int>& arr){
    mergeSortHelper(arr, 0, arr.size() - 1);
    return arr;
}

int main(){

    int n;
    cout << "Enter how many elements will be present in array : ";
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cout << "Enter the " << i + 1 << " element : ";
        cin >> nums[i];
    }

    cout << "Before Merge sort : \n";
    for(int i = 0; i < n; i++)
        cout << nums[i] << " ";

    cout << "\n";

    mergeSort(nums);

    cout << "After Merge sort : \n";
    for(int i = 0; i < n; i++)
        cout << nums[i] << " ";

    cout << "\n";
}