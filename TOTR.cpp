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

	string s;
	cin >> s;
    
    vector <int> arr;
    arr.assign(26, 0);
	for(int i = 0; i < 26; i++){
		arr[i] = s[i] - 97;
	}

	string c;
	while(t--){
		string ans = "";
		cin >> c;
		for(int i = 0; i < c.size(); i++){
			char ch = c[i];
			if(ch >= 'a' && ch <= 'z'){
				ans += arr[ch - 97] + 97;
			}
			else if(ch >= 'A' && ch <= 'Z'){
				ans += arr[ch - 65] + 65;
			}
			else if(ch == '_'){
				ans += ' ';
			}
			else{
				ans += ch; 
			}
		}

		cout << ans << endl;
	}

	return 0;
}
