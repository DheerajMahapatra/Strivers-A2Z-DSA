// BRUTE FORCE
/*]
#include <bits/stdc++.h>
using namespace std;

// Function to find the single non-repeating element
int getSingleElement(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int cnt = 0;
        
        for (int j = 0; j < n; j++) {
            if (arr[j] == num)
            cnt++;
        }
        
        if (cnt == 1) return num;
    }

    return -1;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
        cout << "Enter the " << i+1 << " element: ";
        cin >> arr[i];
    }
    
    cout << "\nArray: ";
    for(auto &val : arr){
        cout << val << " ";
    }
    cout << "\n\n";
    
    int result = getSingleElement(arr);
    cout << "Single non-repeating element: " << result;
    
    return 0;
}
*/











// BETTER
/*
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int>& arr) {
    int n = arr.size();
    
    int maxi = arr[0];
    for(int i = 0; i < n; i++){
        maxi = max(maxi, arr[i]);
    }
    
    vector<int> hash(maxi + 1, 0);
    
    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }
    
    for(int i = 0; i < n; i++){
        if(hash[arr[i]] == 1){
            return arr[i];
        }
    }
    
    return -1;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
        cout << "Enter the " << i+1 << " element: ";
        cin >> arr[i];
    }
    
    cout << "\nArray: ";
    for(auto &val : arr){
        cout << val << " ";
    }
    cout << "\n\n";
    
    int result = getSingleElement(arr);
    cout << "Single non-repeating element: " << result;
    
    return 0;
}
*/









// Using MAP
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int>& arr) {
    int n = arr.size();

    map<int, int> mpp;

    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        if(it.second == 1){
            return it.first;
        }
    }

    return -1;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cout << "Enter the " << i+1 << " element: ";
        cin >> arr[i];
    }

    cout << "\nArray: ";
    for(auto &val : arr){
        cout << val << " ";
    }
    cout << "\n\n";

    int result = getSingleElement(arr);
    cout << "Single non-repeating element: " << result;

    return 0;
}