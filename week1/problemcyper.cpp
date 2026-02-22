
   
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
    
  for (int i = 0; i < n; i++)
  {
     int ns;
    cin>>ns;
    string s;
    cin>>s;
    for (char c:s)
    {
        if (c=='U' && ar[i]==0)
        {
           ar[i]=9;

        }else if(c=='D' && ar[i]==9){
             ar[i]=0;
        }else if(c=='D'){
            ar[i]=ar[i]+1;
        }else {
            ar[i]=ar[i]-1;
        }
        
    }
    


  }
   for (int i = 0; i < n; i++)
    {
       cout<<ar[i]<<" ";
    }
cout<<endl;
}

}

