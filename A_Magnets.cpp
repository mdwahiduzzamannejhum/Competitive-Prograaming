#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 1; // প্রথম ম্যাগনেট সবসময় একটি নতুন গ্রুপ শুরু করে
    for(int i = 1; i < n; i++){
        if(a[i] != a[i-1]){
            count++;
        }
    }
    cout << count;
    return 0;
}