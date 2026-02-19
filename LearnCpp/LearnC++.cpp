// User Input / Output

// #include<iostream>
// using namespace std;

// int main(){
//     cout << "Hey Dheeraj!" << endl <<"Hey Rupu!" << endl;
//     cout << "Hey Mateeee!" << '\n';
//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main(){
//     int x;
//     cin >> x;
//     cout << "Value of x: " << x;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int x,y;
//     cin >> x >> y;
//     cout << "Value of x: " << x << " and y: " << y;
//     return 0;
// }





// Data Types

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     /*
//     // int
//     int x = 10;
//     // long
//     long x = 15;
//     cin >> x;

//     long long x = 150000000;
//     */

//     // float, double
//     float x = 5.6;
//     //float y = 5;
//     double y = 5;
//     cout << "value of y: " << y;

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // int, long, long long, float, double
//     // string and getline
//     // char

//     /*
//     string s1;
//     string s2;
//     cin >> s1 >> s2;
//     cout << s1 << " " << s2;
//     */
    
//     /*
//     string str;
//     getline(cin, str);
//     cout  << str;
//     */

//     // char ch;
//     // cin >> ch;
//     // cout << ch;

//     // char ch = 'R';
//     // cout << ch;

//     string ch = "D";
//     cout << ch;

//     return 0;
// }





// If Else Statement

// #include<bits/stdc++.h>
// using namespace std;
// // write a program that takes an input of age
// // and prints if you are adult or not
// // >= 18, yes
// // < 18, no

// int main(){
//     int age;
//     cin >> age;
//     if(age >= 18) {
//         cout << "You are an adult!";
//     }
//     else {
//         cout << "You are not an adult!";
//     }

//     // else if(age<18) {
//     //     cout << "You are not an adult";
//     // }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// /*
// A. school has following rules for grading system:
// a. below 25 - F
// b. 25 to 44 - E
// c. 45 to 49 - D
// d. 50 to 59 - C
// e. 60 to 79 - B
// f. 80 to 100 - A
// Ask user to enter marks and print the corresponding grade.
// */

// int main () {
//     int marks ;
//     cin >> marks;
//     /*
//     if(marks < 25) {
//         cout << "F";
//     }
//     else if(marks >= 25 && marks <= 44) {
//         cout << "E";
//     }
//     else if(marks >= 45 && marks <= 49) {
//         cout << "D";
//     }
//     else if(marks >= 50 && marks <= 59) {
//         cout << "C";
//     }
//     else if(marks >= 60 && marks <= 79) {
//         cout << "B";
//     }
//     else if(marks >= 80 && marks <= 100) {
//         cout << "A";
//     }
//     */

//     if(marks < 25) {
//         cout << "F";
//     }
//     else if(marks <= 44) {
//         cout << "E";
//     }
//     else if(marks <= 49) {
//         cout << "D";
//     }
//     else if(marks <= 59) {
//         cout << "C";
//     }
//     else if(marks <= 79) {
//         cout << "B";
//     }
//     else if(marks <= 100) {
//         cout << "A";
//     }

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// /*
// Take the age from the user and then decide accordingly
// 1. If age < 18,
//     print-> not eligible for job
// 2. If age >= 18 and age <= 54,
//     print-> "eligible for job"
// 3. If age >= 55 and age <= 57,
//     print-> "eligible for job, but retirement soon."
// 4. If age > 57
//     print-> "retirement time"
// */

// int main() {
//     int age;
//     cin >> age;
//     if(age < 18) {
//         cout << "not eligible for job";
//     }
//     // else if(age <= 54) {
//     //     cout << "eligible for job";
//     // }
//     // else if(age <= 57) {
//     //     cout << "eligible for job, but retirement soon.";
//     // }
//     else if(age <= 57) {
//         cout << "eligible for job";
//         if (age >= 55) {
//             cout << ", but retirement soon";
//         }
//     }
//     else {
//         cout << "retirement time";
//     }

//     return 0;
// }





// // Switch Statement

// #include<bits/stdc++.h>
// using namespace std;

// /*
// Take the day no and print the corresponding day
// for 1 print Monday,
// for 2 print Tuesday and so on for 7 print Sunday.
// */

// int main() {
//     int day;
//     cin >> day;

