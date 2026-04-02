#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &A, vector<int> &B){
    int n = A.size();
    int m = B.size();

    vector<int> ans;
    int vis[m] = {0};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (A[i] == B[j] && vis[j] ==0){
                ans.push_back(A[i]);
                vis[j] = 1;
                break;
            }

            if (B[j] > A[i]) break;
        }
    }

    return ans;
}

int main(){
    int n1;
    cout << "Enter the size of first array: ";
    cin >> n1;
    
    vector<int> a(n1);
    for(int i = 0; i < n1; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> a[i];
    }
    
    cout << "\nOriginal First Array: ";
    for(auto &val : a){
        cout << val << " ";
    }
    
    cout << "\n\n";
    
    int n2;
    cout << "Enter the size of second array: ";
    cin >> n2;
    
    vector<int> b(n2);
    for(int i = 0; i < n2; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> b[i];
    }
    
    cout << "\nOriginal Second Array: ";
    for(auto &val : b){
        cout << val << " ";
    }
    
    cout << "\n\n";
    
    vector<int> result = findArrayIntersection(a, b);
    
    cout << "Intersection of Array: ";
    for(auto &val : result){
        cout << val << " ";
    }
    
    return 0;
}