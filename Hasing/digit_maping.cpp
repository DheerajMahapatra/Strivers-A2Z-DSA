/*
#include<bits/stdc++.h>
using namespace std;

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
    map<int, int>mpp;
    for(int i = 0; i<n; i++){
        mpp[arr[i]] ++;
    }
    
    
    int q;
    cout << "Enter how many elements you want to search:";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter the element : ";
        cin >> number;
        // fetch
        cout << number << " appears : "<< mpp[number]<<" times." << endl;
    }
    
    return 0;
}
*/









#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter how many elements you want to enter:";
    cin >> n;
    int arr[n];
    map<int, int>mpp;
    for(int i = 0; i<n; i++){
        cout << "Enter the element : ";
        cin >> arr[i];
        mpp[arr[i]] ++;
    }


    
    // iterate in the map
    //for (auto it : mpp){
        //cout << it.first << "->" << it.second <<endl;
    //}
    
    

    int q;
    cout << "Enter how many elements you want to search:";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter the element : ";
        cin >> number;
        // fetch
        cout << number << " appears : "<< mpp[number]<<" times." << endl;
    }
    
    return 0;
}