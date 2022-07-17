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
		int x, y, z;
		cin >> x >> y >> z;

		int naps_needed = ceil(x / 3.0);
		naps_needed--;

		long total_time = naps_needed * z;

		total_time += x * y;


		cout << total_time << "\n";

	}
	return 0;
}