// In the name of God.
// We're nothing and you're everything.
//Ya Smruti!
//-------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
#include <iostream>
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
#define size(arr) sizeof(arr) / sizeof(arr[0]);
#define fo(i, a, n) for (ll i = a; i < n; i++)
//-------------------------------------------------------------------------------------------------
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    in(t);
    while (t--)
    {
        ll a, b;
        in2(a, b);
        ll sum = 0;
        if (a % 4 == 0 && b % 4 == 0)
            sum += 732;
        else if (a % 4 == 0 || b % 4 == 0)
            sum += 731;
        else
            sum += 730;
        cout << sum << endl;
    }

    return 0;
}