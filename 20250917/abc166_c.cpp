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

    vector<ll> Hn;
    rep(i, N)
    {
        ll H;
        cin >> H;
        Hn.emplace_back(H);
    }

    vector<vector<ll>> g(N);
    rep(i, M)
    {
        ll A, B;
        cin >> A >> B;
        A--, B--;

        g.at(A).emplace_back(B);
        g.at(B).emplace_back(A);
    }

    ll answer = 0;

    rep(i, N)
    {
        bool ok = true;

        for (auto e : g.at(i))
        {
            if (Hn.at(i) <= Hn.at(e))
            {
                ok = false;
            }
        }

        if (ok)
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
