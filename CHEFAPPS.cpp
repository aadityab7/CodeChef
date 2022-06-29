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
		int s, x, y, z;
		cin >> s >> x >> y >> z;

		int rem = s - (x + y);

		if(rem >= z){
			cout << 0 << endl;
		}
		else if((rem + x) >= z || (rem + y) >= z){
			cout << 1 << endl;
		}
		else{
			cout << 2 << endl;
		}
	}
	return 0;
}