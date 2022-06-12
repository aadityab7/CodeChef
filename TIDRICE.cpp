#include<iostream>
#include <bits/stdc++.h>
#include<map>
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

		map <string, int> mp;

		string str;
		int number;
		char sig;

		for(int i = 0; i < n; i++){
			cin >> str;
			cin >> sig;
        
            if(sig == '+'){
			    number = 1;
            }
            else{
                number = -1;
            }

			mp[str] = number;
		}

		int ans = 0;

		for(auto iter = mp.begin(); iter != mp.end(); iter++){
			ans += (*iter).second;
		}

		cout << ans << endl;
	}
	return 0;
}