#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <fstream>

using namespace std;

class MyMagicTrick
{
private:
	static const int CARD_USER_INPUT_YES = 1;
	static const int CARD_USER_INPUT_NO = 2;
	static const int CARD_USER_INPUT_NOT_YET = -1;

	//constants for computer performing the trick
	static const int MENU_ENTER_CARD_A = 1;
	static const int MENU_ENTER_CARD_B = 2;
	static const int MENU_ENTER_CARD_C = 3;
	static const int MENU_ENTER_CARD_D = 4;
	static const int MENU_START_OVER = 5;
	static const int MENU_TEST_MODE_ENTER = 6;
	static const int MENU_QUIT = 7;

	//constants for user guessing the number.
	static const int MENU_NORMAL_MODE_ENTER = 1;
	static const int MENU_USER_GUESSES = 2;
	static const int MENU_TEST_MODE_START_OVER = 3;
	static const int MENU_TEST_MODE_QUIT = 4;

	static const int PLAYER_USER = 1;
	static const int PLAYER_COMPUTER = 2;

	static const int STATE_VIEW_INSTRUCTIONS = 1;
	static const int STATE_MENU_OPTIONS = 2;
	static const int STATE_COMPUTER_GUESSES = 3;
	static const int STATE_USER_GUESS = 4;

	void DisplayCardHeader(string, int);
	void RefreshScreen(int, bool, int, int, int, int);
	int MenuSelect_PU();
	int MenuSelect_PC();

	void UpdateCard(string, int &);

public:
	void Play();
};
class Miners
{
public:
	void miner();
	void menu();
	double buy();
};

void InputInt(int &, bool &);

double money = 5.00, mul = 1.00;
double items[10] = { 5.00, 80.00, 130.00, 300.00, 700.00, 1000.00, 8000.00, 14000.00, 20000.00, 5000000.00 };

