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
		int n, k, l;
		cin >> n >> k >> l;

		float num = (float)n / (float)k;

		if(num > l || (n > 1 && k == 1)){
			cout << -1 << endl;
		}
		else{
		    int j = 1;
			for(int i = 1; i <= n; i++){
				cout << j << ' ';
				if(j == k){
				    j = 0;
				}
				j++;
			}
			cout << endl;
		}
	}
	return 0;
}