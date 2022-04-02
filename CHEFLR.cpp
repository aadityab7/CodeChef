#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	long long t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;

		long long ans = 1;
		long long numb = pow(10,9) + 7;
		long long level = 1;
		for(long i = 0; i < s.size(); i++){
			if(s[i] == 'l'){
				if(level % 2 == 0){
					ans = ((ans * 2) - 1);
				}
				else{
					ans = (ans * 2);
				}
			}
			if(s[i] == 'r'){
				if(level % 2 == 0){
					ans = ((ans * 2) + 1);
				}
				else{
					ans = ((ans * 2) + 2);
				}
			}
			level++;
			ans = ans % numb;
		}

		cout << ans << endl;
	}
	return 0;
}