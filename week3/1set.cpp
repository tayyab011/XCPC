
   
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
set<int>st;
for (int i = 0; i < n; i++)
{
   int x;
   cin>>x;
   st.insert(x);
}
for (auto it :st)
{
   cout<<it<<" ";
}
cout<<endl;
auto it=st.find(7);
if(it!=st.end()){
    cout<<"found"<<endl;
}else{
     cout<<"not found"<<endl;
}
if (st.count(7))
{
    st.erase(7);
}
cout<<endl;
for (auto it :st)
{
   cout<<it<<" ";
}
cout<<endl;
auto itt=st.lower_bound(3);
cout<<*itt<<endl;
cout<<endl;
auto ittup=st.upper_bound(4);
cout<<*ittup<<endl;
}