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

    vector<ll> An;
    rep(i, N)
    {
        ll A;
        cin >> A;

        An.emplace_back(A);
    }

    vector<ll> left = {0}, right = {0};

    for (auto a : An)
    {
        left.emplace_back(gcd(left.back(), a));
    }

    for (auto a : An | views::reverse)
    {
        right.emplace(right.begin(), gcd(right.front(), a));
    }

    ll answer = -1;

    rep(i, N)
    {
        answer = max(answer, gcd(left.at(i), right.at(i + 1)));
    }

    cout << answer << endl;

    return 0;
}
