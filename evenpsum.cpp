#include<iostream>
using namespace std;

/***
int main(){
	int t;
	cin >> t;
	while(t--){
		int a ,b;
		cin >> a >> b;
		int count = 0;

		for(int x = 1; x <= a; x++){
			for(int y = 1; y <= b; y++){
				if(x + y % 2 == 0){
					count ++;
				}
			}
		}

		cout << count << endl;
	}
	return 0;
}
***/

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a ,b;
		cin >> a >> b;
		long long  count;

		int odd1, even1, odd2, even2;
		even1 = a / 2;
		even2 = b / 2;
		if(a % 2 == 0) odd1 = a / 2;
		else odd1 = (a / 2) + 1;
		if(b % 2 == 0) odd2 = b / 2;
		else odd2 = (b / 2) + 1;



		count = (even1 * even2) + (odd1 * odd2); 

		cout << count << endl;
	}
	return 0;
}


