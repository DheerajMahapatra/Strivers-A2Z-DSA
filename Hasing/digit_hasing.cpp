#include<bits/stdc++.h>
using namespace std;
int hashh[10000000];    //inside main function maximum size of the array is 10 to power 7
int main(){
    int n;
    cout << "Enter how many elements you want to enter:";
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cout << "Enter the element : ";
        cin >> arr[i];
    }

    // precompute
    //int hash[1000000] = {0};     //inside main function maximum size of the array is 10 to power 6
    //int hash[13] = {0};
    for(int i = 0; i<n; i++){
        hashh[arr[i]] += 1;
    }

    int q;
    cout << "Enter how many elements you want to search:";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter the element : ";
        cin >> number;
        // fetch
        cout << number << " appears : "<< hashh[number]<<" times." << endl;
    }
    
    return 0;
}