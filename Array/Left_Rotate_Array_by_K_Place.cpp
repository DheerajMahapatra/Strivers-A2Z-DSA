/*
# include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d){
    d = d % n;
    
    int temp[d];
    for (int i = 0; i < d; i++){
        temp[i] = arr[i];
    }
    
    for(int i = d; i < n; i++){
        arr[i-d] = arr[i];
    }
    
    for(int i = n-d; i < n; i++){
        arr[i] = temp[i - (n-d)];
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int d;
    cin >> d;
    leftRotate(arr, n, d);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
*/







/*
// Brute Force
# include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& nums, int k){
    int n = nums.size();
    k = k % n;

    // For make temporary array
    vector<int> temp(k);
    for (int i = 0; i < k; i++){
        temp[i] = nums[i];
    }
    
    // Shift Elements by K Place
    for(int i = k; i < n; i++){
        nums[i-k] = nums[i];
    }
    
    // Last insert the temporary elements
    for(int i = n-k; i < n; i++){
        nums[i] = temp[i - (n-k)];
    }
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
    cout <<"Before Rotate The Array : ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    
    cout << "\n";
    int k;
    cout << "Enter the Rotation Number: ";
    cin >> k;
    rotateArray(nums, k);
    
    cout << "\n";
    cout <<"After Rotate The Array : ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    
    return 0;
}
*/













// Optimal
# include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& nums, int k){
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
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
    cout <<"Before Rotate The Array : ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

    cout << "\n";
    int k;
    cout << "Enter the Rotation Number: ";
    cin >> k;
    rotateArray(nums, k);

    cout << "\n";
    cout <<"After Rotate The Array : ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

    return 0;
}



// // Function to reverse the array
// void Reverse(int arr[], int start, int end)
// {
//     while (start <= end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }