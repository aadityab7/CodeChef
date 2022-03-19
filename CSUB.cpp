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
		long n;
		cin >> n;

		string s;
		cin >> s;

		long count = 0;
		for(long i = 0; i < n; i++){
			if(s[i] == '1'){
			     count++;   
			}
		}

        long long ans;
		ans = count * (count + 1);
		ans = ans / 2;
		cout << ans << endl;
       
	}
	return 0;
}