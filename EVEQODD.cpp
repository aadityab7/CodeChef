#include<iostream>
#include <bits/stdc++.h>
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

		long arr[2 * n];

		long evens = 0, odds = 0;
		std::vector<long> ev;
      
		for(int i = 0; i < 2 * n; i++){
			cin >> arr[i];
			if(arr[i] % 2 == 0){
				evens++;
				ev.push_back(arr[i]);
			}
			else{
				odds++;
			}
		}

		long ans = 0;

		if(odds > evens){
			ans = (odds - evens) / 2;
		}
		else if(evens > odds){
			long diff = (evens - odds) / 2;
			sort(ev.begin(), ev.end());
			for(int i = 0; i < diff; i++){
				while(arr[i] % 2 == 0){
					arr[i] /= 2;
					ans++;
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}