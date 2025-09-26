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
        P--;
        Pn.emplace_back(P);
    }

    rep(i, N)
    {
        ll C;
        cin >> C;
        Cn.emplace_back(C);
    }

    vector<ll> visited(N, false);
    vector<vector<ll>> paths;
    rep(i, N)
    {
        ll current = i;
        vector<ll> path;

        if (visited.at(current))
        {
            continue;
        }

        while (!visited.at(current))
        {
            visited.at(current) = true;
            path.emplace_back(current);
            current = Pn.at(current);
        }

        paths.emplace_back(path);
    }

    for (auto path : paths)
    {
        vector<ll> Sn = {0};
        rep(i, path.size() * 2)
        {
            Sn.emplace_back(Sn.back());
        }
    }

    return 0;
}
