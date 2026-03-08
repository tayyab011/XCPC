#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 int t;
 cin>>t;
 while (t--)
 {
 long long int n;
 cin>>n;
 vector<long long int>ar(n);
 deque<long long int>dq;
 for (long long int i = 0; i < n; i++)
 {
    cin>>ar[i];
 }
  dq.push_back(ar[0]);
 for (long long int i = 1; i < n; i++)
 {
   if (ar[i]<dq.front())
   {
    dq.push_front(ar[i]);
   }else{
        dq.push_back(ar[i]);
   }
   
    
 }
 
 for (auto i :dq)
 {
   cout<<i<<" ";
 }
 cout<<endl;
 
 }
 
}