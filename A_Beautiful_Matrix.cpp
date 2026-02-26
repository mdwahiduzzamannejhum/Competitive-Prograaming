#include <bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    optimize;
        int a[6][6];
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                cin>>a[i][j];
            }
        }
        int x=0,y=0;
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                if(a[i][j]==1){
                    x=i;
                    y=j;
                }
            }
        }
        int ans=abs(3-x)+abs(3-y);
        cout<<ans<<endl;
        return 0;
}