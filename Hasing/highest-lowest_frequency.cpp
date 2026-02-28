/*
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

cout << "Frequency of the elements are" << endl;

int maxFreq = INT_MIN;
int minFreq = INT_MAX;
int maxElement, minElement;

for(auto row : ans){
    cout << row[0] << " -> " << row[1] << endl;
    
    // Highest frequency
    if(row[1] > maxFreq){
        maxFreq = row[1];
        maxElement = row[0];
    }
    
    // Lowest frequency
    if(row[1] < minFreq){
        minFreq = row[1];
        minElement = row[0];
    }
}

cout << "\nElement with Highest Frequency: "<< maxElement << " (" << maxFreq << " times)" << endl;

cout << "Element with Lowest Frequency: "<< minElement << " (" << minFreq << " times)" << endl;

return 0;
}
*/













/*
#include <bits/stdc++.h>
using namespace std;

int countFrequencies(vector<int>& nums) {
    
map<int, int> mpp;


for (int num : nums) {
    mpp[num]++;
}

int maxFreq = INT_MIN;
int minFreq = INT_MAX;
int maxElement = 0;
int minElement = 0;

cout << "Frequency of the elements are" << endl;


for (auto x : mpp) {
    
int element = x.first;
int freq = x.second;

cout << element << " -> " << freq << endl;

if (freq > maxFreq) {
    maxFreq = freq;
    maxElement = element;
}

if (freq < minFreq) {
    minFreq = freq;
    minElement = element;
}
}

cout << "\nElement with Highest Frequency: "<< maxElement << " (" << maxFreq << " times)" << endl;

cout << "Element with Lowest Frequency: "<< minElement << " (" << minFreq << " times)" << endl;

return maxFreq;
}

int main() {
    
int n;
cout << "Enter how many elements you want to enter: ";
cin >> n;

vector<int> nums(n);

for(int i = 0; i < n; i++){
    cout << "Enter the " << i+1 << " element : ";
    cin >> nums[i];
}

int result = countFrequencies(nums);

cout << "\nReturned Highest Frequency = " << result << endl;

return 0;
}
*/














/*
#include <bits/stdc++.h>
using namespace std;

pair<int,int> countFrequencies(vector<int>& nums) {
    
map<int, int> mpp;

for (int num : nums) {
    mpp[num]++;
}

int maxFreq = INT_MIN;
int maxElement = 0;

for (auto x : mpp) {
    
if (x.second > maxFreq) {
            maxFreq = x.second;
            maxElement = x.first;
        }
    }
    
    return {maxElement, maxFreq};   // pair return
}

int main() {

int n;
cout << "Enter how many elements you want to enter: ";
cin >> n;

vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cout << "Enter the " << i+1 << " element : ";
        cin >> nums[i];
    }
    
    pair<int,int> result = countFrequencies(nums);
    
    cout << "\nHighest Frequent Element is: " << result.first << " & Frequency is: " << result.second << endl;
    
    return 0;
}
*/






















#include <bits/stdc++.h>
using namespace std;

int countFrequencies(vector<int>& nums) {
    
    map<int, int> mpp;

    for (int num : nums) {
        mpp[num]++;
    }

    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;
    int maxElement = 0;
    int minElement = 0;

    for (auto x : mpp) {
        
    int element = x.first;
    int freq = x.second;


    if (freq > maxFreq) {
        maxFreq = freq;
            maxElement = element;
        }
            
        if (freq < minFreq) {
            minFreq = freq;
            minElement = element;
        }
    }
        
        
    return maxElement;
}

int main() {
    
    int n;
    cout << "Enter how many elements you want to enter: ";
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cout << "Enter the " << i+1 << " element : ";
        cin >> nums[i];
    }

    int result = countFrequencies(nums);

    cout << "\nReturned Highest Frequency = " << result << endl;

return 0;
}
