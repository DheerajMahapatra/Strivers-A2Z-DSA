// PATTERN 1
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

// int main(){
    //     int n;
    //     cin >> n;
    //     print(n);
// }

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/




// PATTERN 2
/*
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/






// PATTERN 3
/*
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/






// PATTERN 4
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    int count = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << count << " ";
        }
        count ++;
        cout << endl;
    }
}


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/





// PATTERN 5
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/




// PATTERN 6
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/




// PATTERN 7
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        // Space
        for(int j = 0; j < n-i+1; j++){
            cout << "  ";
        }
        // Star
        for(int k = 0; k < 2*i+1; k++){
            cout << "* ";
        }
        // Space
        // for(int j = 0; j < n-i+1; j++){
            //     cout << "  ";
            // }
        cout << endl;
        }
    }
    
    
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/





// PATTERN 8
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        // Space
        for(int j = 0; j < i; j++){
            cout << "  ";
        }
        // Star
        for(int k = 0; k < 2*n -(2*i + 1); k++){
            cout << "* ";
        }
        cout << endl;
    }
}


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/




// PATTERN 9
/*

#include<bits/stdc++.h>
using namespace std;

void print(int n){
    // Upper Half
    for(int i = 0; i < n; i++){
        // Space
        for(int j = 0; j < n-i-1; j++){
            cout << "  ";
        }
        // Star
        for(int k = 0; k < 2*i+1; k++){
            cout << "* ";
        }
        cout << endl;
    }
        
    // Lower Half
    // for(int i = 0; i < n; i++){
    //     // Space
    //     for(int j = 0; j < i; j++){
    //         cout << "  ";
    //     }
    //     // Star
    //     for(int k = 0; k < 2*n -(2*i + 1); k++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << "  ";
        }
        for(int k = 0; k < 2*n - (2*i +1); k++){
            cout << "* ";
        }
        cout << endl;
    }
    }

    
    
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/





// PATTERN 10
/*
#include<bits/stdc++.h>
using namespace std;
// void print(int n){
    //     // UPPER
    //     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= i; j++){
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    
    //     // LOWER
    //     for(int i = 1; i < n; i++){
        //         for(int j = 1; j <= n-i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
void print(int n){
    for(int i = 1; i<= 2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
        for (int j = 1; j <= stars; j++){
            cout << "* ";
        }
        cout <<endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/




// PATTERN 11
/*
#include<bits/stdc++.h>
using namespace std;

void print(int  n){
    int start = 0;
    for (int i = 0; i < n; i++){
        if (i % 2 == 0) start = 1;
        else start = 0;
        for (int j = 0; j <=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/





// PATTERN 12
/*
#include<bits/stdc++.h>
using namespace std;

// void print(int n){
    //     for(int i = 1; i <= n; i++){
        //         // Number
        //         for(int j = 1; j <= i; j++){
            //             cout << j << "  ";
            //         }
            //         // Space
            //         for(int k = 1; k <= n*(n-i); k++){
                //             cout << " ";
                //         }
                //         // Number
                //         for(int l = i; l >= 1; l--){
                    //             cout << l << "  ";
                    //         }
                    //         cout << endl;
                    //     }
                    // }
                    
                    void print(int n){
                        for(int i = 1; i <= n; i++){
                            // Number
                            for(int j = 1; j <= i; j++){
                                cout << j ;
                            }
                            // Space
                            for(int k = 1; k <= 2*(n-i); k++){
                                cout << " ";
                            }
                            // Number
                            for(int l = i; l >= 1; l--){
                                cout << l ;
                            }
                            cout << endl;
                        }
}


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/





// PATTERN  13
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    int num = 1;
    for (int i = 1; i<= n; i++){
        for(int j = 1; j <= i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/





// PATTERN 14
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    // for (int i = 1; i<= n; i++){
    //     char letter = 'A';
    //     for(int j = 1; j <= i; j++){
    //         cout << letter << " ";
    //         letter++;
    //     }
    //     cout << endl;
    // }
    for(int i = 0; i<n; i++){
        for(char ch ='A'; ch<='A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/






// PATTERN 15
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    // for (int i = 1; i<= n; i++){
    //     char letter = 'A';
    //     for(int j = n; j >= i; j--){
    //         cout << letter << " ";
    //         letter++;
    //     }
    //     cout << endl;
    // }
    for(int i = 0; i < n; i++){
        for(char ch = 'A'; ch <= 'A' + (n -i -1);  ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/






// PATTERN 16
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    // char letter = 'A';
    // for (int i = 1; i<= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << letter << " ";
    //     }
    //     cout << endl;
    //     letter++;
    // }

    for(int i = 0; i < n; i++){
        char ch = 'A' + i;
        for(int j  = 0; j <= i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/






// PATTERN 17
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    // for(int i = 0; i < n; i++){
    //     // Space
    //     for(int j = 0; j < n-i-1; j++){
    //         cout << "  ";
    //     }
    //     // Star
    //     char alpha = 'A';
    //     for(int k = 0; k <= i; k++){
    //         cout << alpha << " ";
    //         alpha++;
    //     }
    //     // Space
    //     alpha -= 2;
    //     for(int j = i+1; j > 1; j--){
    //         cout << alpha << " ";
    //         alpha --;
    //     }
    //     cout << endl;
    // }

    for(int i = 0; i < n; i++){
        // Space
        for(int j = 0; j < n-i-1; j++){
            cout << "  ";
        }
        // Star
        int breakpoint = (2*i+1) / 2;
        char ch ='A';
        for(int k = 1; k <= 2*i+1; k++){
            cout << ch << " ";
            if(k <= breakpoint) ch++;
            else ch--;
        }
        // Space
        for(int j = 0; j < n-i-1; j++){
            cout << "  ";
        }
        cout << endl;
    }

}


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/





// PATTERN 18
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    // for(int i = 0; i < n; i++){
    //     for(char ch = 'E' - i; ch <= 'E'; ch++){
    //         cout << ch << " ";
    //     }
    //     cout<< endl;
    // }

    char last = 'A' + (n - 1);
    for(int i = 0; i < n; i++){
        for(char ch = last - i; ch <= last; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/





// PATTERN 19
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    int space = 0;
    for(int i = 0; i < n; i++){
        // Star
        for(int j = 1; j <= n-i; j++){
            cout << "*";
        }
        // Space
        for(int k = 0; k < space; k++){
            cout << " ";
        }
        // Star
        for(int l = 1; l <= n-i; l++){
            cout << "*";
        }
        space += 2;
        cout << endl;
    }

    int space2 = (2*n)-2;
    for(int i = 1; i <= n; i++){
        // Star
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        // Space
        for(int k = 0; k < space2; k++){
            cout << " ";
        }
        // Star
        for(int l = 1; l <= i; l++){
            cout << "*";
        }
        space2 -= 2;
        cout << endl;
    }
    
}


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/






// PATTERN 20
/*
#include<bits/stdc++.h>
using namespace std;

// void print(int n){
//     int space2 = (2*n)-2;
//     for(int i = 1; i < n; i++){
//         // Star
//         for(int j = 1; j <= i; j++){
//             cout << "*";
//         }
//         // Space
//         for(int k = 0; k < space2; k++){
//             cout << " ";
//         }
//         // Star
//         for(int l = 1; l <= i; l++){
//             cout << "*";
//         }
//         space2 -= 2;
//         cout << endl;
//     }


//     int space = 0;
//     for(int i = 0; i < n; i++){
//         // Star
//         for(int j = 1; j <= n-i; j++){
//             cout << "*";
//         }
//         // Space
//         for(int k = 0; k < space; k++){
//             cout << " ";
//         }
//         // Star
//         for(int l = 1; l <= n-i; l++){
//             cout << "*";
//         }
//         space += 2;
//         cout << endl;
//     }
// }



void print(int n){
    int space = (2*n)-2;
    for(int i = 1; i <= 2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n - i;
        // stars
        for(int j  = 1; j <= stars; j++){
            cout << "*";
        }
        // space
        for(int k = 1; k <= space; k++){
            cout << " ";
        }
        // stars
        for(int l  = 1; l <= stars; l++){
            cout << "*";
        }
        cout << endl;
        if(i<n) space -=2;
        else space += 2;
    }
}



int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/





// PATTERN 21
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            if(i == 0 || j == 0 || i == n-1 || j == n-1){
                cout << "* ";
            }
            else cout << "  ";
        }
        cout << endl;
    }
}



int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}
*/








// PATTERN 22
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i = 0; i < 2*n-1; i++){
        for( int j = 0; j < 2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n -2) - j;
            int down = (2*n - 2) - i;
            cout << (n - min(min(top, down), min(left, right))) << " ";
        }
        cout << endl;
    }
}



int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n ;
        cin >> n;
        print(n);
    }
}