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
		string a, b;
		cin >> a >> b;

		int n = a.size();
		string c = "";
		for(int i = 0; i < n; i++){
			if(a[i] == 'W' && b[i] == 'W'){
				c += 'B';
			}
			else if(a[i] == 'B' && b[i] == 'B'){
				c += 'W';
			}
			else{
				c += 'B';
			}
		}

		cout << c << endl;
	}
	return 0;
}