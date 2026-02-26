#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize;
    int n;
    cin >> n;
    while(n--){
        int a,b,c,d;
        int count=0;
        cin >> a >> b >> c >> d;
       if(a<b){
        count++;
       }
       if(a<c){
        count++;
       }
         if(a<d){
          count++;
    }
cout<<count<<endl;}
    
    
    return 0;
}