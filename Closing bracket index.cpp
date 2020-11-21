#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int closing (string s, int pos)
        {
        	int open=0;
        	for (int i=pos; i<s.length(); i++){
        	    if(s[i]=='[' || s[i]=='('){
        	        open++;
        	    }
        	    if(s[i]==']' || s[i]==')'){
        	        open--;
        	    }
        	    if(open==0) return i;
        	}
        }
};

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int pos;
    cin>>pos;
    Sloution ob;
    cout<<ob.closing(s, pos)<<endl;
	}
	return 0;
}
