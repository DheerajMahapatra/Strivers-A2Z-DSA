/*
#include <bits/stdc++.h>
using namespace std;


void Frequency(int arr[], int num) {
    
unordered_map<int, int> map;

for (int i = 0; i < num; i++) {
    map[arr[i]]++;
}

cout << "Frequency of the elements are"<< endl;
for (auto x : map) {
    cout << x.first << " -> " << x.second << endl;
}
}

int main() {
    
// int arr[] = {10, 5, 10, 15, 10, 5};
int num;
cout << "Enter how many elements you want to enter: ";
cin >> num;
int arr[num];

for(int i = 0; i<num; i++){
    cout << "Enter the "<< i <<" element : ";
    cin >> arr[i];
}

//int n = sizeof(arr) / sizeof(arr[0]);

Frequency(arr, num);
return 0;
}
*/







/*
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> countFrequencies(vector<int>& num) {
    
unordered_map<int, int> mpp;

for (int i = 0; i < num.size(); i++) {
    mpp[num[i]]++;
}

vector<vector<int>> result;

for (auto x : mpp) {
    result.push_back({x.first, x.second});
}

return result;
}

int main() {
    
int n;
cout << "Enter how many elements you want to enter: ";
cin >> n;

vector<int> num(n);

for(int i = 0; i<n; i++){
    cout << "Enter the "<< i+1 <<" element : ";
    cin >> num[i];
}
vector<vector<int>> ans = countFrequencies(num);

cout << "Frequency of the elements are"<< endl;

for(auto row : ans){
    cout << row[0] << " -> " << row[1] << endl;
}

return 0;
}
*/











#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> countFrequencies(vector<int>& nums) {
    
    map<int, int> mpp;

    for (int num : nums) {
        mpp[num]++;
    }

    vector<vector<int>> result;

    for (auto x : mpp) {
        result.push_back({x.first, x.second});
    }

    return result;
}

int main() {
    
    int n;
    cout << "Enter how many elements you want to enter: ";
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i<n; i++){
        cout << "Enter the "<< i+1 <<" element : ";
        cin >> nums[i];
    }
    vector<vector<int>> ans = countFrequencies(nums);

    cout << "Frequency of the elements are"<< endl;

    for(auto row : ans){
        cout << row[0] << " -> " << row[1] << endl;
    }

    return 0;
}
