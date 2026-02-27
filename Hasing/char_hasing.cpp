/*
#include<bits/stdc++.h>
using namespace std;

int hashh[26];   // global declaration (for lowercase letters)

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    
    // precompute
    for(int i = 0; i < s.size(); i++){
        hashh[s[i] - 'a']++;
    }
    
    int q;
    cout << "Enter how many characters you want to search: ";
    cin >> q;
    
    while(q--){
        char c;
        cout << "Enter the character: ";
        cin >> c;
        
        // fetch
        cout << c << " appears : "<< hashh[c - 'a'] << " times." << endl;
    }
    
    return 0;
}
*/








#include<bits/stdc++.h>
using namespace std;

int hashh[256];   // global declaration (for lowercase letters)

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    
    // precompute
    for(int i = 0; i < s.size(); i++){
        hashh[s[i]]++;
    }
    
    int q;
    cout << "Enter how many characters you want to search: ";
    cin >> q;
    
    while(q--){
        char c;
        cout << "Enter the character: ";
        cin >> c;
        
        // fetch
        cout << c << " appears : "<< hashh[c] << " times." << endl;
    }
    
    return 0;
}
