#include "Link.h"

using namespace std;
// Global Variables
double money = 5.00, mul = 0.00;
double items[10] = { 5.00, 80.00, 130.00, 300.00, 700.00, 1000.00, 8000.00, 14000.00, 20000.00, 5000000.00 };

void Miners::menu()
{
	// Displaying the menu for users to buy various items to get better.
	cout << "______________________________________________\n";
	cout << "|                                                   |\n";
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
	if (mul == 0)
	{
		// Tutorial
		cout << "Please input your name." << endl;
		cin >> user;
		cout << "Buy your first level one miner by typing buy\n";
		cin >> act;
		if (act == "buy")
		{
			Send.buy();
		}
	}
	do
	{
		cout << "You can now buy something else, wait for more money, or retire (buy, w, retire) You have " << money << " coins\n";
		cin >> act;
		// Go to buy function
		if (act == "buy")
		{
			Send.buy();
		}
		// Earn Money
		if (act == "w")
		{
			money = money + mul;
			day++;
			system("cls");
		}


	} while (act != "retire");
	// Retire
	myfile.open("C:\\Users\\Jack\\source\\2BiggestMiners.txt");
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