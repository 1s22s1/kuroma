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

    ll a, b;
    cin >> a >> b;

    if (a <= 0 && 0 <= b)
    {
        cout << "Zero" << endl;
    }
    else if (0 < a)
    {
        cout << "Positive" << endl;
    }
    else
    {
        if ((b - a + 1) % 2 == 0)
        {
            cout << "Positive" << endl;
        }
        else
        {
            cout << "Negative" << endl;
        }
    }

    return 0;
}
