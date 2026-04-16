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