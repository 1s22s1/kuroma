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

    vector<vector<ll>> scores;
    vector<bool> visited(N, false);
    rep(i, N)
    {
        ll current = i;
        if (visited.at(current))
        {
            continue;
        }

        vector<ll> score;
        while (!visited.at(current))
        {
            visited.at(current) = true;
            score.emplace_back(Cn.at(current));
            current = Pn.at(current);
        }

        scores.emplace_back(score);
    }

    for (auto score : scores)
    {
        vector<ll> Sn = {0};
        rep(i, score.size() * 2)
        {
            Sn.emplace_back(Sn.back() + score.at(i % score.size()));
        }
    }

    return 0;
}
