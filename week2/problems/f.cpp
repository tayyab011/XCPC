#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    string s;
	cin>>s;
	stack<pair<char,int>>up,lo;
	for(int i=0;i<s.size();i++){
	    char c=s[i];
	    if(c>='A' && c<='Z'){
	        if(c=='B'){if(!up.empty())up.pop();}
	        else up.push({c,i});
	    }
	    if(c>='a' && c<='z'){
	        if(c=='b'){if(!lo.empty())lo.pop();}
	        else lo.push({c,i});
	    }
	    
	}
	vector <char> s2(s.size(),'.');
	while(!up.empty()){
	    s2[up.top().second]=up.top().first;
	    up.pop();
	}
	while(!lo.empty()){
	    s2[lo.top().second]=lo.top().first;
	    lo.pop();
	}
	
	for(char c:s2){
	    if(c!='.')cout<<c;
	}
 
	    cout<<endl;
	
}

}

