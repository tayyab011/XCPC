
   
#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
deque<int>dk;
for (int i = 0; i < n; i++)
{
   int x;
   cin>>x;
   dk.push_back(x);

}
dk.push_front(10);
dk.push_back(1000);
dk.pop_front();
for (auto i :dk)
{
   cout<<i<<" ";
}

cout<<endl;
//push_back ,pop_back(), back
//push_front ,pop_front(), front
// same as well as vector
}