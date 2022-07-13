#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;

		long long arr[n];
		for(long i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr + n);

		long i = 0, j;
		long curr, curr_count; 
		long lone_students = 0;
		long long the_lone_student = 0;
		long max = 0;

		while(i < n){
			curr = arr[i];
			j = i + 1;
			curr_count = 0;

			while(j < n && arr[j] == curr){
				curr_count++;
				j++;
				if(curr_count > max){
					max = curr_count;
				}
			}

			if(!curr_count){
				lone_students++;
			}

			if(the_lone_student == 0 && lone_students > 0){
				the_lone_student = curr;
			}

			i = j;
		}

        //cout << the_lone_student << endl;

		long ans = ceil(lone_students / 2.0);

		if(lone_students == 1){
			if(the_lone_student == arr[n - 1]){
			    //cout << "HELLO";
				if(max == 1){
					ans = 2;
				}
			}
		}

		cout << ans << "\n";
	}
	return 0;
}