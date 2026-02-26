#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    long long n;
    cin>>n;
    if((n%2)==0){
        cout<<n/2;
    }
    else{
        cout<<-((n/2)+1);
    }
    return 0;
}
