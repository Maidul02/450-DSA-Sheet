#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){

        long long maxsum = arr[0];
        long long sum = 0;
        for(int i = 0; i<n; i++){
            sum+=arr[i];
            maxsum = max(maxsum, sum);

            if(sum<0){
                sum = 0;
            }
        }
        return maxsum;
    }
};


int main() {

    int n = 4;
    int arr[] = {-1,-2,-3,-4};
    Solution s;
    s.maxSubarraySum(arr,n);



return 0;
}
