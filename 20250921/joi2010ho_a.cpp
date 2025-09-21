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

    vector<ll> Sn = {0};

    rep(i, N - 1)
    {
        ll A;
        cin >> A;
        Sn.emplace_back(Sn.back() + A);
    }

    ll current = 0, answer = 0;
    rep(i, M)
    {
        ll B;
        cin >> B;

        answer += abs(Sn.at(current + B) - Sn.at(current));
        answer %= 100000;
        current += B;
    }

    cout << answer << endl;

    return 0;
}
