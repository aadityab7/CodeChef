#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		long arr[n];
		long ans = -1;
		long long int total = 0;

		for(int i = 0; i < n;i++){
			cin >> arr[i];
			total += arr[i];
		}

		double long mean = (double long)total / (double long)n;
	

		for(int i = 0; i < n; i++){
			double long nmean = (double long) (total - arr[i]) / (double long) (n - 1);
			if(mean == nmean){
				ans = i + 1;
				break;
			}
		}

		if(ans == -1){
			cout << "Impossible" << endl;
		}
		else{
			cout << ans << endl;
		}
	}
	return 0;
}
