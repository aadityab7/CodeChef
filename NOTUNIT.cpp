#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	long t;
	cin >> t;
	while(t--){
		long long a, b;
		cin >> a >> b;
		long long diff = b - a;

		if(diff == 1){
			cout << -1 << endl;
		}
		else if(a % 2 != 0 && diff < 3){
			cout << -1 << endl;
		}
		else{
			if(a % 3 == 0 && a % 2 != 0){
				cout << a << ' ' << a + 3 << endl;
			}
			else if(a % 2 == 0){
				cout << a << ' ' << a + 2 << endl;
			}
			else{
				cout << a + 1 << ' ' << a + 3 << endl;
			}
		}

	}
	return 0;
}