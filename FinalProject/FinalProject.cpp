#include "FinalProject.h"

using namespace std;

void Miners::menu()
{
	// Displaying the menu for users to buy various items to get better.
	cout << "______________________________________________\n";
	cout << "|                                             |\n";
	cout << "|    Miner              " << items[0] << "  (Miner)     |\n";
	cout << "|    Pickaxe            " << items[1] << "  (Pickaxe)   |\n";
	cout << "|    Stronger miners    " << items[2] << "  (Strong)    |\n";
	cout << "|    Hard workers       " << items[3] << "  (Hard)      |\n";
	cout << "|    Drill              " << items[4] << "  (Drill)     |\n";
	cout << "|    Explosives         " << items[5] << "  (Explo)     |\n";
	cout << "|    Super Miner        " << items[6] << "  (Super)     |\n";
	cout << "|    A Robot            " << items[7] << "  (Robot)     |\n";
	cout << "|    Freaking Lazers    " << items[8] << "  (Lazer)     |\n";
	cout << "|    Better Mine        " << items[9] << "  (Better)    |\n";
	cout << "|____________________________________________|\n";

	return;
}


// Buy function
double Miners::buy()
{
	string choice;
	Miners Send;

	Send.menu(); // Displaying menu so user can see it.
	cout << "You have " << money << " coins.\n";
	cout << "What would you like to buy? Type none to exit\n";
	cin >> choice;
	if (choice == "miner" || choice == "Miner")
	{
		if (items[0] <= money)
		{
			cout << "You have bought one miner\n";
			money = money - items[0];
			cout << "You now have " << money << " coin(s)\n";
			items[0] = items[0] * 8;
			mul = mul + 2;
		}
	}
	if (choice == "Pickaxe" || choice == "pickaxe")
	{
		if (items[1] <= money)
		{
			cout << "You have bought one Pickaxe\n";
			money = money - items[1];
			cout << "You now have " << money << " coin(s)\n";
			items[1] = items[1] * 8;
			mul = mul + 5;
		}
	}
	if (choice == "Strong" || choice == "strong")
	{
		if (130.00 <= money)
		{
			cout << "You have bought a strong worker\n";
			money = money - items[2];
			cout << "You now have " << money << " coin(s)\n";
			items[2] = items[2] * 8;
			mul = mul + 12;
		}
	}
	if (choice == "Hard" || choice == "hard")
	{
		if (items[3] <= money)
		{
			cout << "You have bought a hard worker\n";
			money = money - items[3];
			cout << "You now have " << money << " coin(s)\n";
			items[3] = items[3] * 8;
			mul = mul + 16;
		}
	}
	if (choice == "Drill" || choice == "drill")
	{
		if (items[4] <= money)
		{
			cout << "You have bought a drill\n";
			money = money - items[4];
			cout << "You now have " << money << " coin(s)\n";
			items[4] = items[4] * 8;
			mul = mul + 19;
		}
	}
	if (choice == "Explo" || choice == "explo")
	{
		if (items[5] <= money)
		{
			cout << "You have bought an explosive\n";
			money = money - items[5];
			cout << "You now have " << money << " coin(s)\n";
			items[5] = items[5] * 8;
			mul = mul + 22;
		}
	}
	if (choice == "Super" || choice == "super")
	{
		if (items[6] <= money)
		{
			cout << "You have bought a super miner\n";
			money = money - items[6];
			cout << "You now have " << money << " coin(s)\n";
			items[6] = items[6] * 8;
			mul = mul + 26;
		}
	}
	if (choice == "Robot" || choice == "robot")
	{
		if (items[7] <= money)
		{
			cout << "You have bought a robot\n";
			money = money - items[7];
			cout << "You now have " << money << " coin(s)\n";
			items[7] = items[7] * 8;
			mul = mul + 31;
		}
	}
	if (choice == "Lazer" || choice == "lazer")
	{
		if (items[8] <= money)
		{
			cout << "You have bought a freaking lazer!!\n";
			money = money - items[8];
			cout << "You now have " << money << " coin(s)\n";
			items[8] = items[8] * 8;
			mul = mul + 40;
		}
	}
	if (choice == "Better" || choice == "better")
	{
		if (items[9] <= money)
		{
			cout << "You have bought a better mine\n";
			money = money - items[9];
			cout << "You now have " << money << " coin(s)\n";
			items[9] = items[9] * 8;
			mul = mul + 10000000000;
		}
	}
	else
	{
		cout << "You do not have enough coins to do that.\n";
	}
	system("cls");

	return mul;
}
void Miners::miner()
{
	Miners Send; // Class object
	int day = 0, count = 0; // Day counter
	string user, act = " "; // Seeing what user wants to do
	ofstream myfile; // To print into txt file

	cout << "Welcome to the miner game. In this game you mine to become rich... obviously.\n";
	cout << "Please input your name." << endl;
	cin >> user;
	cout << "Buy your first level one miner by typing buy\n";
	cin >> act;
	if (act == "buy")
	{
		Send.buy();
	}
	do
	{
		cout << "You can now buy something else, wait for more money, or retire (buy, w, retire) You have " << money << " coins\n";
		cin >> act;

		if (act == "buy")
		{
			Send.buy();
		}
		if (act == "w")
		{
			money = money + mul;
			day++;
			system("cls");
		}


	} while (act != "retire");

	myfile.open("C:\\Users\\Adam Gibson\\source\\BiggestMiners.txt");
	myfile << user << " has finally retired after " << day << " of work with " << money << " coins and an accumulator of " << mul << endl;
	myfile.close();
	cout << "You have retired with " << money << " coins and an accumulator of " << mul << " congratulations!!\n";
	cout << "Do you want to play another game or quit?(Play or Quit)\n";
	cin >> user;
	if (user == "Play" || user == "play")
	{
		// Send them to first class to pick game
	}
	else
	{
		exit(-1);
		//Do nothing and end game
	}
	system("pause");
	return;
}

