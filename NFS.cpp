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
		int u, v, a, s;
		cin >> u >> v >> a >> s;

		int f = 1;
        long num = (u * u) - (2 * a * s);
        long req = v * v;
		if(num > req){
			f = 0;
		}

		if(f){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}