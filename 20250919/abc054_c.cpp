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

    vector<ll> paths;
    rep(i, N)
    {
        paths.emplace_back(i);
    }

    ll answer = 0;

    do
    {
        bool ok = true;

        rep(i, N - 1)
        {
            if (find(g.at(paths.at(i)).begin(), g.at(paths.at(i)).end(), paths.at(i + 1)) == g.at(paths.at(i)).end())
            {
                ok = false;
            }
        }

        if (paths.at(0) == 0 && ok)
        {
            answer++;
        }
    } while (next_permutation(paths.begin(), paths.end()));

    cout << answer << endl;

    return 0;
}
