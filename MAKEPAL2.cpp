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

		int l, r;

		r = n / 2;
		l = n / 2;

		if(n % 2 == 0){
			l--; 
		}

		//start from the center and if the left and right don't match 
		//delete once from left and then from right

		int deleting_from_left = 0;

		string right_part = "", left_part = "";

		while(l >= 0 && r < n){
			if(s[l] != s[r]){
				if(deleting_from_left){
					l--;
				}
				else{
					r++;
				}
			}
			else{
				right_part += s[r];
				if(l != r){
					left_part += s[l];
				}

				l--;
				r++;
			}


		}


		string ans = "";

		int size = left_part.size()
		for(int i = 0; i < size; i++){
			ans += left_part[size - 1 - i];
		}

		ans += right_part;

		cout << ans << "\n";

	}
	return 0;
}