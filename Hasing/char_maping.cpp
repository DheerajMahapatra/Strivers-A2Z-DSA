#include<bits/stdc++.h>
using namespace std;

map<char, int>mpp;

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    
    // precompute
    for(int i = 0; i < s.size(); i++){
        mpp[s[i]]++;
    }
    
    int q;
    cout << "Enter how many characters you want to search: ";
    cin >> q;
    
    while(q--){
        char c;
        cout << "Enter the character: ";
        cin >> c;
        
        // fetch
        cout << c << " appears : "<< mpp[c] << " times." << endl;
    }
    
    return 0;
}
