#include <bits/stdc++.h>
using namespace std;
//-------------------------------------------------------------------------------------------------
#define ll long long
#define nl cout << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define vl vector<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define msl map<string, ll>
#define mls map<ll, string>
#define umll unordered_map<ll, ll>
#define umsl unordered_map<string, ll>
#define umls unordered_map<ll, string>
#define sl set<ll>
#define ss set<string>
#define usl unordered_set<ll>
#define uss unordered_set<string>
#define in(n) cin >> n
#define in2(n, m) cin >> n >> m
#define sizear(arr) sizeof(arr) / sizeof(arr[0]);
#define fo(i, a, n) for (ll i = a; i < n; i++)
//-------------------------------------------------------------------------------------------------
void solution()
{
    ll n, odd = 0, even = 0;
    in(n);
    vl v(n);
    for (ll i = 0; i < n; i++)
    {
        in(v[i]);
        if (v[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    if (even == 1)
    {
        for (ll i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("SmrutiRanjanRout_day16_output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}