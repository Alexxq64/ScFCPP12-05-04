#include <iostream>
using namespace std;


bool subArraySum(int arr[], int n, int sum)
{
	for (int i = 0; i < n; i++) {
		int s = 0;
		for (int j = i; j < n; j++) {
			s += arr[j];
			if (s == sum) {
				cout << i << " " << j << endl;
				return true;
			}
			else if (s > sum) break;
		}
	}
	cout << -1 << endl;
	return false;
}

int main() {
	int arr1[]{ 1, 4, 20, 3, 10, 5 };
	int arr2[]{ 1, 5, 3, 6, 5, 9 };
	subArraySum(arr1, sizeof(arr1) / sizeof(int), 33);
	subArraySum(arr2, sizeof(arr2) / sizeof(int), 6);
}

