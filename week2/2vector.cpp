
   
#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
//stl list for vector
//1 / front  2/back  3/clear  4/empty  5/push_back  6/pop_back 7/resize 8//--end

//6assign a vector
vector<int>v(5,2);
for (auto i :v)
{
   cout<<i<<" ";
}
cout<<endl;
//8 iterator begin() end()
vector<int>iter{6,9,1,2,3,4,5};

auto it=iter.begin();
cout<< *it<<endl;
//importent travarse for iterator with auto

sort(iter.begin(),iter.end(),greater<int>());
for (auto it=iter.begin();it!=iter.end();it++)
{
   cout<<*it<<" ";
}
cout<<endl;
auto mn=*min_element(iter.begin(),iter.end());
auto mx=*max_element(iter.begin(),iter.end());
cout<<mx<<" "<<mn;
}