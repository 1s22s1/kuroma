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

    vector<ll> An, Bn;
    rep(i, N)
    {
        ll A;
        cin >> A;

        An.emplace_back(A);
    }

    rep(i, N)
    {
        ll B;
        cin >> B;

        Bn.emplace_back(B);
    }

    ll sum = 0;
    rep(i, N)
    {
        sum += abs(An.at(i) - Bn.at(i));
    }

    if (sum > K)
    {
        cout << "No" << endl;

        return 0;
    }

    if (sum % 2 == K % 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
