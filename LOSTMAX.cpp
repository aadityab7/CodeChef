// Python Code :
t = int(input())
while(t > 0):
    mx = 0
    f = 1
    nums = input().split()
    for i in nums:
        numb = int(i)
        if(numb == len(nums) - 1 and f == 1):
            f = 0
        elif(numb > mx):
            mx = int(i)
            
    print(mx)
    t = t - 1

// #include<iostream>
// #include <bits/stdc++.h>
// // #include <vector>
// // #define LONG_MAX 9223372036854775807;
// // #define INT_MAX 147483647;
// using namespace std;

// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n;
// 		cin >> n;

// 		int f = 1;
// 		long mx = 0;

// 		long num;
// 		while(n--){
// 			cin >> num;
// 			if(num > mx){
// 				if(f && num = n - 1){
// 					f = 0;
// 				}
// 				else{
// 					mx = num;
// 				}
// 			}
// 		}

// 		cout << mx << endl;
// 	}
// 	return 0;
// }