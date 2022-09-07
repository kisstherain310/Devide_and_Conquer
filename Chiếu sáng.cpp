#include <bits/stdc++.h>
 
using namespace std;
 
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl '\n'
 
int n, m;
int vn[10005] = {}, vm[55] = {};
 
bool check(int mid){
    //cout << mid << endl;
	int idx = 0;
	int i = 0;
	for(i = 0; i < n;){
        //cout << idx << " "<< vn[i] << " " << vm[idx] - mid << " " << vm[idx] + mid << endl;
		if(idx == m) break;
		if(vn[i] >= (vm[idx] - mid) and vn[i] <= (vm[idx] + mid)) i++;
		else idx++;
	}
    //cout << i << endl;
	return i == n;
}
 
int main(){
    faster();
	int t; cin >> t; 
	while(t--){
        cin >> n >> m;
		for(int i = 0; i < n; i++) cin >> vn[i];
		for(int i = 0; i < m; i++) cin >> vm[i];
		sort(vn, vn + n);
		sort(vm, vm + m);
		int l = 0, r = 1e9, mid, ans = 1e9;
		while(l <= r){
			mid = l + (r - l) / 2;
			if(check(mid)){
				if(mid < ans) ans = mid;
				r = mid - 1;
			}
			else l = mid + 1;
            //cout << ans << endl;
		}
		cout << ans << endl;
	}
}