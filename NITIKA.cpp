#include<iostream>
// #include <bits/stdc++.h>;
#include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		getline(cin , s);
		while(s.size() == 0){
			getline(cin , s);
		}

		string ans = "";
		

		int start = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == ' '){
				char f = s[start];
				if(f >= 'a' && f <= 'z'){
					f = f - 97 + 65; 
				}

				ans += f;
				ans.append(". ");
				start = i + 1;
			}
		}

		char f = s[start];
		if(f >= 'a' && f <= 'z'){
			f = f - 97 + 65; 
		}

		ans += f;

		for(int i = start + 1; i < s.size(); i++){
			char c = s[i];
			ans += tolower(c);
		}

		cout << ans << endl;
	}
	return 0;
}