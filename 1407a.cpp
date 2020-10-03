//			Goli Beta, Masti Nai...

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
	ll n;
	cin >> n;

	ll arr[n];
	ll cnt = 0;

	for(ll i = 0 ; i < n ; i++)
	{
	    cin >> arr[i];

	    if(arr[i])
		cnt++;
	}   

	if(cnt > n/2)
	{
	    cout << cnt - (cnt % 2) << endl;
	    for(ll i = 0 ; i < (cnt - (cnt % 2)) ; i++)
		cout << 1 << " ";
	    cout << endl;
	}
	else
	{
	    cout << n - cnt << endl;
	    for(ll i = 0 ; i < (n - cnt) ; i++)
		cout << 0 << " ";
	    cout << endl;
	}
    }

    return 0;
}

