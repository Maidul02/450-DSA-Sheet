#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        sort(arr,arr+r+1);
        return arr[k-1];

    }
};


int main() {

    int arr[] = {7,10,4,3,20,15};
    Solution s;
    int r = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    cout<<s.kthSmallest(arr,0,r-1,k)<<"\n";

return 0;
}
