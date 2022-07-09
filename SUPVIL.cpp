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

		int heros = 1, villans = 1;
		string s;

		string ans = "draw";
		int done = 0;
        int s_size;
        
		for(int i = 0; i < n; i++){
			cin >> s;
            s_size = s.size();
			if(s_size > 2 && s.substr(s_size - 3, s_size) == "man"){
				heros++;
			}
			else{
				villans++;
			}

			if(!done && heros > villans + 1){
				ans = "superheroes";
				done = 1;
			}
			else if(!done && villans > heros + 2){
				ans = "villains";
				done = 1;
			}
		}

		cout << ans << "\n";
	}
	return 0;
}