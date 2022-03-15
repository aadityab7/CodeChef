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
		long n, a, b;
		cin >> n >> a >> b;

		long pa = 0, pb = 0;
		string s;

		for(int i = 0; i < n; i++){
			cin >> s;

			//EQUINOX
			char c = s[0];

			if(c == 'E' || c == 'Q' || c == 'U' || c == 'I' || c == 'N' || c == 'O' || c == 'X'){
				pa += a;
			}
			else{
				pb += b;
			}
		}

		if(pa > pb){
			cout << "SARTHAK" << endl;
		}
		else if(pb > pa){
			cout << "ANURADHA" << endl;
		}	
		else{
			cout << "DRAW" <<  endl;
		}
	}
	return 0;
}