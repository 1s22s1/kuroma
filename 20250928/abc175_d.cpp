#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

void init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
}

int main()
{
    init();

    ll N, K;
    cin >> N >> K;

    vector<ll> Pn, Cn;

    rep(i, N)
    {
        ll P;
        cin >> P;
        Pn.emplace_back(P);
    }

    rep(i, K)
    {
        ll C;
        cin >> C;
        Cn.emplace_back(C);
    }

    vector<vector<ll>> scores;
    vector<bool> visited(N, false);

    while (true)
    {
    }

    return 0;
}
