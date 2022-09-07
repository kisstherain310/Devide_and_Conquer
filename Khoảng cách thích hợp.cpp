#include <bits/stdc++.h>
 
using namespace std;
 
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl '\n'
 
int n, k;
vector<int> v;
 
bool check(int mid){
	int idx = 0, cnt = 1;
	for(int i = 0; i < n; i++){
		if(v[i] - v[idx] >= mid) {
			cnt++;
			idx = i;
		}
	}
	return cnt >= k;
}
 
int main(){
    faster();
	int t; cin >> t; 
	while(t--){
		v.clear();
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			int gan; cin >> gan;
			v.push_back(gan);
		}
		sort(v.begin(), v.end());
		int l = 1, r = 1e9, mid, ans;
		while(l <= r){
			mid = l + (r - l) / 2;
			if(check(mid)) {
				l = mid + 1;
                ans = mid;
			}
			else r = mid - 1;
		}
		cout << ans << endl;
	}
}