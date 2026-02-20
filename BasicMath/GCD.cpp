/*
#include<bits/stdc++.h>
using namespace std;

int gcd(int n, int m){
    int num = 0;
    for (int i = 1; i<=min(n,m); i++){
        if (n%i == 0 && m%i == 0){
            num = i;
        }
    }
    
    return num;
}

int main() {
    int n, m;
    cout << "Enter 1st Number: ";
    cin >> n;
    cout << "Enter 2nd Number: ";
    cin >> m;
    
    int num = gcd(n, m);
    
    cout << "Greatest Common Divisor is: " << num;
    
}
*/










/*
#include<bits/stdc++.h>
using namespace std;

int gcd(int n, int m){
    int num = 0;
    for (int i = min(n,m); i>=1; i--){
        if (n%i == 0 && m%i == 0){
            num = i;
            break;
        }
    }
    
    return num;
}

int main() {
    int n, m;
    cout << "Enter 1st Number: ";
    cin >> n;
    cout << "Enter 2nd Number: ";
    cin >> m;
    
    int num = gcd(n, m);
    
    cout << "Greatest Common Divisor is: " << num;
    
}
*/











// Euclidean Algorithm
// GCD(a,b) = GCD(a-b, b)       when a>b


// For Algo
// GCD(a,b) = GCD(a%b, b)       when a>b


#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while (a > 0 && b > 0) {
        if (a > b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }

    if (a == 0) {
        return b;
    }
    else{
        return a;
    }
}
    


int main() {
    int a, b;
    cout << "Enter 1st Number: ";
    cin >> a;
    cout << "Enter 2nd Number: ";
    cin >> b;
    
    int num = gcd(a, b);
    
    cout << "Greatest Common Divisor is: " << num;
    
}