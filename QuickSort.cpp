#include <iostream>
#define capacity 100
using namespace std;
void arrayInit(int& n, int arr[]) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void showArray(int& n, int arr[]) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void quickSort(int arr[], int left, int right) {
	int i = left;
	int j = right;
	int pivot = arr[j];
	while (i <= j) {
		while (arr[i] < pivot) i++;
		while (arr[j] > pivot) j--;
		if (i <= j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}
	if (left < j) quickSort(arr, left, j);
	if (i < right) quickSort(arr, i, right);

}



int main() {
	int n, arr[capacity];
	arrayInit(n, arr);
	quickSort(arr, 0, n - 1);
	showArray(n, arr);
	return 0;
}

