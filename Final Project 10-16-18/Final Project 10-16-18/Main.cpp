#include "Link.h"
using namespace std;

int main()
{

	Miners Send;
	MyMagicTrick m;

	bool done;
	bool Success;
	int userInput;

	done = false;
	while (done == false)
	{
		system("cls");

		cout << "1) Play Magic Trick" << endl;
		cout << "2) Play Miner Game" << endl;
		cout << "3) Quit" << endl;


		cout << "Select a menu option: ";
		m.InputInt(userInput, Success);
		if (userInput < 1 || userInput > 3 || Success == false)
		{
			cout << "Error.  Expected number 1-3" << endl;
			system("pause");
		}
		else
		{
			switch (userInput)
			{
			case 1:
				m.Play();
				break;
			case 2:
				Send.miner();
				break;
			case 3:
				done = true;
				break;
			}
		}
	}
	system("pause");
	return 0;
}