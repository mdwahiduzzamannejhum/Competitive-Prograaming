#include <bits/stdc++.h>
using namespace std;
int main(){
int T;
cin>>T;
string x;
for(int i=0;i<T;i++){
cin>>x;
    int lastdigit=x.back()-'0';
  if(lastdigit%2==0)cout<<"even"<<endl;
                  else {cout<<"odd"<<endl;}
}
  return 0;
}