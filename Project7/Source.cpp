#include <iostream>

using namespace std;
//Визначає та показує допустимі числа
void showArray(float arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << '\t';
	}
	cout << endl;
}
// Визначаємо "MAX" та виводимо його на єкран
void firstTask(float arr[], int SIZE) {
	float maximum = arr[0];
	for (int i = 0; i < SIZE; i++) {
		if (maximum < arr[i]) {
			maximum = arr[i];
		}
	}

	cout << "Maximum element of the array is equal to " << maximum << endl;
}
//Визначаємо "MIN" позитивне число
void secondTask(float arr[], int SIZE) {
	int lastPositive = 0;
	float sum = 0;
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] >= 0) {
			lastPositive = i;
		}
	}

	for (int i = 0; i < lastPositive; i++) {
		sum = sum + arr[i];
	}

	cout << "Sum of the elements that takes place until the last positive element is equal to " << sum << endl;
}
//Вводимо змінні a,b, з клавіатури з урахуванням "MIN" "MAX"
void thirdTask(float arr[], int SIZE) {
	float a, b;

	cout << "Enter the a: ";
	cin >> a;
	cout << "Enter the b: ";
	cin >> b;

	int n = 0;
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] > a && arr[i] < b) {
			arr[n++] = arr[i];
		}
	}

	while (n < SIZE) {
		arr[n++] = 0;
	}
}
//Основна функція поєднує всі інші функції ( не знаю навіть що сказати )
int main() {
	const int SIZE = 5;
	float arr[SIZE]{ 5.25,-6,1.1,11,-3 };

	showArray(arr, SIZE);

	firstTask(arr, SIZE);
	secondTask(arr, SIZE);
	thirdTask(arr, SIZE);

	showArray(arr, SIZE);

	return 0;
}