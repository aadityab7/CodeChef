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
        
        char c;
		for(int i = 0; i < n; i++){
			c = (i % 26) + 97;
			cout << c;
		}
		cout << endl;
	}
	return 0;
}