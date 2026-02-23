/*
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
*/







/*
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    
if (n == 1){
    return 1;
}
else if (n == 0){
    return 1;
}

return n * factorial(n - 1);

}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    int sum = factorial(n);
    cout << "Sum of "<<n<<" is: "<<sum;
    return 0;
}
*/











#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    
    if (n == 0){
        return 1;
    }
    
    return n * factorial(n - 1);
    
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    int sum = factorial(n);
    cout << "Sum of "<<n<<" is: "<<sum;
    return 0;
}