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
		int n;
		cin >> n;
		string ori;
		cin >> ori;

		int laddu = 0;
		string act;
		for(int i = 0; i < n; i++){
			cin >> act;

			if(act == "CONTEST_WON"){
				int r;
				cin >> r;

				laddu += 300;
				if(r < 20){
					laddu += 20 - r;
				}
			}
			else if(act == "TOP_CONTRIBUTOR"){
				laddu += 300;
			}
			else if(act == "BUG_FOUND"){
				int se;
				cin >> se;

				laddu += se;
			}
			else{
				laddu += 50;
			}
		}
    
		int ans;
		if (ori == "INDIAN"){
			ans = laddu / 200;
		}
		else{
			ans = laddu / 400;
		}

		cout << ans << endl;
	}
	return 0;
}
