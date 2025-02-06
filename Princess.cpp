#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> preferences(n + 1);
        set<int> taken_princes;
        int free_princess = -1;
        
        for (int i = 1; i <= n; ++i) {
            int k;
            cin >> k;
            preferences[i].resize(k);
            
            for (int j = 0; j < k; ++j) {
                cin >> preferences[i][j];
            }
            
            bool married = false;
            for (int prince : preferences[i]) {
                if (taken_princes.find(prince) == taken_princes.end()) {
                    taken_princes.insert(prince);
                    married = true;
                    break;
                }
            }
            
            if (!married) {
                free_princess = i;
            }
        }
        
        if (free_princess == -1) {
            cout << "OPTIMAL" << endl;
        } else {
            for (int prince = 1; prince <= n; ++prince) {
                if (taken_princes.find(prince) == taken_princes.end()) {
                    cout << "IMPROVE" << endl;
                    cout << free_princess << " " << prince << endl;
                    break;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
