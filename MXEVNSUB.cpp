#include<iostream>
//#include <string>
//#include <vector>
//max val of long 9223372036854775807
//max val of int 147483647
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
        int ans;
		if(n % 2 != 0){
			if((n / 2) % 2 != 0){
				ans = n;
			}
			else{
				ans = n - 1;
			}
		}
		else{
			if((n / 2) % 2 == 0){
				ans = n;
			}
			else{
				ans = n - 1;
			}
		}

		cout << ans << endl;
	}
	return 0;
}
