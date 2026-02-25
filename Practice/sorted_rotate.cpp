#include<bits/stdc++.h>
using namespace std;

bool rotateSorted(vector<int> &arr){
    int cnt = 0;
    int n = arr.size();

    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            cnt++;
        }
    }

    // last and first check
    if(arr[n-1] > arr[0]){
        cnt++;
    }

    return cnt <= 1;
}

int main(){
    vector<int> arr = {3,4,5,1,2};

    bool x = rotateSorted(arr);

    if(x) cout << "Sorted Rotated";
    else cout << "Not Sorted Rotated";

    return 0;
}