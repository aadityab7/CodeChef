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
		string s;
		cin >> s;

		long long ans = 1;
		long long numb = 7000000000;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == 'l'){
				if(ans % 2 == 0){
					ans = ((ans * 2) - 1) % numb;
				}
				else{
					ans = (ans * 2) % numb;
				}
			}
			else{
				if(ans % 2 == 0){
					ans = ((ans * 2) + 1) % numb;
				}
				else{
					ans = ((ans * 2) + 2) % numb;
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}