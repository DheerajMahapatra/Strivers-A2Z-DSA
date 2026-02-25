// Brute Force
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number :";
    cin >> n;
    
    if (n == 0) {
        cout << 0;
    }
    
    else if (n == 1) {
        cout << 0 << " " << 1 << "\n";
    }
    
    else {
        int fib[n + 1];
        fib[0] = 0;
        fib[1] = 1;
        
        
        for (int i = 2; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        
        cout << "The Fibonacci Series up to " << n << "th term:" << endl;
        for (int i = 0; i <= n; i++) {
            cout << fib[i] << " ";
        }
    }
    
    return 0;
}
*/






//Brute Force
/*
#include <bits/stdc++.h>
using namespace std;


void fib(int n){
    if (n == 0) {
        cout << 0;
    }
    
    else if (n == 1) {
        cout << 0 << " " << 1 << "\n";
    }
    
    else {
        int fib[n + 1];
        fib[0] = 0;
        fib[1] = 1;
        
        
        for (int i = 2; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        
        cout << "The Fibonacci Series up to " << n << "th term:" << endl;
        for (int i = 0; i <= n; i++) {
            cout << fib[i] << " ";
        }
    }
}

int main() {
    int n;
    cout << "Enter the number :";
    cin >> n;
    fib(n);
    return 0;
}
*/







// Brute Force
/*
#include <bits/stdc++.h>
using namespace std;

vector<int> fib(int n){
    
vector<int> result;

if(n == 0){
    result.push_back(0);
    return result;
}

result.push_back(0);
result.push_back(1);

for(int i = 2; i <= n; i++){
    result.push_back(result[i-1] + result[i-2]);
}

return result;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    vector<int> ans = fib(n);
    
    cout << "Fibonacci series: ";
    for(int x : ans){
        cout << x << " ";
    }
    
    return 0;
}
*/








// Better
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    
    if (n == 0) {
        cout << "The Fibonacci Series up to " << n << "th term:" << endl;
        cout << 0;
    }
    else {
        int secondLast = 0;
        int last = 1;
        
        cout << "The Fibonacci Series up to " << n << "th term:" << endl;
        cout << secondLast << " " << last << " ";
        
        int cur; // ith term
        for (int i = 2; i <= n; i++) {
            cur = last + secondLast;
            secondLast = last;
            last = cur;
            cout << cur << " ";
        }
    }
    
    return 0;
}
*/











// Optimal

#include<bits/stdc++.h>
using namespace std;


int fibonacci(int n){
    if(n <=1){
        return n;
    }
    
    int last = fibonacci(n-1);
    int s_last = fibonacci(n-2);
    
    return last + s_last;
}



int main(){
    int n ;
    cout << "Enter a number: ";
    cin >> n;
    
    cout <<"Fibonacci of "<<n<< " is :"<<fibonacci(n);
}
