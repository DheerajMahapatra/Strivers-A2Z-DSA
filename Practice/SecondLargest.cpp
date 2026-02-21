/*
#include<bits/stdc++.h>
using namespace std;

int larger_element(vector<int> &arr){
    sort(arr.begin(), arr.end());
    //return arr.back();
    
    int n = arr.size();
    return arr[n-2];
}

int main(){
    vector<int> arr = {2,3,1,6,7,10};
    int x = larger_element(arr);
    cout << "SecendLargest Element: " << x;
}
*/











#include <bits/stdc++.h>
using namespace std;


int secondLargest(vector<int> arr)
{
    int large = INT_MIN, secondLarge = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > large)
        {
            secondLarge = large;
            large = arr[i];
        }
        else if (arr[i] > secondLarge && arr[i] != large)
            secondLarge = arr[i];
    }
    return secondLarge;
}

int main()
{
    vector<int> arr = {3, 2, 1, 6, 0, 7};
    cout << secondLargest(arr);
}