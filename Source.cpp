#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int MatrixSize = 3;

	int ourMatrix[MatrixSize][MatrixSize] = {};
	int rowSum[MatrixSize] = {}; // для записи суммы по строкам
	int columnSum[MatrixSize] = {}; // ... по столбцам

	cout << "Заполните матрицу " << MatrixSize << 'х' << MatrixSize << " числами построчно.\n";
	for (int rowNum = 0; rowNum < MatrixSize; rowNum++)
	{
		for (int columnNum = 0; columnNum < MatrixSize; columnNum++)
		{
			cout << rowNum + 1 << "-я строка ";
			cout << columnNum + 1 << "-й столбец: ";
			cin >> ourMatrix[rowNum][columnNum];
		}
		cout << endl;
	}

	// вывод на экран + подсчет суммы
	for (int rowNum = 0; rowNum < MatrixSize; rowNum++)
	{
		cout << " | ";
		for (int columnNum = 0; columnNum < MatrixSize; columnNum++)
		{
			cout << setw(4) << ourMatrix[rowNum][columnNum] << "  ";
			rowSum[rowNum] += ourMatrix[rowNum][columnNum];
			columnSum[rowNum] += ourMatrix[columnNum][rowNum];
		}
		cout << "|" << endl;
	}

	cout << "\nСумма по строкам!\n";
	for (int i = 0; i < MatrixSize; i++)
	{
		cout << i + 1 << "-я строка: " << rowSum[i] << endl;
	}

	cout << "\nСумма по столбцам!\n";
	for (int i = 0; i < MatrixSize; i++)
	{
		cout << i + 1 << "-й столбец: " << columnSum[i] << endl;
	}
	return 0;
}