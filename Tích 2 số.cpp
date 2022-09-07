#include <bits/stdc++.h>
 
using namespace std;
 
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl '\n'
 
ll mod = 1e9 + 7;
 
ll Mul(ll a, ll b){
	if(b == 0) return 0;
	ll res = Mul(a, b / 2);
	if(b % 2 == 1) return ((res + res) % mod + a % mod) % mod;
	else return (res + res) % mod;
}
 
int main (){
    faster();
	int t; cin >> t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		cout << Mul(a, b) << endl;
	}
}