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
		string s;
		cin >> s;

		long long n = s.size();

		string ans = "Yes";

		//rev_remove all the zeros from the end
		//if rev_remaining ans is power of 2 then yes else no

		string rev_rem = "";
		long long no_of_zeros_removed = 0;

		bool remaining = false;

		for(long i = n - 1; i >= 0; i--){
			if(s[i] > '0'){
				remaining = true;
			}

			if(remaining){
				rev_rem += s[i];
			}	
			else{
				no_of_zeros_removed++;
			}
		}

		string rem = "";
		
		long m = rev_rem.size();

		for(long i = 0; i < m; i++){
			rem += rev_rem[m - 1 - i];
		}

		long long num = stol(rem);
    
        //cout << num << "\n"; 
        long no_of_muls_of_2 = 0;

		while(num != 1){
			if(num % 2 != 0){
				ans = "No";
				break;
			}
			
			num /= 2; 
			no_of_muls_of_2++;
		}
        //cout << no_of_muls_of_2 << ' ' << no_of_zeros_removed << "\n";
		if(no_of_muls_of_2 > no_of_zeros_removed){
			ans = "No";
		}

		cout << ans << "\n";

	}
	return 0;
}