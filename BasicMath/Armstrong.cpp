#include <bits/stdc++.h>
using namespace std;


bool armstrong(int n) {
    int armNum = 0;
    int orgNum = n;
    
    int digits = to_string(n).length();
    
    while (n > 0) {
        int ld = n % 10;
        armNum += pow(ld,digits);
        n = n / 10;
    }

    
    if (orgNum == armNum) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number;
    cout << "Enter the Number: ";
    cin >> number;

    if (armstrong(number)) {
        cout << number << " is a armstrong." << endl;
    } else {
        cout << number << " is not a armstrong." << endl;
    }

    return 0;
}
