#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		double s, v;
		cin >> s >> v;

		double dist = (2 * s) / 3;

		double ans = dist / v;

		cout << fixed << setprecision(7) << ans << "\n";
	}
	return 0;
}