#include <bits/stdc++.h>
using namespace std;

#define go int t; cin >> t; while(t--)
int main() {
go{
    int n, mx = INT_MIN, cnt = 0;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    for(int i = 0; i < n; i++)
        mx =max(a[i] - b[i], mx);
    for(int i = 0; i < n; i++)
        if(a[i] - b[i] == mx)
            cnt++;
    cout << cnt << endl;
    for(int i = 0; i < n; i++)
        if(a[i] - b[i] == mx)
            cout << i + 1 << " ";
    cout << endl;
  }
    return 0;
}
