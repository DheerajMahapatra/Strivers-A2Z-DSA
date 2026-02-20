#include <bits/stdc++.h>
using namespace std;


bool palindrome(long long n) {
    long long revNum = 0;
    long long dup = n;

    
    while (n > 0) {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }

    
    if (dup == revNum) {
        return true;
    } else {
        return false;
    }
}

int main() {
    long long number;
    cout << "Enter the Number: ";
    cin >> number;

    if (palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
