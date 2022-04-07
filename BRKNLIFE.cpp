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
		int n, m;
		cin >> n >>	m;

		string s, a;

		cin >> s;
		cin >> a;

		int i = 0, j = 0;

		while(i < n && j < m){
			if(s[i] == a[j]){
				i++;
				j++;
			}
			else if(s[i] == '?'){
				s[i] = (((a[j] - 97) + 1) % 5) + 97;
				i++;
			}
			else{
			    i++;
			}
		}

		if(j == m){
			cout << -1 << endl;
		}
		else {
			cout << s << endl;
		}
	}
	return 0;
}