#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int MatrixSize = 3;

	int ourMatrix[MatrixSize][MatrixSize] = {};
	int rowSum[MatrixSize] = {}; // ��� ������ ����� �� �������
	int columnSum[MatrixSize] = {}; // ... �� ��������

	cout << "��������� ������� " << MatrixSize << '�' << MatrixSize << " ������� ���������.\n";
	for (int rowNum = 0; rowNum < MatrixSize; rowNum++)
	{
		for (int columnNum = 0; columnNum < MatrixSize; columnNum++)
		{
			cout << rowNum + 1 << "-� ������ ";
			cout << columnNum + 1 << "-� �������: ";
			cin >> ourMatrix[rowNum][columnNum];
		}
		cout << endl;
	}

	// ����� �� ����� + ������� �����
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

	cout << "\n����� �� �������!\n";
	for (int i = 0; i < MatrixSize; i++)
	{
		cout << i + 1 << "-� ������: " << rowSum[i] << endl;
	}

	cout << "\n����� �� ��������!\n";
	for (int i = 0; i < MatrixSize; i++)
	{
		cout << i + 1 << "-� �������: " << columnSum[i] << endl;
	}
	return 0;
}