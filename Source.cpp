#include <iostream>
#include <ctime>
using namespace std;

int quarter(double x, double y) {
	if (x > 0 && y > 0) return 1;
	if (x < 0 && y>0) return 2;
	if(x < 0 && y<0) return 3;
	if(x > 0 && y<0) return 4;

}
bool even(int k) {
	return k % 2 == 0;
}
bool IsSquare(int k) {
	int i = 1;
	while (i*i<k)
	{
		i++;
	}
	return i * i == k;
}
bool IsPower5(int k) {
	int i = 1;
	while (i < k) {
		i *= 5;
	}
	return i == k;
}
int main() {
	srand(time(nullptr));
	//Proc23.Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти,
	//в которой находится точка с ненулевыми вещественными координатами(x, y).
	//С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами
	/*for (int i = 0; i < 3; i++)
	{
		double x = (rand() % 32001-16000) /1000.0;
		double y = (rand() % 32001-16000)/1000.0;
		cout << x << " "<< y << endl;
		cout << quarter(x, y) << endl;
	}*/
	//Proc24.Описать функцию Even(K) логического типа, возвращающую TRUE, если целый параметр K является четным, и FALSE в противном случае.
	//С ее помощью найти количество четных чисел в наборе из 10 целых чисел.
	/*for (int i = 0; i <= 10; i++)
	{
		int x = rand();
		cout << x << " " << boolalpha << even(x) << endl;
	}*/
	/*Proc25◦.Описать функцию IsSquare(K) логического типа, возвращающую TRUE, 
	если целый параметр K(> 0) является квадратом некоторого целого числа, и FALSE в противном случае.
	С ее помощью найти количество квадратов в наборе из 10 целых положительных чисел.*/
	/*int k = 0, x;
	for (int i = 0; i < 10; i++)
	{
		x = rand()%20;
		if (IsSquare(x)) {
			k++;
		}
		cout << x << " ";

	}
	cout << endl;
	cout << k << endl;*/
	/*Proc26.Описать функцию IsPower5(K) логического типа, возвращающую TRUE,
	если целый параметр K(> 0) является степенью числа 5, и FALSE в противном случае.
	С ее помощью найти количество степеней числа 5 в наборе из 10 целых положительных чисел.*/
	int k = 0, x;
	for (int i = 0; i < 10; i++)
	{
		x = rand()%5+1;
		if (IsPower5(x)) {
			k++;
		}
		cout << x << " ";

	}
	cout << endl;
	cout << k << endl;
}
