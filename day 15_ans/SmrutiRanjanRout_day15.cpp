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
    ll n;
    in(n);
    sl s;
    for (ll i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        s.insert(k);
    }
    int flag = 0, count = 1;
    for (auto val : s)
    {
        if (val != count)
        {
            flag = 1;
            cout << count << endl;
            break;
        }
        count++;
    }
    if (flag == 0)
        cout << *s.rbegin() + 1 << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("SmrutiRanjanRout_day15_output.txt", "w", stdout);
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