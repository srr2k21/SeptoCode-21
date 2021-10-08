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
ll squaredigit(ll n)
{
    ll result = 0;
    while (n != 0)
    {
        int rem = n % 10;
        result += (rem * rem);
        n /= 10;
    }
    return result;
}
void solution()
{
    ll n;
    in(n);
    while (true)
    {
        ll k = squaredigit(n);
        if (k == 1)
        {
            cout << "lucky" << endl;
            break;
        }
        if (1 < k && k < 10)
        {
            cout << "unlucky" << endl;
            break;
        }
        n = k;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("SmrutiRanjanRout_day17_output.txt", "w", stdout);
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