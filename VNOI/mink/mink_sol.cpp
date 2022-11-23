#include <bits/stdc++.h>
#define maxn 20009
#define Task ""
#define vt vector
#define pb push_back
#define pii pair <int, int>
#define mp make_pair
#define F first
#define S second
#define ll long long
#define mod 1000000007
 
using namespace std;
int n, a[maxn], s[maxn], k;
void nhap()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}
 
void stacking()
{
    int l = 1, r = 0;
    for (int i = 1; i <= k; i++)
    {
        while (r != l-1 && a[i] < a[s[r]]) r--;
        s[++r] = i;
    }
    cout << a[s[l]] << " ";
    for (int i = k+1; i <= n; i++)
    {
        while (s[l] <= i-k && l != r+1) l++;
        while (r != l-1 && a[i] < a[s[r]]) r--;
        s[++r] = i;
        cout << a[s[l]] << " ";
    }
    cout << "\n";
}
 
void solve()
{
    fill(s, s+n+1, 0);
    stacking();
}
 
int main()
{
    freopen ("mink.inp", "r", stdin);
    freopen ("mink_result.out", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        nhap();
        solve();
    }
    return 0;
}