void MyMagicTrick::DisplayCardHeader(string s, int Card)
{
	switch (Card)
	{
	case CARD_USER_INPUT_YES:
		cout << " " << s << " = YES   ";
		break;
	case CARD_USER_INPUT_NO:
		cout << " " << s << " = NO    ";
		break;
	case CARD_USER_INPUT_NOT_YET:
		cout << " " << s << "         ";
		break;
	}

}

void MyMagicTrick::RefreshScreen(int State, bool HasUserGuessed, int Card1, int Card2, int Card3, int Card4)  // when i want to refresh the screen
{
	system("CLS");

	if (State == STATE_VIEW_INSTRUCTIONS)
	{
		cout << "Here's how you play..." << endl;
		cout << "All you have to tell me is if you're number is in any of the cards" << endl;
		cout << "Pick a number between 0 and 15, don't tell me you're number." << endl;
		cout << endl;
		cout << "This is my magic trick... Don't tell anyone!" << endl;
	
	}
	else if (State == STATE_USER_GUESS)
	{
		cout << "Make a guess" << endl;
	}
	else
	{
		DisplayCardHeader("(A)", Card1);
		cout << "    ";
		DisplayCardHeader("(B)", Card2);
		cout << "    ";
		DisplayCardHeader("(C)", Card3);
		cout << "    ";
		DisplayCardHeader("(D)", Card4);
		cout << endl;

		cout << "*************    **************    *************    *************" << endl;
		cout << "*   8    9  *    *   4     5  *    *   2    3  *    *   1    3  *" << endl;
		cout << "*  10   11  *    *   6     7  *    *   6    7  *    *   5    7  *" << endl;
		cout << "*  12   13  *    *  12    13  *    *  10   11  *    *   9   11  *" << endl;
		cout << "*  14   15  *    *  14    15  *    *  14   15  *    *  13   15  *" << endl;
		cout << "*************    **************    *************    *************" << endl;
	}
}

int MyMagicTrick::MenuSelect_PU()   // when the player is the user
{
	int userInput;
	bool Success;

	cout << endl;
	cout << endl;

	cout << "1) Update Card A" << endl;
	cout << "2) Update Card B" << endl;
	cout << "3) Update Card C" << endl;
	cout << "4) Update Card D" << endl;
	cout << "5) Start over" << endl;
	cout << "6) Test Mode" << endl;
	cout << "7) Quit" << endl;

	Success = false;
	userInput = -1;
	while (Success == false && (userInput < 1 || userInput > 7))
	{
		cout << "Select menu option: ";
		InputInt(userInput, Success);
		if (userInput < 1 || userInput>7)
		{
			cout << "Number was not between 1 and 7" << endl; // bug
			Success = false;
		}
	}
		
	return userInput;
}

