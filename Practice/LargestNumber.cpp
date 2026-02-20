/*
#include<bits/stdc++.h>
using namespace std;

int larg_sort(int arr[], int length){
    int max = 2;
    
    for (int i = 0; i<length; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    cout << "Max value is:" << max;
}

int main(){
    int arr [6] = {2,3,1,6,7,10};
    int length = sizeof(arr) / sizeof(arr[0]);
    larg_sort(arr, length);
}
*/

#include<bits/stdc++.h>
using namespace std;

int larger_element(vector<int> &arr){
    sort(arr.begin(), arr.end());
    return arr.back();
}

int main(){
    vector<int> arr = {2,3,1,6,7,10};
    int x = larger_element(arr);
    cout << "largest Element: " << x;
}