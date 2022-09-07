#include <bits/stdc++.h>
 
using namespace std;
 
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl '\n'
 
int main (){
    faster();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v;
		for(int i = 0; i < n; i++) {
			int gan; cin >> gan; v.push_back(gan);
		}
		int max = -1e9, kq = 0;
		for(int i = 0; i < v.size(); i++){
			kq += v[i];
			if(kq > max) max = kq;
			if(kq < 0) kq = 0;
		}
		cout << max << endl;
	}
}