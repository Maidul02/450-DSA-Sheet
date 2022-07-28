#include<bits/stdc++.h>
using namespace std;

int rotationCheck(string s1, string s2){
    if(s1.find(s2)!=string::npos){
        return 1;
    }
    else{
        return 0;
    }

}


int main() {

    string s1,s2;
    cin>>s1>>s2;

    if(rotationCheck(s1+s1,s2) || rotationCheck(s2+s2,s1)){
        cout<<"Strings are rotations of each other"<<endl;
    }
    else{
        cout<<"Strings are not rotations of each other"<<endl;
    }


return 0;
}
