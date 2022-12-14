#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        set<int>s;
        for(int i = 0; i<n; i++){
            s.insert(a[i]);
        }
        for(int j = 0; j<m; j++){
            s.insert(b[j]);
        }
        return s.size();
    }
};

int main(){

    int m = 6, n = 2;

    int arr[m], arr2[n];
    for(int i = 0; i<m; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++){
        cin>>arr2[i];
    }

    Solution s;
    s.doUnion(arr,m,arr2,n);

return 0;
}
