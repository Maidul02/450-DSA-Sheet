#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for(int i = 0; i<n/2; i++){
            swap(s[i],s[n-i-1]);
        }
    }


};



int main() {

    Solution x;
    vector<char>v;
    v.push_back('M');
    v.push_back('A');
    v.push_back('I');
    v.push_back('D');
    v.push_back('U');
    v.push_back('L');


    x.reverseString(v);

return 0;
}
