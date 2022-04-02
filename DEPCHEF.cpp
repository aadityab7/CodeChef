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

		int mx = -1;
		int curr;
		for(int i = 0; i < n; i++){
			curr = d[i];
			if(i == 0){
				curr -= a[n - 1];
			}
			else{
				curr -= a[i - 1];
			}

			if(i == n - 1){
				curr -= a[0];
			}
			else{
				curr -= a[i + 1];
			}

			if(curr > 0){
				if(d[i] > mx){
					mx = d[i];
				}
			}
		}

		cout << mx << endl;
	}
	return 0;
}