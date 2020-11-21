#include <bits/stdc++.h>
using namespace std;

void MergeSort(char str[], int l, int mid, int r){
    int i=l, j=mid+1, k=l;
    char res[r+1];
    while(i<=mid && j<=r){
        if(str[i] > str[j]) res[k++] = str[j++];
        else if(str[i]==str[j]){
        	res[k++] = str[i++];
		}
        else res[k++] = str[i++];
    }
    while(i<=mid){
	 res[k++] = str[i++];
	}
    while(j<=r){
    	 res[k++] = str[j++];
    }

    for (int x=l; x<=r; x++) str[x] = res[x];
}

void Merge(char str[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        Merge(str,l,mid);
        Merge(str,mid+1,r);
        MergeSort(str,l,mid,r);
    }
}

string caseSort(string str, int n){
    char sml[n], lrg[n];
    int s=0, l=0;
    for (int i=0; i<n; i++){
        if(islower(str[i])) sml[s++] = str[i];
        else lrg[l++] = str[i];
    }
    Merge(sml,0,s-1);
    Merge(lrg,0,l-1);

    s=0, l=0;
    for (int i=0; i<n; i++){
        if (islower(str[i])) str[i] = sml[s++];
        else str[i] = lrg[l++];
    }
    return str;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    str = caseSort(str, n);
	    cout<<str<<endl;
	}
    return 0;
}
