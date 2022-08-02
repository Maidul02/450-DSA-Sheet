#include<bits/stdc++.h>
using namespace std;


int main() {

vector<int>arr = {1,2,-3,4,-4};

int n = arr.size();

int high = n-1, low = 0;

while(low<high){
    if(arr[low]<0){
        low++;
    }
    else if(arr[high]>0){
        high--;
    }
    else{
        swap(arr[low],arr[high]);
    }

}

for(int i = 0; i<n; i++){
    cout<<arr[i]<<endl;
}


return 0;
}
