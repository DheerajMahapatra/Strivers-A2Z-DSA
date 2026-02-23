#include<bits/stdc++.h>
using namespace std;

int total(int n, int sum){
    if (n < 1){
        return sum;
    }
    return total(n-1, sum+n);
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = total(n,0);
    cout << "Sum of "<< n << " is: "<< sum;
    return 0;
}












/*
#include<bits/stdc++.h>
using namespace std;

int print(int n){
    if (n == 1){
        return 1;
    }
    
    return n + print(n - 1);
    
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    int sum = print(n);
    cout << "Sum of "<<n<<" is: "<<sum;
    return 0;
}
*/





/*
#include<bits/stdc++.h>
using namespace std;

int print(int n){
    return (n * (n + 1)) / 2;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    int sum = print(n);
    cout << "Sum of "<<n<<" is: "<<sum;
    return 0;
}

*/
