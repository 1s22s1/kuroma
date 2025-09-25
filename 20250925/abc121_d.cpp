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

    // 偶数かつ偶数
    if (A % 2 == 0 && B % 2 == 0)
    {
        ll one_count = (B - A) / 2;

        if (one_count % 2 == 0)
        {
            cout << B << endl;
        }
        else
        {
            cout << (1 ^ B) << endl;
        }
    }
    // 偶数かつ奇数
    else if (A % 2 == 0 && B % 2 == 1)
    {
        ll one_count = (B - A) / 2;

        if (one_count % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    } // 奇数かつ偶数
    else if (A % 2 == 1 && B % 2 == 0)
    {
        ll one_count = (B - A - 1) / 2;

        if (one_count % 2 == 0)
        {
            cout << (A ^ B) << endl;
        }
        else
        {
            cout << (1LL ^ A ^ B) << endl;
        }
    } // 奇数かつ偶数
    else if (A % 2 == 1 && B % 2 == 0)
    {
        ll one_count = (B - A - 1) / 2;

        if (one_count % 2 == 0)
        {
            cout << (A ^ B) << endl;
        }
        else
        {
            cout << (1LL ^ A ^ B) << endl;
        }
    } // 奇数かつ奇数
    else if (A % 2 == 1 && B % 2 == 1)
    {
        ll one_count = (B - A) / 2;

        if (one_count % 2 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
