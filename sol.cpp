#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int ans=0;
	for(int i=0; i<n; ++i) {
		int arr[1000], cnt=0;
		if(a[i]<10) {
			ans++;
			continue;
		}
		while(a[i]) {
			arr[cnt++]=a[i]%10;
			a[i]/=10;
		}
		int tmp=0;
		for(int j=cnt-1; j>=0; --j)
			if(arr[j]==4||arr[j]==7)
				tmp++;
		if(tmp<=k)
			ans++;
	}
	cout << ans << "\n";
}
