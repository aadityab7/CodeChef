#include<iostream>
#include <string>
// #include <vector>
#include<cmath>
//max val of long 9223372036854775807
//max val of int 147483647
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;

		string s;
		cin >> s;

		int ans[n];
		for(long i = 0; i < n; i++){
			int flag = 0;
			for(long j = 0; j < i + 1; j = j + 2){
				if(s[j] == '1'){
					if(flag == 0){
						flag = 1;
					}
					else{
						flag = 0;
					}
				}
			}

			if(flag == 0){
				ans[i] = 1;
			}
			else{
				ans[i] = 0;
			}
		}

		long answer = 0;
		for(long i = 0; i < n; i++){
		    if(ans[i] == 1)
			answer += pow(2, n - i - 1);
		}

		cout << answer <<  endl;
	}
	return 0;
}
