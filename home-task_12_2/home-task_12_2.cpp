#include <iostream>
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
	cout << "Сортировка элементов по возрастанию отдельно для каждой строки матрицы.\n";
	double temp = 0;
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
//char
void inicialization(char arr[][4], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = 97 + rand() % 26;
		}
	}
}
void showArr(char arr[][4], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void minmaxElem(char arr[][4], int row, int col) {
	char min = arr[0][0];
	char max = arr[0][0];
	for (int i = 0, j = 0; i < row, j < col; i++, j++) {
		if (arr[i][j] < min)
			min = arr[i][j];
		if (arr[i][j] > max)
			max = arr[i][j];
	}
	cout << "Мин.эл. главной диагонали: " << min << endl;
	cout << "Макс.эл. главной диагонали: " << max << endl;
}
void sortrowElem(char arr[][4], int row, int col) {
	cout << "Сортировка элементов по возрастанию отдельно для каждой строки матрицы.\n";
	char temp = 0;
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

//Задание 2. 
int func(int a, int b) {
	if (b == 0)
		return a;
	else
		return func(b, a % b);
}

//Задание 3.
void move2arr(int value, char arr[], int size) {
	for (int i = size - 1; i >= 0; i--) {
		arr[i] = '0' + value % 10;
		value /= 10;
	}
}
void createArr(char arr[], int size) {
	move2arr(rand() % 9999, arr, size);
}
void printArr(char arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
	cout << endl;
}
bool samedigits(char arr[], int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] == arr[j])
				count++;
		}
	}
	return (count != 0);
}


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

	/*cout << "Home task #12.2.1\n\n";
	const int row = 4;
	const int col = 4;

	int arr[row][col]{};
	double arr2[row][col]{};
	char arr3[row][col]{};

	cout << "//////////////INT//////////////\n";
	inicialization(arr, row, col);
	showArr(arr, row, col);
	minmaxElem(arr, row, col);
	sortrowElem(arr, row, col);
	showArr(arr, row, col);

	cout << "//////////////DOUBLE//////////////\n";
	inicialization(arr2, row, col);
	showArr(arr2, row, col);
	minmaxElem(arr2, row, col);
	sortrowElem(arr2, row, col);
	showArr(arr2, row, col);

	cout << "//////////////CHAR//////////////\n";
	inicialization(arr3, row, col);
	showArr(arr3, row, col);
	minmaxElem(arr3, row, col);
	sortrowElem(arr3, row, col);
	showArr(arr3, row, col);
	system("pause");
	system("cls");*/

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

	const int N = 4;
	char mech[N];
	char user[N];
	int raz=0;
	//инициализация ГСЧ
	for (int i = 0; i < 15; i++) {
		rand();
	}
	//проверка без повторения чисел
	do {
		createArr(mech, N);
	} while (samedigits(mech, N));
	printArr(mech, N);

	int usernum;
	int bools, cows;

	bool repeat = true;
	cout << "Введите 4-х значное число\n";
	do {
		cin >> usernum;
		raz++;
		bools = 0;
		cows = 0;
		if (usernum == 0) {
			cout << "Игра окончена\n"; break;
		}
		if (usernum < 123) {
			cout << "слишком маленькое число\n"; continue;
		}
		if (usernum > 9876) {
			cout << "слишком большое число\n"; continue;
		}
		move2arr(usernum, user, N);
		if (samedigits(user, N)) {
			cout << "Нельзя вводить одинаковые цифры\n"; continue;
		}
		for (int i = 0; i < N; i++){
			if (mech[i] == user[i]) {
				bools++;
			}
			for (int j = 0; j < N; j++){
				if (mech[i] == user[j]) {
					cows++;
				}
			}
		}
		cows -= bools;
		cout << "Попытка №"<<raz << ": Быков " << bools << ";Коров" << cows << endl;
	} while (bools!=4);
	cout << "you win!)\n";
}