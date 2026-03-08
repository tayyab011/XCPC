#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 int t;
 cin>>t;
 while (t--)
 {
  int n;
  cin>>n;
  string s;
  cin>>s;
  int f=s.find('B'),l=s.rfind('B');
 int res=(l-f)+1;
 cout<<res<<endl;
 }
 
}