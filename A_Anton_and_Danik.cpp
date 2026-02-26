#include <iostream>
#include <vector>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize;
  int n;
  cin>>n;
  string s;
  cin>>s;
  int counta=0,countb=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            counta++;
        }
        else{
            countb++;
        }
    }
    if(counta>countb){
        cout<<"Anton"<<endl;
    }
    else if(countb>counta){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }

    return 0;
}
