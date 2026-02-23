/*
#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int>& arr) {
    int n = arr.size();
    
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[i] = arr[n - 1 - i];
    }
    
    return ans;
}


int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> result = reverseArray(arr);
    
    cout << "Reversed Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
*/








/*
#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int>& arr) {
    int n = arr.size();
    
    // Swap method
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - 1 - i]);
    }
    
    return arr;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> result = reverseArray(arr);
    
    cout << "Reversed Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
*/









/*
#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int>& arr) {
    int n = arr.size();
    
    // STL method
    reverse(arr.begin(), arr.end());
    
    return arr;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    vector<int> result = reverseArray(arr);
    
    cout << "Reversed Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
*/












/*
#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int>& arr){
    int p1 = 0;
    int p2 = arr.size() - 1;
    
    while (p1 < p2){
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
    return arr;
}

int main(){
    int n;
    vector<int> arr;
    cout << "Enter the elements you want to put in a Array: ";
    cin >> n;
    cout << "Enter the elements: "<< " ";
    for (int i = 0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    vector<int> result = reverse(arr);
    cout <<"Reversed Array: ";
    for (int i : result){
        cout << i << " ";
    }
    
}
*/


















/*
#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int>& arr){
    int p1 = 0, p2 = arr.size() - 1;
    while (p1 < p2){
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
    return arr;
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    
    cout << "Enter elements in one line: "<<" ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    vector<int> result = reverseArray(arr);
    
    cout << "Reversed Array: ";
    for (int x : result){
        cout << x << " ";
    }
}
*/










#include <bits/stdc++.h>
using namespace std;


void reverse(int arr[], int n) {
    static int i = 0;

    if (i >= n / 2) {
        i = 0;
        return;
    }

    swap(arr[i], arr[n - i - 1]);

    i++;

    reverse(arr, n);
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;


    reverse(arr, n);

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}