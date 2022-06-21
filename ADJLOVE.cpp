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

		long odds[n] = {}, evens[n] = {};
		int ev = 0, od = 0;
		int j = 0, k = 0;
        long num;
        
		for(int i = 0; i < n; i++){
			cin >> num;
			
			if(num % 2 == 0){
				evens[j] = num;
				ev++;
				j++;
			}
			else{
				odds[k] = num;
				od++;
				k++;
			}
		}

		int l = 0, m = 0;
		int ans = 1;

		if(od < 2){
			ans = -1;
		}
		else if(od % 2 != 0){
			if(ev > 0){
				cout << odds[l] << ' ';
				l++; 
			}
			else{
				ans = -1;
			}
		}

		if(ans != -1){
			while(m < j){
				cout << evens[m] << ' ';
				m++;
			}

			while(l < k){
				cout << odds[l] << ' ';
				l++;
			}
		}
		else{
			cout << ans;
		}

		cout << endl;
	}
	return 0;
}