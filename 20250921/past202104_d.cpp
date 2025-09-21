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

    vector<ll> Sn = {0};
    rep(i, N)
    {
        ll A;
        cin >> A;
        Sn.emplace_back(Sn.back() + A);
    }

    for (ll i = K; i <= N; i++)
    {
        cout << Sn.at(i) - Sn.at(i - K) << endl;
    }

    return 0;
}