//     switch(day) {
//         case 1:
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4:
//             cout << "Thursday";
//             break;
//         case 5:
//             cout << "Friday";
//             break;
//         case 6:
//             cout << "Saturday";
//             break;
//         case 7:
//             cout << "Sunday";
//             break;

//         default:
//             cout << "Invalid";
//     }
//     return 0;
// }





// // What are arrays, strings?

// /*
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     //int arr[5];
//     double arr[5];
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

//     //arr[3] += 10;
//     //arr[3] = 10;
//     cout << arr[2];

//     return 0;
// }
// */


// /*
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     // 2D Array
//     int arr[3][4];

//     arr[1][2] = 29;
//     cout << arr[0][0];

//     return 0;
// }
// */


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     string s = "Dheeraj";
//     //cout << s[2];
//     int len = s.size();
//     cout << s[len -1];
//     s[len-1] = 'r';
//     cout << s;
//     return 0;
// }





// // For Loops

// #include<bits/stdc++.h>
// using namespace std;

// /*
// int main() {
//     int i;
//     for(i = 1; i <= 5; i++){
//         cout << "Dheeraj"<< endl;
//     }
//     cout << i << endl;
//     return 0;
// }
// */

// /*
// int main() {
//     int i;
//     for(i = 5; i > 0; i--){
//         cout << "Dheeraj "<< i << endl;
//     }
//     cout << i << endl;
//     return 0;
// }
// */



// // While Loops

// #include<bits/stdc++.h>
// using namespace std;


// // int main() {
// //     int i = 1;
// //     while(i<=5){
// //         cout << "Dheeraj " << i << endl;
// //         i += 1;
// //     }
// //     return 0;
// // }

// int main() {
//     int i = 2;
//     do {
//         cout << "Dheeraj " << i << endl;
//         i = i + 1;
//     }while(i<=1);
//         cout << i << endl;

//     return 0;
// }





// Function (Pass by Reference and Value)

#include<bits/stdc++.h>
using namespace std;

// Function are set of code which prefors something for you
// Functions are used to modularize code
// Functions are used to increase readability
// Function are used to use same code multiple times
// void -> which does not retuns anything
// return
// parametrized
// non parameterized

// Take two number and print its sum

// pass by value
// pass by reference

/*
void printNames(string name) {
    //cout << "Hey Dheeraj!";
    cout << "Hey "<< name << endl;
}

int main() {
    string name;
    cin >> name;
    printNames(name);
    
    string name2;
    cin >> name2;
    printNames(name2);
    return 0;
}
*/

/*
int sum(int num1, int num2) {
    int num3 = num1 + num2;
    return num3;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << res;
    return 0;
}
*/

/*
void sum(int num1, int num2) {
    int num3 = num1 + num2;
    cout << num3;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    sum(num1, num2);
    return 0;
}
*/



/*
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    //int minimum = min(num1, num2);
    //cout << minimum;
    int maximum = max(num1, num2);
    cout << maximum;
    return 0;
}
*/



// int maxx(int num1, int num2){
//     // if (num1>=num2) return num1;
//     // else return num2;
    
//     if (num1>=num2) {
//         return num1;
//     }

//     return num2;
// }


// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int maximum = maxx(num1, num2);
//     cout << maximum;
//     return 0;
// }

/*
void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num +=5;
    cout << num << endl;
}

int main() {
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}
*/



// pass by value
/*
void doSomething(string s){
    s[0] = 'D';
    cout << s <<endl;
}

int main() {
    string s = "Rupu";
    doSomething(s);
    cout << s << endl;
    return 0;
}
*/


// pass by reference
/*
void doSomething(string &s){
    s[0] = 'D';
    cout << s <<endl;
}

int main() {
    string s = "Rupu";
    doSomething(s);
    cout << s << endl;
    return 0;
}
*/


/*
void doSomething( int &num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main() {
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}
*/


/*
int main() {
    int arr[5];
    for (int i = 0; i<=4; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i<=4; i++) {
        cout << arr[i]<< " ";
    }
}
*/

// arrray always pass itself by reference
void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout << "Value inside function: "<< arr[0] <<endl;
}

int main() {
    int n = 5;
    int arr [n];
    for (int i = 0; i<n; i+=1){
        cin >> arr[i];
    }

    doSomething(arr, n);

    cout << "value  inside int main: "<< arr[0]<<endl;
    return 0;
}