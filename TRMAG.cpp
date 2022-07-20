#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long f;
        cin >> f;
        
		long missing[f];

		long long sum_of_missing_values = 0;

		for(long i = 0; i < f; i++){
			cin >> missing[i];
			sum_of_missing_values += missing[i];
		}

		long torn_pages;
		cin >> torn_pages;

		double probab = (1.0 - ((double) (2.0 * torn_pages) / (double) n));

		long long total_sum_of_pages = n * (n + 1) / 2;

		total_sum_of_pages -= sum_of_missing_values;

		double ans = total_sum_of_pages * probab; 

		cout << fixed << setprecision(4) << ans << "\n";
	}
	return 0;
}