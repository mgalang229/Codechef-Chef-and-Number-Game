#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	//find the number of positive and negative values
	int pos=0, neg=0;
	for(int i=0; i<n; ++i) {
		int a;
		cin >> a;
		if(a>0)
			pos++;
		else
			neg++;
	}
	//check if one of them is zero and if it's true then print out the 'n' itself
	// if not then print choose the maximum and minimum between them
	if((pos>0&&neg==0)||(pos==0&&neg>0))
		cout << n << " " << n;
	else
		cout << max(pos, neg) << " " << min(pos, neg);
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
