﻿#include <iostream>
#include <iomanip>
using namespace std;



//Задание 1.
//int
void inicialization(int arr[][4], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}
void showArr(int arr[][4], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void minmaxElem(int arr[][4], int row, int col) {
	int min = arr[0][0];
	int max = arr[0][0];
	int t = 0;
	for (int i = 0, j = 0; i < row, j < col; i++, j++) {
		if (arr[i][j] < min)
			min = arr[i][j];
		if (arr[i][j] > max)
			max = arr[i][j];
	}
	cout << "Мин.эл. главной диагонали: " << min << endl;
	cout << "Макс.эл. главной диагонали: " << max << endl;
}
void sortrowElem(int arr[][4], int row, int col) {
	cout << "Сортировка элементов по возрастанию отдельно для каждой строки матрицы.\n";
	int temp = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col - 1; j++) {
			for (int k = 1; k < row - j; k++) {
				if (arr[i][k] < arr[i][k - 1]) {
					temp = arr[i][k - 1];
					arr[i][k - 1] = arr[i][k];
					arr[i][k] = temp;
				}
			}
		}
	}
}
//double
void inicialization(double arr[][4], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = (double)rand() / 2000;
		}
	}
}
void showArr(double arr[][4], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << setw(9) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void minmaxElem(double arr[][4], int row, int col) {
	double min = arr[0][0];
	double max = arr[0][0];
	for (int i = 0, j = 0; i < row, j < col; i++, j++) {
		if (arr[i][j] < min)
			min = arr[i][j];
		if (arr[i][j] > max)
			max = arr[i][j];
	}
	cout << "Мин.эл. главной диагонали: " << min << endl;
	cout << "Макс.эл. главной диагонали: " << max << endl;
}
void sortrowElem(double arr[][4], int row, int col) {

}
//char



//Задание 2. 
int func(int a, int b) {
	if (b == 0)
		return a;
	else
		return func(b, a % b);
}

//Задание 3.



int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	//Задание 1.
	//Написать перегруженные функции(int, double,
	//char) для выполнения следующих задач :
	//■ Инициализация квадратной матрицы;
	//■ Вывод матрицы на экран;
	//■ Определение максимального и минимального элемента
	//  на главной диагонали матрицы;
	//■ Сортировка элементов по возрастанию отдельно для
	//  каждой строки матрицы.

	cout << "Home task #12.2.1\n\n";
	const int row = 4;
	const int col = 4;

	int arr[row][col]{};
	double arr2[row][col]{};
	char arr3[row][col]{};

	//int
	/*inicialization(arr, row, col);
	showArr(arr, row, col);
	minmaxElem(arr, row, col);
	sortrowElem(arr, row, col);
	showArr(arr, row, col);*/

	//double
	inicialization(arr2, row, col);
	showArr(arr2, row, col);
	minmaxElem(arr2, row, col);
	/*sortrowElem(arr2, row, col);
	showArr(arr2, row, col);*/

	//char

	system("pause");
	system("cls");

	//Задание 2. 
	//Написать рекурсивную функцию нахождения
	//наибольшего общего делителя двух целых чисел.

	/*cout << "Home task #12.2.2\n\n";
	cout << func(3, 33)<<endl;
	system("pause");
	system("cls");*/

	//Задание 3. 
	//Написать игру «Быки и коровы».Программа
	//«загадывает» четырёхзначное число и играющий должен
	//угадать его.После ввода пользователем числа программа
	//сообщает, сколько цифр числа угадано(быки) и сколько
	//цифр угадано и стоит на нужном месте(коровы).После
	//отгадывания числа на экран необходимо вывести количество сделанных пользователем попыток.В программе
	//необходимо использовать рекурсию.

	/*cout << "Home task #12.2.3\n\n";

	system("pause");
	system("cls");*/
}