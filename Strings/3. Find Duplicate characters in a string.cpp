#include<bits/stdc++.h>
using namespace std;

void printDups(string s){
    map<char,int>m;

    int n = s.length();

    for(int i = 0; i<n; i++){
        m[s[i]]++;
    }

    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }

}

int main() {

string s = "aabbccddeefghiijjkkl";
printDups(s);


return 0;
}
