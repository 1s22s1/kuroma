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

    vector<ll> An = {0};
    rep(i, N)
    {
        ll A;
        cin >> A;

        An.emplace_back(A);
    }

    for (ll i = 1; i <= N; i++)
    {
        ll answer = 1;
        ll current = i;

        while (An.at(current) != i)
        {

            current = An.at(current);
            answer++;
        }

        cout << answer << ' ';
    }

    cout << endl;

    return 0;
}
