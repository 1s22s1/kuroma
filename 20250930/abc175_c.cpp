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

    ll X, K, D;

    cin >> X >> K >> D;

    X = abs(X);

    if (X / D > K)
    {
        cout << X - K * D << endl;

        return 0;
    }

    ll rest_count = K - X / D;
    ll answer = X - (X / D) * D;

    if (rest_count % 2 == 0)
    {
        cout << answer << endl;
    }
    else
    {
        cout << abs(answer - D) << endl;
    }

    return 0;
}
