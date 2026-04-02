/*
// Brute Force
#include<bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector <int> &a, vector<int> &b){
    int n1 = a.size();
    int n2 = b.size();
    
    set <int> st;
    for(int i = 0; i < n1; i++){
        st.insert(a[i]);
    }
    
    for(int i = 0; i < n2; i++){
        st.insert(b[i]);
    }
    
    vector<int> temp;
    for(auto it: st){
        temp.push_back(it);
    }
    
    return temp;
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
    
    vector<int> result = sortedArray(a, b);
    
    cout << "Sorted Union Array: ";
    for(auto &val : result){
        cout << val << " ";
    }
    
    return 0;
}
*/







#include<bits/stdc++.h>
using namespace std;

vector <int> unionArray(vector <int> a, vector <int> b){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector <int> unionArr;
    while (i < n1 && j <n2){
        if (a[i] <= b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }

        else{
            if(unionArr.size() == 0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while (j <n2){
        if(unionArr.size() == 0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
    }

    while (i <n1){
        if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
    }

    return unionArr;
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
    
    vector<int> result = unionArray(a, b);
    
    cout << "Sorted Union Array: ";
    for(auto &val : result){
        cout << val << " ";
    }
    
    return 0;
}