#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		string s;
		cin >> s;

		string ans = "YES";

		int curr = 0;

		for(int i = 0; i < n; i++){
		    
		    char c = s[i];
		    
			if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
				curr = 0;
			}
			else{
				curr++;	
			}

			if(curr >= 4){
				ans = "NO";
				break;
			}
		}

		cout << ans << "\n";
	}
	return 0;
}