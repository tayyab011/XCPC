
   
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while (t--)
{
   int n;
   cin>>n;
   vector<int>ar(n);
   for (int i = 0; i < n; i++)
   {
   cin>>ar[i];
   }
   vector<int>bb;
   for (int i = 0; i < n; i++)
   {
   bb.push_back((n-ar[i])+1);
   }
   
 for (int i = 0; i < n; i++)
   {
  cout<<bb[i]<<" ";
   }cout<<endl;
}

}