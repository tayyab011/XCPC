#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b;
cin>>a>>b;
if (a==b)
{
   cout<<a+b<<endl;
}else if(a>b){
    int res=(a-1)+a;
    cout<<res<<endl;
}else{
       int res=(b-1)+b;
     cout<<res<<endl;
}

}