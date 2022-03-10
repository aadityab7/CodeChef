#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, k, v;
		cin >> n >> k >> v;

		long arr[n];
		long sum = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			sum += arr[i];
		}

		long total = v * (n + k);
		long num = total - sum;

		if(num <= 0 || (num % k) != 0){
			cout << "-1" << endl;
		}
		else{
			long x = (total - sum) / k;
			cout << x << endl;
		}
		
	}
	return 0;
}
