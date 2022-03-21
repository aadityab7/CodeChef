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
		long n;
		cin >> n;

		string s;
		cin >> s;

		long os = 0, zs = 0;
		for(long i = 0; i < n; i++){
			if(s[i] == '1'){
				os++;
			}
			else{
			    zs++;
			}
		}

		string ans = "NO";
		
		if(os == n || zs == n){
			ans = "YES";
		}
		else if(n % 2 == 0){
			if(zs == os || (zs % 2 == 0 && os % 2 == 0)){
			    ans = "YES";
			}
		}
		else{
		    if(zs % 2 != os % 2){
		        ans = "YES";
		    }
		}
		
		cout << ans << endl;
	}
	return 0;
}