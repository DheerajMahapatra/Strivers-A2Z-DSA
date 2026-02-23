#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    
    for (int i = 1; i<=n; i++){
        fact =  fact*i;
    }
    return fact;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact = factorial(n);
    cout << "Factorial of " << n << " is: "<< fact;
}