int MyMagicTrick::MenuSelect_PC() // when the player is a computer
{
	int userInput;
	bool Success;

	cout << endl;
	cout << endl;

	cout << "1) Normal Game Mode" << endl;
	cout << "2) Guess a number " << endl;
	cout << "3) Start over" << endl;
	cout << "4) Quit" << endl;

	Success = false;
	userInput = -1;
	while (Success == false && (userInput < 1 || userInput > 4))
	{
		cout << "Select menu option: ";
		InputInt(userInput, Success);
		if (userInput< 1 || userInput>4)
		{
			cout << "Number was not between 1 and 4" << endl;
			Success = false;
		}
	}

	return userInput;
}

void MyMagicTrick::UpdateCard(string s, int &Card)
{
	int userInput;
	bool Success;

	cout << endl;
	cout << "Is your number on Card " << s << "?" << endl;
	cout << "      1) Yes" << endl;
	cout << "      2) No" << endl;
	cout << "      3) Default to not answered" << endl;

	Success = false;
	userInput = -1;
	while (Success == false && (userInput < 1 || userInput > 3))
	{
		cout << "Select menu option: ";
		InputInt(userInput, Success);
		if (userInput < 1 || userInput > 3)
		{
			cout << "Number was not between 1 and 3" << endl;
			Success = false;
		}
	}

	switch (userInput)
	{
	case 1:
		Card = CARD_USER_INPUT_YES; break;
	case 2:
		Card = CARD_USER_INPUT_NO; break;
	case 3:
		Card = CARD_USER_INPUT_NOT_YET; break;
	}
}


