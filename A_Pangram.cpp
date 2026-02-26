#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    bool found[26] = {false};  // ২৬টা অক্ষরের জন্য ফ্ল্যাগ অ্যারে
    int count = 0;

    for (char c : s) {
        int index = tolower(c) - 'a';  // অক্ষরের ইনডেক্স বের করা
        if (!found[index]) {  
            found[index] = true;  // নতুন অক্ষর পেলেই চিহ্নিত করি
            count++;
        }
    }

    cout << (count == 26 ? "YES" : "NO") << endl;
    return 0;
}
