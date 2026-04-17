/*
// BRUTE FORCE
#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &nums, int k)
{
    int n = nums.size();
    int maxLength = 0;
    
    for (int startIndex = 0; startIndex < n; startIndex++) {

    for (int endIndex = startIndex; endIndex < n; endIndex++) {
        
    int currentSum = 0;
    
    
    for (int i = startIndex; i <= endIndex; i++) {
        currentSum += nums[i];
    }
    
    if (currentSum == k)
    maxLength = max(maxLength, endIndex - startIndex + 1);
        }
    }
    return maxLength;
}

int main()
{
    vector<int> a = { 10, 5, 2, 7, 1, 9};
    int k = 15;

    int len = longestSubarray(a, k);
    
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
*/










// BETTER
#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;

    for(int i = 0; i < a.size(); i++) {
        sum += a[i];

        // Case 1: if sum itself equals k
        if(sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // Case 2: remove prefix sum
        long long rem = sum - k;

        if(preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        // store prefix sum (only first occurrence)
        if(preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}
int main() {
    vector<int> a = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    long long k = 3;

    int result = longestSubarrayWithSumK(a, k);

    cout << "Array: ";
    for(auto x : a) cout << x << " ";

    cout << "\nK = " << k << endl;
    cout << "Longest subarray length: " << result << endl;

    return 0;
}