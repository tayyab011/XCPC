#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 int t;
 cin>>t;
 while (t--)
 {
int n,m=3;
cin>>n;
map<string,vector<int>>ar;
for (int i = 1; i <= m; i++)
{
   for (int j = 1; j <= n; j++)
   {
   string s;
   cin>>s;
   ar[s].push_back(i);
   }
   
}

int a=0,b=0,c=0;
for (auto i :ar)
{
 /*   cout<<i.first<<" ->"; */
   vector<int> x=i.second;
    
 if (x.size()==3)
 {
  continue;
 }else if(x.size()==1){
   if (x[0]==1)
   {
      a+=3;
   }else if(x[0]==2){
      b+=3;
   }else{
      c+=3;
   }
   
 }else{
   for (auto i :x)
   {
      if (i==1)
   {
      a+=1;
   }else if(i==2){
      b+=1;
   }else{
      c+=1;
   }
   }
   
 }
 
   
  
}
cout<<a<<" "<<b<<" "<<c;
cout<<endl;
 }
 
}