
#include <bits/stdc++.h>
using namespace std;


int main(){

ios::sync_with_stdio(false);
    cin.tie(nullptr);
int t;
cin>>t;
map <string,string> mp1,mp2;
while(t--){
 
    string o,n;
    cin>>o>>n;
    if(mp2.count(o)){
        string tmp=mp2[o];
        mp1[tmp]=n;
      
        mp2[n]=tmp;
    }else{
        mp1[o]=n;
        mp2[n]=o;
    }
}
 cout<<mp1.size()<<endl;
 for(auto p : mp1){
    cout<<p.first<<" "<<p.second<<endl;
}
 
}