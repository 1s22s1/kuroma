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

    ll N;
    cin >> N;

    vector<vector<ll>> g(N);

    rep(i, N - 1)
    {
        ll A;
        cin >> A;
        A--;
        g.at(A).emplace_back(i + 1);
    }

    for (auto e : g)
    {
        cout << e.size() << endl;
    }

    return 0;
}
