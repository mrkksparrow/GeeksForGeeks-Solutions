#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		set <char> s;
		for (int i=0; i<str.length(); i++){
			s.insert(str[i]);
		}
		cout<<str.length()-s.size()<<endl;
	}
	return 0;
}
