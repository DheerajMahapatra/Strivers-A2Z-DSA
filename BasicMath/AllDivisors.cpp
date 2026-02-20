/*
#include<bits/stdc++.h>
using namespace std;

int divisor (int n){
    cout << "Divisors are: " << " ";
    for (int i = 1; i<=n; i++){
        if (n%i == 0){
            cout << i << " ";
        }
    }
}


int main() {
    int number;
    cout << "Enter the Number: ";
    cin >> number;
    
    divisor(number);
    return 0;
}
*/



/*
#include <bits/stdc++.h>
using namespace std;

vector<int> divisor(int n) {
    vector<int> divs;
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divs.push_back(i);
        }
    }
    
    return divs;
}

int main() {
    int number;
    cout << "Enter the Number: ";
    cin >> number;
    
    vector<int> result = divisor(number);
    
    cout << "Divisors are: ";
    for (int d : result) {
        cout << d << " ";
    }
    
    return 0;
}
*/





#include<bits/stdc++.h>
using namespace std;

void divisor (int n){
    vector<int> ls;
    for (int i= 1; i<=sqrt(n); i++){
        if (n%i == 0){
            ls.push_back(i);
            if ((n/i) != i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    
    cout << "Divisors are: ";
    for(auto it: ls)
    cout << it << " ";
}


int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    
    divisor(n);
    return 0;
}
