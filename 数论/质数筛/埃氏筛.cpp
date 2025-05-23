/* author: Cysheper */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define all(x) x.begin(), x.end()
#define unq_all(x) x.erase(unique(all(x)), x.end())
#define inf 0x3f3f3f3f
#define eps 1e-7
#define int ll
#define endl '\n'
#define pb push_back
#define fi first
#define se second
#define sz(x) (int)x.size()
#define mem(a, b) memset(a, b, sizeof(a))
#define fill(a, b) fill(all(a), b)
#define debug(x) cerr << #x << " = " << x << endl
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pii> vii;
const int p = 1e9 + 7;
const int mod = 998244353;
const int N = 1e7 + 5;
// 时间复杂度: O(nloglogn)
vector<int> Eratosthenes(int n) {
    vector<int> prime;
    vector<char> vis(n + 1);
    prime.pb(2);
    for (int i = 3; i <= n; i += 2) {
        if (!vis[i]) {
            prime.pb(i);
            for (int j = i * i; j <= n; j += i) 
                vis[j] = 1;
        }
    }
    return prime;
}

void solve() {
    int n, q; cin >> n >> q;
    vector<int> v = Eratosthenes(n);
    while(q--) {
        int x; cin >> x;
        cout << v[x-1] << "\n";
    }
}

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int _ = 1;
    // cin >> _;
    while(_--) solve();
    return 0;
}