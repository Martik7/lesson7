#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <ctime>
using namespace std;

const int n = 5;
char mas[n][n];

void FillArray(int a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 1 + rand() % 100;
	}
}

template<typename T>
void SortArray(T arr[][30], int n, int m, char sorting_order = 'a');


template<typename myType>

//Selection 
void selectionSort(myType arr[], int n)
{
	int min, min_pos;
	for (size_t i = 0; i < n - 1; i++)
	{
		min = INT_MAX;
		for (size_t j = 1; j < n; j++)
		{
			min = arr[j];
			min_pos = j;
		}
		swap(arr[i], arr[min_pos]);
	}
}


//Insertion сортировка
template<typename myType>
void InsertionSort(myType arr[], myType size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
			else
				break;
		}
	}
}

// Сортировка выбором
template<typename myType>
void choicesSort(int* arrayPtr, int length_array)
{
	for (int repeat_counter = 0; repeat_counter < length_array; repeat_counter++)
	{
		int temp = arrayPtr[0]; // âðåìåííàÿ ïåðåìåííàÿ äëÿ õðàíåíèÿ çíà÷åíèÿ ïåðåñòàíîâêè
		for (int element_counter = repeat_counter + 1; element_counter < length_array; element_counter++)
		{
			if (arrayPtr[repeat_counter] > arrayPtr[element_counter])
			{
				temp = arrayPtr[repeat_counter];
				arrayPtr[repeat_counter] = arrayPtr[element_counter];
				arrayPtr[element_counter] = temp;
			}
		}
	}
}

//BubbleSort
template<typename myType> //÷òîáû òèï áûë è double è int
void bubbleSort(myType* arrayPtr, myType length_array)
{
	myType temp = 0;
	bool exit = false;

	while (!exit)
	{
		exit = true;
		for (int int_counter = 0; int_counter < (length_array - 1); int_counter++)
			if (arrayPtr[int_counter] > arrayPtr[int_counter + 1])
			{
				temp = arrayPtr[int_counter];
				arrayPtr[int_counter] = arrayPtr[int_counter + 1];
				arrayPtr[int_counter + 1] = temp;
				exit = false;
			}
	}
}
/* Вывод массива */

template<typename T>
void printArray(T arr[], int size)
{
	T i;
	for (i = 0; i < size; i++)
		cout << arr[i] << endl;
	cout << endl;
}

//1
template<typename myType>
bool checkBrackets(char c[])
{
	myType k = 0;
	for (size_t i = 0; i < strlen(c); i++)
	{
		if (c[i] == '(') k++;
		else if (c[i] == ')') k--;
		if (c[i] == '[') k++;
		else if (c[i] == ']') k--;
		if (c[i] == '{') k++;
		else if (c[i] == '}') k--;
		if (k < 0) return false;
	}
	if (k == 0) return true;
	else return false;
}

void SortByChoice(int a[], int size, char type)
{
	switch (type)
	{
	case 'i':
		InsertionSort(a, size);
		break;
	case 's':
		selectionSort(a, size);
		break;
	case 'b':
		bubbleSort(a, size);
		break;
	default:
		cout << "Wrong selection type!" << endl;
		break;
	}
}

//Площадь		
int ploshad(int x = 1, int y = 1)
{
	return x * y;
}

int sum(int x, int y, int z = 0)
{
	return x + y + z;
}

long Summa(long a = 1, long b = 2);

float Summa(float a = 1.5, float b = 2.3);

void res1(int a = 1, char ch = 'z');
void res2(int b = 11, char ch = 'r');
void res3(int c = 2, int ch = 'z');
void res4(int d = 12, int ch = 'z');
void Diagonal(int a[][30], int n);
template<typename T>
void PRINT_Array(T a[][30], int n, int m);



//5
/*
Написать рекурсивную функцию, которая вычисляет xy с помощью умножения. 
Проиллюстрируйте работу функции примером.
*/
int recPower(double x, int y)
{
	if (y == 0) return 1;
	return x * recPower(x, y - 1);
}

//6
/*
Написать рекурсивную функцию, которая вычисляет x*y с помощью сложения. 
Проиллюстрируйте работу функции примером.
*/
int recPower1(double x, double y)
{
	if (x == 0) return 1;
	return x - recPower1(x,y);
}

void print(int n)
{
	if (n == 0) return;
	char c;
	cin >> c;
	print(n - 1);
	cout << c << endl;
}

int fibbonachi(int n)
{
	cout <<"fib"<< n << endl;
	if (n == 0 || n == 1) return 1;
	return (fibbonachi(n - 1) + fibbonachi(n - 2));
}

/*
Написать рекурсивную функцию, которая выводит N звезд в ряд, число N задает пользователь. 
Проиллюстрируйте работу функции примером.
*/
void printN(int n)
{
	if (n == 0) return;
	int a;
	cin >> a;
	print(n - 1);
	cout << a << endl;
}

