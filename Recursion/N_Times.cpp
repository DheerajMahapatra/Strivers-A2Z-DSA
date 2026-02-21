#include <bits/stdc++.h>
using namespace std;


void printName(string name, int count, int N) {
    if (count == N)
        return;

    cout << name << "\n";

    printName(name, count + 1, N);

};

int main() {
    int N = 5;
    string name = "Dheeraj";

    printName(name, 0, N);

    return 0;
}
