#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, k;
		cin >> n >> k;
        
        if(k > 0)
		    cout << n % k << endl;
		else
		    cout << n << endl;
	}
	return 0;
}