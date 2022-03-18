#include<iostream>
#include <bits/stdc++.h>;
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

		for(int i = 0; i < n - 1; i += 2){
			cout << i + 2 << " ";
			if(i == n - 3) cout << i + 3 << ' ';
			cout << i + 1 << ' ';
		}

		cout << endl;
	}
	return 0;
}