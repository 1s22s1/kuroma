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

    ll K;
    cin >> K;

    ll answer = 1;
    ll number = 7;

    rep(i, K + 1)
    {
        if (number % K == 0)
        {
            cout << answer << endl;

            return 0;
        }

        number = number * 10 + 7;
        number = number % K;

        answer++;
    }

    cout << -1 << endl;

    return 0;
}
