#include <iostream>

using namespace std;

int main() {
	int matches = 24;
	int drawn;
	bool playing = true;

	cout << "Starting a game of Nim!\n"
		<< "There are " << matches << " matches on the table and the players take turns drawing.\n"
		<< "You can draw 1-3 matches every turn. Draw the last match to win." << endl;

	while (playing) {
		if (matches == 0) {
			cout << "You lost!" << endl;
			return 0;
		}

		cout << "There are " << matches << " matches left on the table ";
		for (int i = 0; i < matches; i++) {
			if (i == (matches - 1)) {
				cout << R"(|)" << endl;
				break;
			}
			cout << R"(|)";
		}
		cout << "How many matches do you want to draw?" << endl;
		cin >> drawn;

		if (drawn > 3 || drawn < 1) {
			cout << "You can only draw 1, 2 or 3 matches." << endl;
		}
		else if (matches - drawn < 0) {
			cout << "There aren't that many matches left!" << endl;
		}
		else if (matches - drawn == 0) {
			cout << "You won the game!" << endl;
			return 0;
		}
		else {
			cout << "You draw " << drawn << " match(es)" << endl;
			matches -= drawn;
			drawn = rand() % 3;
			cout << "The other players draws " << drawn << " match(es)" << endl;
			matches -= drawn;
		}

	}

}