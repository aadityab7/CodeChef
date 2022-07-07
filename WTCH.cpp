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

		int ans = 0;
		int curr = 0;

		for(int i = 0; i < n; i++){
			if(s[i] == '0'){
				curr++;
			}
			else{
				curr--;

				if(curr > 0){
					ans += ceil(curr / 2.0);
					//cout << ceil(curr / 2.0) << endl;
				}
			
				curr = -1;
			}
			
			//cout << curr << ' ';
		}

		if(curr > 0){
			ans += ceil(curr / 2.0);
		}

		cout << ans << "\n";
	}
	return 0;
}