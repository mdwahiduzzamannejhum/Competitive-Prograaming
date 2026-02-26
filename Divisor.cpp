#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int case1=1;case1<=T;case1++){
        int N;
        cin >> N;
        vector<int> divisors;
        for(int i=1;i<=sqrt(N);i++){
            if(N % i == 0){
                divisors.push_back(i);
                if(i!=N/i){
                    divisors.push_back(N/i);
                }}}

        sort(divisors.begin(), divisors.end());

        cout<<"Case "<<case1<<": ";
        for(int i=0;i<divisors.size();i++){
            cout << divisors[i] << " ";

        }
        cout << "\n";
    }

    return 0;
}
