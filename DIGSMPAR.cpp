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
		long long n;
		cin >> n;
		long long ans = n + 1;
		
		long count = 0;

		if(ans % 10 == 0){
			string s = to_string(n);
			for(int i = s.size() - 1; i >= 0; i--){
				if(s[i] != '9'){
					break;
				}else{
				    count ++;
				}
			}
			
			if(count % 2 != 0){
			    ans++;
			}
		}

		cout << ans << endl;
	}
	return 0;
}