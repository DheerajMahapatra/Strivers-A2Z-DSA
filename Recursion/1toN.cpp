/*
#include<bits/stdc++.h>
using namespace std;

void print(int current){
    int n = 9;
    
    if (current > n){
        return;
    }
    
    cout << current << " ";
    print(current + 1);
}

int main(){
    print(1);
    return 0;
}
*/






/*
#include<bits/stdc++.h>
using namespace std;

void print(int current, int n){
    if (current > n){
        return;
    }
    
    cout << current << " Dheeraj" << endl;
    print(current + 1, n);
    
}

int main(){
    int n ;
    cout << "Enter the number how many times you want to print your name: ";
    cin >> n;
    
    print(1,n);
    return 0;
}
*/







#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if (n == 0){
        return;
    }

    print(n - 1);
    cout << n << " ";
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    print(n);
    return 0;
}