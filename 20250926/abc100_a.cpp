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

    ll A, B;
    cin >> A >> B;

    if (A <= 8 && B <= 8)
    {
        cout << "Yay!" << endl;
    }
    else
    {
        cout << ":(" << endl;
    }

    return 0;
}
