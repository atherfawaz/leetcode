#include <iostream>
#include <string>
#include <ctime>
#include <vector>
using namespace std;

int SingleNumber(vector<int> arr) {
	int sum, twicesum;
	sum = twicesum = 0;
	for (int i = 0; i < arr.size(); i++) {
		sum += arr[i];
		twicesum += arr[i] * 2;
	}
	return twicesum % sum;
}

int main() {
	vector<int> arr = { 2, 2, 1 };
	cout << SingleNumber(arr);
}