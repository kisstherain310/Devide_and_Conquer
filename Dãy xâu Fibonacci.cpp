#include <bits/stdc++.h>
 
using namespace std;
 
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl '\n'
 
ll v[95] = {};
ll n, k;
 
void sieve(){
	v[0] = 0;
	v[1] = 1; v[2] = 1;
	for(int i = 3; i < 93; i++){
		v[i] = v[i - 1] + v[i - 2];
	}
}
char Found(ll n, ll k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k > v[n - 2]) return Found(n - 1, k - v[n - 2]);
	else return Found(n - 2, k);
}
 
int main (){
    faster();
	sieve();
	int t; cin >> t; while(t--){
		cin >> n >> k;
		cout << Found(n, k) << endl;
	}
}