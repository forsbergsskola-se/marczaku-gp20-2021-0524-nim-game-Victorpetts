#include <iostream>

using namespace std;

int main() {
	// 3 values (empty, X, O).
	char cell_1_1, cell_1_2, cell_1_3;
	char cell_2_1, cell_2_2, cell_2_3;
	char cell_3_1, cell_3_2, cell_3_3;

	cell_1_1 = cell_1_2 = cell_1_3 = cell_2_1 = cell_2_2 = cell_2_3 = cell_3_1 = cell_3_2 = cell_3_3 = ' ';

	cout << "Give me the row of the cell where you want to put an X:" << endl;
	int row;
	cin >> row;
	cout << "Give me the column of the cell where you want to put an X:" << endl;
	int column;
	cin >> column;

	if (row == 1 && column == 1)
		cell_1_1 = 'X';
	if (row == 1 && column == 2)
		cell_1_2 = 'X';
	if (row == 1 && column == 3)
		cell_1_3 = 'X';
	if (row == 2 && column == 1)
		cell_2_1 = 'X';
	if (row == 2 && column == 2)
		cell_2_2 = 'X';
	if (row == 2 && column == 3)
		cell_2_3 = 'X';
	if (row == 3 && column == 1)
		cell_3_1 = 'X';
	if (row == 3 && column == 2)
		cell_3_2 = 'X';
	if (row == 3 && column == 3)
		cell_3_3 = 'X';

	cout << '|' << cell_1_1 << '|' << cell_1_2 << '|' << cell_1_3 << '|' << endl;
	cout << '|' << cell_2_1 << '|' << cell_2_2 << '|' << cell_2_3 << '|' << endl;
	cout << '|' << cell_3_1 << '|' << cell_3_2 << '|' << cell_3_3 << '|' << endl;

}