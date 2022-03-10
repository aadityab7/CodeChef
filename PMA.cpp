#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		long sum = 0;
		long num;
		long mn = 9223372036854775807;
		long mx = -1;

		for(int i = 0; i < n; i++){
			cin >> num;
			if(num < 0) num = -num;
            
            
			if(i % 2 == 0){
				sum += num;

				if(num < mn){
					mn = num;
				}
			}
			else{
				sum -= num;

				if(num > mx){
					mx = num;
				}
			}
		}
		
	

		long temp = sum + mx - mn + (mx - mn);
		
	

		if(temp > sum) sum = temp;

		cout << sum << endl;
	}
	return 0;
}
