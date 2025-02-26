#include <bits/stdc++.h>
using namespace std;

#define go int t; cin >> t; while(t--)
int main() {
  go{
    int n;
    set <int> s;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int r = (a[i] + i) % n;
        if(r < 0) r += n;
        s.insert(r);
    }
    // for (auto it = s.begin(); it != s.end(); it++) {
    //     cout << *it << " ";
    //
    // }
    if(s.size() == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
    return 0;
}

// 5 5 5 1
// 1 2 3 4 5  6  7  8  9  10
// 6 7 8 5 10 11 12 9
