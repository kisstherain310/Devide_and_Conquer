#include <bits/stdc++.h>
 
using namespace std;
 
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl '\n'
 
ll n;  
vector<ll> v;
 
ll binarySearch(ll x){
	ll l = 0, r = n - 1;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (v[mid] == x)
            return 1;
        if (v[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return 0;
}
 
int main (){
    faster();
	cin >> n;
	for(int i = 0; i < n; i++){
		ll gan; cin >> gan; v.push_back(gan);
	}
	sort(v.begin(), v.end());
	while(1){
		ll x; cin >> x;
		if(x == -1) break;
		else{
			if(binarySearch(x)) cout << 1 << endl;
			else cout << 0 << endl;
		}
	}
}