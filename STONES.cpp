#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
#include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string jw , st;
		cin >> jw >> st;

		std::vector<int> j1, j2, s1, s2;
		j1.assign(26,0);
		j2.assign(26,0);
		s1.assign(26,0);
		s2.assign(26,0);

		int ans = 0;

		for(int i = 0; i < jw.size(); i++){
			char c = jw[i];

			if(c >= 97){
				j1[c - 97]++;
			}
			else{
				j2[c - 65]++;
			}
		}

		for(int i = 0; i < st.size(); i++){
			char c = st[i];

			if(c >= 97){
				s1[c - 97]++;
			}
			else{
				s2[c - 65]++;
			}
		}

		for(int i = 0; i < 26; i++){
			if(j1[i] != 0 && s1[i] != 0){
				ans += s1[i];
			}

			if(j2[i] != 0 && s2[i] != 0){
				ans += s2[i];
			}
		}

		cout << ans << endl;
	}
	return 0;
}
