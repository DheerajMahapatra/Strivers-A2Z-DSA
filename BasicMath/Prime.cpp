/*
#include<bits/stdc++.h>
using namespace std;

int prime(int n){
    
int cnt = 0;
for(int i = 1; i<=n; i++){
    if (n%i == 0){
        cnt++;
    }
}

if (cnt == 2){
    cout << "Prime.";
}
else{
    cout << "Not Prime.";
}
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    prime(n);
}
*/







#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    int cnt = 0;
    for (int i= 1; i<=sqrt(n); i++){
        if (n%i == 0){
            cnt++;
            if ((n/i) != i){
                cnt++;
            }
        }
    }
    
    if (cnt == 2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (prime(n)){
        cout << n <<" is a Prime Number.";
    }
    else {
        cout << n <<" is not a Prime Number.";
    }

}