#include<bits/stdc++.h>
using namespace std;


class Solution{
public:

	int isPalindrome(string S)
	{
	    int n = S.length();
	    bool flag = true;

	    for(int i = 0; i<n/2; i++){
            if(S[i]!=S[n-1-i]){
                flag = false;
                break;
            }
	    }
	    if(flag==false){
            cout<<"0"<<endl;
	    }
	    else{
            cout<<"1"<<endl;
	    }
	}

};



int  main(){

    Solution x;
    string s;
    s = "abc";
    x.isPalindrome(s);

return 0;
}
