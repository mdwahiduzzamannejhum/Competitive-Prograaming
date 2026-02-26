#include <bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    string s;
    cin>>s;
    vector<char>v;
    for(int i=0;i<s.size();i=i+2){
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1){
            cout<<"+";
        }
    }
}

