#include <bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
   string s1,s2;
    cin>>s1>>s2;
for(int i=0;i<s1.size();i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    if(s1<s2) cout<<-1<<endl;
    else if(s1>s2) cout<<1<<endl;
    else cout<<0<<endl;
    return 0;
    }