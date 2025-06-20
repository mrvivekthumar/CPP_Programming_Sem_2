#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string t = "";

    if (s.length() == 1 && k > 0) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < s.length(); i++) {
        if (k > 0) {
            if (i == 0 && s[i] != '1') {
                t += '1';
                k--;
            } else if (i == 0 && s[i] == '1') {
                t += '1';
            }else if (s[i] != '0') {
                t += '0';
                k--;
            }else {
                t += s[i];
            }
        } else {
            t += s[i];
        }
    }
    cout << t << endl;
    return 0;
}