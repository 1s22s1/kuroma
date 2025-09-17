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

    ll N, M;
    cin >> N >> M;

    vector<vector<ll>> g(N);
    rep(i, M)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        g.at(a).emplace_back(b);
        g.at(b).emplace_back(a);
    }

    bool ok = false;
    rep(i, N)
    {
        if (find(g.at(i).begin(), g.at(i).end(), 0) != g.at(i).end() && find(g.at(i).begin(), g.at(i).end(), N - 1) != g.at(i).end())
        {
            ok = true;
        }
    }

    if (ok)
    {
        cout << "POSSIBLE" << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
