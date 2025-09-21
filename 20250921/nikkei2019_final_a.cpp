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

    vector<ll> Sn = {0};
    rep(i, N)
    {
        ll A;
        cin >> A;
        Sn.emplace_back(Sn.back() + A);
    }

    for (ll k = 1; k <= N; k++)
    {
        ll answer = -1;
        for (ll i = k; i <= N; i++)
        {
            answer = max(answer, Sn.at(i) - Sn.at(i - k));
        }

        cout << answer << endl;
    }

    return 0;
}
