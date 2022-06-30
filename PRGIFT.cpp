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

		int k;
		cin >> k;

		int num;
		int evens = 0;
		
		for(int i = 0; i < n; i++){
			cin >> num;
			if(num % 2 == 0){
				evens++;
			}
		}

		if(k == 0 && evens == n){
			cout << "NO" << endl;
		}
		else if(evens >= k){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}