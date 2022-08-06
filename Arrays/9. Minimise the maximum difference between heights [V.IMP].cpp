#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);


        int minimum = arr[0];
        int maximum = arr[n-1];
        int result = maximum-minimum;

        for(int i = 1; i<n; i++){
            if(arr[i]-k<0) continue;

            minimum = min(arr[0]+k,arr[i]-k);
            maximum = max(arr[n-1]-k, arr[i-1]+k);

            result = min(result,maximum-minimum);


        }
        return result;

    }
};



int main() {

    int arr[] = {3, 9, 12, 16, 20};
    Solution s;
    cout<<s.getMinDiff(arr,5,3)<<endl;


return 0;
}
