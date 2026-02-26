#include<iostream>
using namespace std;
#define optimize ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    optimize;
    int a, b, c;
    cin >> a >> b >> c;
    int result = a + b + c;
    result=max(result, a * b * c);
    result=max(result, a + b * c);
    result=max(result, a * b + c);
    result=max(result, a * (b + c));
    result=max(result, (a + b) * c);;
    cout << result << endl;
    return 0;
}
