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

		int a[n];
		int d[n];

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		for(int i = 0; i < n; i++){
			cin >> d[i];
		}

		int mx = 0;

		for(int i = 0; i < n; i++){
			if(d[i] > mx){
				mx = d[i];
			}
		}

		int fin = 0;

		int ans[mx] = {};

		for(int i = 0; i < mx; i++){
			for(int j = 0; j < n; j++){
    			if(a[j] <= i && i < d[j]){
    				ans[i]++;
    			}
			}
		}

		for(int i = 0; i < mx; i++){
			if(ans[i] > fin){
				fin = ans[i];
			}
		}

		cout << fin << endl;
	}
	return 0;
}