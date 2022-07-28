#include<bits/stdc++.h>
using namespace std;


void reverseArray(int arr[], int n){
    for(int i = 0; i<n/2; i++){
        swap(arr[i],arr[n-1-i]);
    }
}

int main(){

    int c;
    cout<<"Enter number of array elements:"<<endl;
    cin>>c;

    int arr[c];
    for(int i = 0; i<c; i++){
        int x;
        cin>>x;
        arr[i]=x;
    }

    cout<<"The main array is:"<<endl;
    for(int i = 0; i<c; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    reverseArray(arr,c);
    cout<<"The reversed array is:"<<endl;
    for(int i = 0; i<c; i++){
        cout<<arr[i]<<" ";
    }


}
