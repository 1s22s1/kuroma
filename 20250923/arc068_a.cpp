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

    ll x;
    cin >> x;

    ll answer = x / 11 * 2;
    ll rem = x % 11;

    if (1 <= rem && rem <= 6)
    {
        answer += 1;
    }
    else if (7 <= rem && rem <= 11)
    {
        answer += 2;
    }

    cout << answer << endl;

    return 0;
}
