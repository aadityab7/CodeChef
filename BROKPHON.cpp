#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;

		long number;
		long ans = 0;
		long prev;
		cin >> prev;
		long last = -1;

		for(long i = 1; i < n; i++){
			cin >> number;
			
			if(number != prev){
				if(last == i - 1){
					ans ++;
				}
				else{
					ans += 2;	
				}

				last = i;
			}

			
			prev = number;
		}

		cout << ans << endl;

	}
	return 0;
}
