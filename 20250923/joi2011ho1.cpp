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

    ll N, M, Q;
    cin >> N >> M >> Q;

    vector<string> map;
    rep(i, N)
    {
        string row;
        cin >> row;
        map.emplace_back(row);
    }

    vector<vector<ll>> Jn(N + 1, vector<ll>(M + 1, 0));
    vector<vector<ll>> On(N + 1, vector<ll>(M + 1, 0));
    vector<vector<ll>> In(N + 1, vector<ll>(M + 1, 0));

    for (ll i = 1; i <= N; i++)
    {
        for (ll j = 1; j <= M; j++)
        {
            if (j == 0)
            {
                Jn.at(i).at(j) = map.at(i - 1).at(j - 1) == 'J' ? 1 : 0;
                On.at(i).at(j) = map.at(i - 1).at(j - 1) == 'O' ? 1 : 0;
                In.at(i).at(j) = map.at(i - 1).at(j - 1) == 'I' ? 1 : 0;
            }
            else
            {
                Jn.at(i).at(j) = map.at(i - 1).at(j - 1) == 'J' ? Jn.at(i).at(j - 1) + 1 : Jn.at(i).at(j - 1);
                On.at(i).at(j) = map.at(i - 1).at(j - 1) == 'O' ? On.at(i).at(j - 1) + 1 : On.at(i).at(j - 1);
                In.at(i).at(j) = map.at(i - 1).at(j - 1) == 'I' ? In.at(i).at(j - 1) + 1 : In.at(i).at(j - 1);
            }
        }
    }

    for (ll i = 2; i <= N; i++)
    {
        rep(j, M + 1)
        {
            Jn.at(i).at(j) += Jn.at(i - 1).at(j);
            On.at(i).at(j) += On.at(i - 1).at(j);
            In.at(i).at(j) += In.at(i - 1).at(j);
        }
    }

    rep(i, Q)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << Jn.at(c).at(d) + Jn.at(a - 1).at(b - 1) - Jn.at(a - 1).at(d) - Jn.at(c).at(b - 1) << ' ';
        cout << On.at(c).at(d) + On.at(a - 1).at(b - 1) - On.at(a - 1).at(d) - On.at(c).at(b - 1) << ' ';
        cout << In.at(c).at(d) + In.at(a - 1).at(b - 1) - In.at(a - 1).at(d) - In.at(c).at(b - 1) << endl;
    }

    return 0;
}