void MyMagicTrick::Play()
{
	int menuSelection;
	int Card1, Card2, Card3, Card4, State;
	bool HasUserGuessed;
	bool done;
	int Answer=0  ;

	int Player1;

	srand((unsigned int)(time(0))); //  this doesn't generate a random number, it generates the same number, but it does populate what I want

	Card1= rand() % 2 + 1;
	Card2 = rand() % 2 + 1;
	Card3= rand() % 2 + 1;
	Card4 = rand() % 2 + 1;

	// initialization work
	Player1 = PLAYER_USER;
	Card1 = CARD_USER_INPUT_NOT_YET;
	Card2 = CARD_USER_INPUT_NOT_YET;
	Card3 = CARD_USER_INPUT_NOT_YET;
	Card4 = CARD_USER_INPUT_NOT_YET;

	HasUserGuessed = true;
	State = STATE_VIEW_INSTRUCTIONS;

	done = false;
	while (done == false)
	{
		RefreshScreen(State, HasUserGuessed, Card1, Card2, Card3, Card4);

		if (State == STATE_VIEW_INSTRUCTIONS)
		{
			system("pause");
			State = STATE_USER_GUESS;
		}
		else if (State == STATE_USER_GUESS)
		{
			Card1 = CARD_USER_INPUT_NOT_YET;
			Card2 = CARD_USER_INPUT_NOT_YET;
			Card3 = CARD_USER_INPUT_NOT_YET;
			Card4 = CARD_USER_INPUT_NOT_YET;
			system("pause");
			State = STATE_MENU_OPTIONS;
		}
		else if (State == STATE_MENU_OPTIONS)
		{
			if (Player1 == PLAYER_USER)
			{
				menuSelection = MenuSelect_PU();
				switch (menuSelection)
				{
				case MENU_ENTER_CARD_A:
					UpdateCard("(A)", Card1);
					if (Card1 > 0 && Card2 > 0 && Card3 > 0 && Card4 > 0)
					{
						State = STATE_COMPUTER_GUESSES;
					}
					break;
				case MENU_ENTER_CARD_B:
					UpdateCard("(B)", Card2);
					if (Card1 > 0 && Card2 > 0 && Card3 > 0 && Card4 > 0)
					{
						State = STATE_COMPUTER_GUESSES;
					}
					break;
				case MENU_ENTER_CARD_C:
					UpdateCard("(C)", Card3);
					if (Card1 > 0 && Card2 > 0 && Card3 > 0 && Card4 > 0)
					{
						State = STATE_COMPUTER_GUESSES;
					}
					break;
				case MENU_ENTER_CARD_D:
					UpdateCard("(D)", Card4);
					if (Card1 > 0 && Card2 > 0 && Card3 > 0 && Card4 > 0)
					{
						State = STATE_COMPUTER_GUESSES;
					}
					break;
				case MENU_START_OVER:
					HasUserGuessed = false;
					Card1 = CARD_USER_INPUT_NOT_YET;
					Card2 = CARD_USER_INPUT_NOT_YET;
					Card3 = CARD_USER_INPUT_NOT_YET;
					Card4 = CARD_USER_INPUT_NOT_YET;
					State = STATE_USER_GUESS;
					break;
				case MENU_QUIT:
					done = true;
					break;
				case MENU_TEST_MODE_ENTER:
					Player1 = PLAYER_COMPUTER;
					//computer generates a number 0 to 15 and defaults card1, card2, card3, card4 to yes or no
					Card1 = rand() % 2 + 1;
					Card2 = rand() % 2 + 1;
					Card3 = rand() % 2 + 1;
					Card4 = rand() % 2 + 1;
					break;
				}
			}
			else if (Player1 == PLAYER_COMPUTER)
			{
				menuSelection = MenuSelect_PC();
				switch (menuSelection)
				{
				case MENU_NORMAL_MODE_ENTER:
					Player1 = PLAYER_USER;
					State = STATE_USER_GUESS;
					break;
				case MENU_USER_GUESSES:
					int Num;
					bool GoodGuess;
					bool Success;

					Success = false;
					Num = -1;
					while (Success == false && (Num < 0 || Num > 15))
					{
						cout << "Guess the number, 0-15: ";
						InputInt(Num, Success);
						if (Num < 0 || Num>16)
						{
							cout << "Number was not between 0 and 15" << endl;
							Success = false;
						}
					}

					GoodGuess = true;
					if (Card1 != ((Num & 8) > 0 ? CARD_USER_INPUT_YES : CARD_USER_INPUT_NO))
							GoodGuess = false;
						
					if (Card2 != ((Num & 4) > 0 ? CARD_USER_INPUT_YES : CARD_USER_INPUT_NO))
							GoodGuess = false;
						
					if (Card3 != ((Num & 2) > 0 ? CARD_USER_INPUT_YES : CARD_USER_INPUT_NO))
							GoodGuess = false;

					if (Card4 != ((Num & 1) > 0 ? CARD_USER_INPUT_YES : CARD_USER_INPUT_NO))
							GoodGuess = false;

					


					if (GoodGuess == false)
					{
						cout << "Your guess was bad." << endl;
					}
					else
					{
						cout <<"You got it!" << endl;
					}

					system("pause");
					break;
				case MENU_TEST_MODE_START_OVER:
					Card1 = rand() % 2 + 1;
					Card2 = rand() % 2 + 1;
					Card3 = rand() % 2 + 1;
					Card4 = rand() % 2 + 1;

					break;
				case MENU_TEST_MODE_QUIT:
					done = true;
					break;

				}
			}

		}
		else if (State == STATE_COMPUTER_GUESSES)
		{
			Answer = 0;

			if (Card1 == CARD_USER_INPUT_YES)
				Answer += 8; //2 to the 3rd
			if (Card2 == CARD_USER_INPUT_YES)
				Answer += 4; //2 to the 2nd
			if (Card3 == CARD_USER_INPUT_YES)
				Answer += 2; //2 to the 1st
			if (Card4 == CARD_USER_INPUT_YES)
				Answer += 1;//2 to the zero

			cout << "Poof, Your number is, " << Answer << " Lightning fast too" << endl;
			system("pause");

			HasUserGuessed = false;
			Card1 = CARD_USER_INPUT_NOT_YET;
			Card2 = CARD_USER_INPUT_NOT_YET;
			Card3 = CARD_USER_INPUT_NOT_YET;
			Card4 = CARD_USER_INPUT_NOT_YET;
			State = STATE_MENU_OPTIONS;
		}
	}

	system("pause");
	return;
}

void InputInt(int &num, bool &success)
{
	string s;
	int indexBegin;
	int indexEnd;
	bool IsANumber;

	success = false;
	s = "";
	while (s == "")
	{
		getline(cin, s);
	}

	indexBegin = 0;
	indexEnd = (int)s.length() - 1;

	IsANumber = false;

	if (s.length() > 0)
	{
		while (s[indexBegin] == ' ' || s[indexBegin] == '\t')
			indexBegin = indexBegin + 1;

		while ((s[indexEnd] == ' ' || s[indexEnd] == '\t') && indexEnd > indexBegin)
			indexEnd = indexEnd - 1;

		if (indexBegin <= indexEnd)
		{
			IsANumber = true;
			for (int i = indexBegin; i <= indexEnd; i++)
			{
				if (s[i] < '0' || s[i] > '9')
					IsANumber = false;
			}
		}
	}

	if (IsANumber == false)
	{
		num = -1;
	}
	else
	{
		num = 0;
		for (int i = indexBegin; i <= indexEnd; i++)
		{
			num = num * 10 + (s[i] - '0');
		}
		success = true;
	}
}

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
		InputInt(userInput, Success);
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
