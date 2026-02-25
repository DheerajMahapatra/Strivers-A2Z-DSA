/*
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i , string &str){
    if(i >= str.size() / 2){
        return true;
    }
    
    if (str[i] != str[str.size()- i - 1]){
        return false;
    }
    
    return palindrome(i + 1, str);
    
}

int main(){
    string str;
    cout << "Enter a string: "<< " ";
    cin >> str;
    
    if (palindrome(0,str)){
        cout << str << " is a Palindrome.";
    }
    else{
        cout << str << " is NOT Palindrome";
    }
}
*/









/*
#include<bits/stdc++.h>
using namespace std;

bool palindrome(string &str){
    static int i = 0;
    if(i >= str.size() / 2){
        i = 0;
        return true;
    }
    
    if (str[i] != str[str.size()- i - 1]){
        return false;
    }
    i++;
    return palindrome(str);
    
}

int main(){
    string str;
    cout << "Enter a string: "<< " ";
    cin >> str;
    
    if (palindrome(str)){
        cout << str << " is a Palindrome.";
    }
    else{
        cout << str << " is NOT Palindrome";
    }
}
*/










#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s) {
    string filtered;
    for (char c : s) {
        if (isalnum(c)) {
            filtered += tolower(c);
        }
    }

    int left = 0;
    int right = filtered.size() - 1;

    while (left < right) {
        if (filtered[left] != filtered[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main(){
    string s;
    cout << "Enter a string: "<< " ";
    cin >> s;
    
    if (isPalindrome(s)){
        cout << s << " is a Palindrome.";
    }
    else{
        cout << s << " is NOT Palindrome";
    }
}
