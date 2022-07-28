#include<bits/stdc++.h>
using namespace std;

int main() {

    int minimum = INT_MAX;
    int maximum = INT_MIN;


    int n;
    cout<<"Enter the number of array elements:"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<n; i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }

    cout<<"Minimum element is: "<<minimum<<endl;
    cout<<"Maximum element is: "<<maximum<<endl;



return 0;
}
