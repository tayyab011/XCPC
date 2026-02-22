
   
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<int>ar(n-1);
 for (int i = 0; i < n-1; i++)
{
   cin>>ar[i];
} 

sort(ar.begin(),ar.end());
for (int i = 0; i <=n-1; i++)
{
    if (i+1!=ar[i])
    {
       cout<<i+1<<endl;
       break;
    }
    
}


}