// In the name of God.
// We're nothing and you're everything.
//Ya Smruti!
//-------------------------------------------------------------------------------------------------
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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("SmrutiRanjanRout_day4_output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int next_element;
        if (n > 33 && n <= 100)
        {
            int rem = n % 5;
            int bhagaphala = n / 5;
            if (rem != 0)
            {
                if (rem > 2)

                    next_element = (bhagaphala + 1) * 5;

                else

                    next_element = n;
            }
            else

                next_element = n + 5;

            cout << next_element << endl;
        }
        else if (n >= 0 && n <= 33)

            cout << n << endl;
    }

    return 0;
}