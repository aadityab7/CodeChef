#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;

		string ans = "";

		if(a[0] == '1'){
			ans.append("10");
			ans.append(a.substr(1, a.size() - 1));
		}
		else{
			ans += '1';
			ans.append(a);
		}

		cout << ans << endl;
	}
	return 0;
}