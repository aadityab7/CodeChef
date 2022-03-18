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
		int a, b, n;
		cin >> a >> b >> n;

		if(n % 2 == 0 || (a > 0 && b > 0)){
			if(abs(a) > abs(b)) cout << 1;
			else if(abs(a) < abs(b)) cout << 2;
			else cout << 0;
		}
		else{
			if(a > b) cout << 1;
			else if(b > a) cout << 2;
			else cout << 0;
		}

		cout << endl;
	}
	return 0;
}