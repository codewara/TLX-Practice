/*
GEMASTIK XVII 2024 - Penyisihan
[B] Lumpia Rebung (https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/B)

Solved by   : codewara
Solve date  : 27-07-2025
*/

#include <bits/stdc++.h>
#define dd cout << "test" << endl;
#define skibidi ios_base::sync_with_stdio(false);
#define dop cin.tie(NULL);
#define dob cout.tie(NULL);
#define fi first
#define se second
#define lf long double
#define int long long
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define atv(x, y) (x).begin() + (y)
#define all(x) (x).begin(), (x).end()
#define rep(i, x, y) for (int i = (x); i < (y); i++)
#define per(i, x, y) for (int i = (x); i >= (y); i--)
using namespace std;

const int MOD = 1e9 + 7;

void solve () {
    int N, L; cin >> N >> L;
    vi res = {L};

    while(N--) {
        int B; cin >> B; B--;
        res[B] /= 2;
        res.insert(atv(res, B), res[B]);
    }

    rep (i, 0, res.size()) cout << res[i], cout << (i == N ? '\n' : ' ');
}

signed main () {
    skibidi dop dob
    int t = 1;
    while (t--) solve ();
    return 0;
}
