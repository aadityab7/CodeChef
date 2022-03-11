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
		int n , d;
		cin >> n >> d;

		int risked = 0, unrisked = 0;
		int num;

		for(int i = 0; i < n; i++){
			cin >> num;
			if(num >= 80 || num <= 9){
				risked++;
			}
			else{
				unrisked++;
			}
		}

		int days = 0;
		if(risked % d == 0){
			days = risked / d;
		}
		else{
			days = (risked / d) + 1;
		}

		if(unrisked % d == 0){
			days += unrisked / d;
		}
		else{
			days += (unrisked / d) + 1;
		}

		cout << days << endl;
	}
	return 0;
}
