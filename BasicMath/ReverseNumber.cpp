/*
#include <bits/stdc++.h>
using namespace std;

int countDigits(int N){
    int revNum = 0;
    while(N>0){
        int lastDigit = N%10;
        revNum = revNum * 10 + lastDigit;
        N = N/10;
    }
    return revNum;
}

int main() {
    int N ;
    cout << "Enter the Number: ";
    cin >> N;
    int digits = countDigits(N);
    cout << "Reverse of the Number is: "<< digits << endl;
    return 0;
}
*/


/*
//using string
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //string num = "102030405060708090";
    string num;
    cout << "Enter th number: ";
    cin >> num;
    
    reverse(num.begin(), num.end());
    
    cout << "Reversed number: " << num;
    
    return 0;
}
*/


/*
//Using loop
#include <iostream>
using namespace std;

int main() {
    // string num = "102030405060708090";
    string num;
    cout << "Enter th number: ";
    cin >> num;
    string rev = "";
    
    for(int i = num.length() - 1; i >= 0; i--) {
        rev += num[i];
    }
    
    cout << "Reversed number: " << rev;
    
    return 0;
}
*/


/*
// Negative Input
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //string num = "-102030405060708090";
    string num;
    cout << "Enter th number: ";
    cin >> num;
    
    if(num[0] == '-') {
        string temp = num.substr(1);   // remove minus
        reverse(temp.begin(), temp.end());
        cout << "Reversed number: -" << temp;
    } else {
        reverse(num.begin(), num.end());
        cout << "Reversed number: " << num;
    }
    
    return 0;
}
*/


/*
// Long long
#include <iostream>
using namespace std;

int main() {
    
long long num;
cout << "Enter th number: ";
cin >> num;
long long rev = 0;

bool isNegative = false;

// Check if negative
if(num < 0) {
        isNegative = true;
        num = -num;  // make positive
    }
    
    while(num != 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    
    // Add minus back if needed
    if(isNegative) {
        rev = -rev;
    }
    
    cout << "Reversed number: " << rev;

    return 0;
}
*/




// My Code
#include<bits/stdc++.h>
using namespace std;

int revDigit(int Num){

    int revNum = 0;
    bool isNegative = false;

    if (Num < 0){
        isNegative = true;
        Num = -Num;
    }

    while(Num != 0){
        int digit = Num%10;
        revNum = revNum*10 + digit;
        Num = Num/10;
    }

    if(isNegative){
        revNum = -revNum;
    }

    return revNum;

}

int main(){
    int Num;
    cout << "Enter the Number: ";
    cin >> Num;
    int Reverse = revDigit(Num);
    cout << "The Reverse Number is: " << Reverse ;
    return 0;
}