/*
#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &a, int n){
    int largest = a[0];
    int slargest = -1;
    for (int i = 1 ; i<n; i++){
        if (a[i] > largest){
            slargest = largest;
            largest = a[i];
        }
        else if(a[i] < largest && a[i] > slargest){
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int> &a, int n){
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i = 1; i<n; i++){
        if (a[i] < smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] != smallest && a[i] < smallest){
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElemnts(vector<int> &a){
    int n = a.size();
    int slargest = secondLargest(a, n);
    int ssmallest = secondSmallest(a, n);
    return {slargest, ssmallest};
}


int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cout << "Enter "<< i+1<<" elements: ";
        cin >> a[i];
    }

    vector<int> ans = getSecondOrderElemnts(a);

    cout << "Second Largest: " << ans[0] << endl;
    cout << "Second Smallest: " << ans[1] << endl;

    return 0;
}
*/






/*
#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &a, int n){
    int largest = a[0];
    int slargest = -1;
    for (int i = 1 ; i<n; i++){
        if (a[i] > largest){
            slargest = largest;
            largest = a[i];
        }
        else if(a[i] < largest && a[i] > slargest){
            slargest = a[i];
        }
    }
    return slargest;
}



vector<int> secondLargestElement(vector<int> &a){
    int n = a.size();
    int slargest = secondLargest(a, n);
    return {slargest};
}


int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    vector<int> a(n);
    
    for(int i = 0; i < n; i++){
        cout << "Enter "<< i+1<<" elements: ";
        cin >> a[i];
    }
    
    vector<int> ans = secondLargestElement(a);
    
    cout << "Second Largest: " << ans[0] << endl;
    
    return 0;
}
*/














#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int>& nums) {
    
    int largest = nums[0];
    int slargest = -1;

    for(int i = 1; i < nums.size(); i++){
        
        if(nums[i] > largest){
            slargest = largest;
            largest = nums[i];
        }
        else if(nums[i] < largest && nums[i] > slargest){
            slargest = nums[i];
        }
    }

    return slargest;
}

int main(){

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> nums[i];
    }

    int ans = secondLargestElement(nums);

    if(ans == -1){
        cout << "Second largest element does not exist";
    }
    else{
        cout << "Second Largest Element: " << ans;
    }

    return 0;
}