//8
/*
Написать рекурсивную функцию, 
которая вычисляет факториал числа. 
Проиллюстрируйте работу функции примером.
*/
int factorial(int n)
{
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

/*
Написать рекурсивную функцию, 
которая вычисляет сумму всех чисел в диапазоне от a до b. 
Пользователь вводит a и  b. 
Проиллюстрируйте работу функции примером.
*/
int sumab(int a, int b)
{
	static int tmp = a;
	if (a == b) return -tmp;
	return a + sumab(a + 1, b);
}

int sumArray(int a[], int n)
{
	static int sum = 0;
	if (n == 1) return a[n-1];
	return a[n - 1] + sumArray(a, n - 1);
}

int maxArray(int a[], int n)
{
	static int max = a[0];
	if (n == 1)
		return a[n - 1];
	if (a[n - 1] > max)
		max = a[n - 1];
	maxArray(a, n - 1);
	return max;
}

int maxA(int a[], int low, int high)
{
	if (low == high)
		return a[low];
	int middle = (low + high) / 2;
	int right = maxA(a, low, middle);
	int left = maxA(a, middle + 1, high);
	return right > left ? right : left;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	//1
	/*int a, b;
	cin >> a >> b;
	cout << ploshad() << endl;
	cout << ploshad(a) << endl;
	cout << ploshad(a, b) << endl;
	cout << sum(a, b) << endl;*/
	//2
	/*int a, b;
	cout << Summa(a, b) << endl;
	cout << Summa(a, b) << endl;*/

	//3
	/*res1();
	res2();
	res3();
	res4();*/

	//4
	/*int a[20][30];
	double b[2][30] = { {1.5,3.1},{5.4,7.7} };
	Diagonal(a, 5);
	SortArray(a, 5, 5);
	SortArray(b, 2, 2, 'd');
	PRINT_Array(b, 2, 2);*/

	//5
	/*int x, y;
	cin >> x >> y;
	cout << recPower(x, y) << endl;*/

	//
	/*int x;
	cin >> x;
	print(x);*/

	//fibonacci
	/*int x;
	cin >> x;
	cout << fibbonachi(x) << endl;*/

	//7
	/*int x;
	cin >> x;
	printN(x);*/

	//8
	/*int x;
	cin >> x;
	cout << factorial(x) << endl;*/

	//9
	/*int a, b;
	cin >> a >> b;
	cout << sumab(a, b) << endl;*/

	int a[n];
	FillArray(a, n);
	printArray(a, n);
	cout << sumArray(a, n)<< endl;
	cout << maxA(a, 0, 4) << endl;

	system("pause");
	return 0;
}

int maxA(int a[], int low, int high);


long Summa(long a, long b)
{
	return a + b;
}

float Summa(float a, float b)
{
	return a + b;
}

void res1(int a, char ch)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			mas[i][j] = ' ';

	for (int i = 0; i < n; ++i)
		for (int j = 0; j <= i; ++j)
			mas[i][j] = '*';

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << mas[i][j];
		cout << endl;
	}
	cout << endl;
}

void res2(int a, char ch)
{
	for (size_t i = 0; i < n; ++i)
		for (size_t j = 0; j < n; ++j)
		{
			mas[i][j] = ' ';
		}
	for (size_t i = 0; i < n; ++i)
		for (size_t j = 0; j < n; j++)
		{
			if ((i != j) && (j != 0) && (i != n - 1))
				mas[i][j] = ' ';
			else
				mas[i][j] = '*';
		}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cout << mas[i][j];
		cout << endl;
	}
	cout << endl;
}

void res3(int a, int ch)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			mas[i][j] = ' ';

	for (int i = 0; i < n; ++i)
		for (int j = 0; j + i <= n - 1; ++j)
			mas[i][j] = '*';

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << mas[i][j];
		cout << endl;
	}
	cout << endl;
}

void res4(int d, int ch)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			mas[i][j] = ' ';
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j + i <= n - 1; ++j)
		{
			if ((i != 0) && (j != 0) && (j + i != n - 1))
				mas[i][j] = ' ';
			else
				mas[i][j] = '*';
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << mas[i][j];
		cout << endl;
	}
	cout << endl;
}

void Diagonal(int a[][30], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i == j || i == n - 1 - j)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = 0;
			}
		}
	}

}

template<typename T>
void SortArray(T arr[][30], int n, int m, char sorting_order)
{
	if (sorting_order == 'a')
	{
		for (size_t i = 0; i < n; i++)
		{
			for (int pass = 0; pass < n - 1; pass++)
			{
				for (size_t j = i; j < n - 1; j++)
				{
					if (arr[i][j] > arr[i][j + 1])
						swap(arr[i][j], arr[i][j + 1]);
				}
			}
		}
	}
	else
	{
		for (size_t i = 0; i < n; i++)
		{
			for (int pass = 0; pass < n - 1; pass++)
			{
				for (size_t j = i; j < n - 1; j++)
				{
					if (arr[i][j] < arr[i][j + 1])
						swap(arr[i][j], arr[i][j + 1]); //перестановка элементов массива
				}
			}
		}
	}
}

template<typename T>
void PRINT_Array(T a[][30], int n, int m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << a[i][j] << '\t';
		}
		cout << endl;
	}
}
