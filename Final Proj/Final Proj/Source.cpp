#include <iostream>
#include <string>
#include <fstream>
//#include "Class.h"
using namespace std;
// Global variables used in the program
double money = 5.00, priceMine = 5.00, priceUpg = 200;
double level = 1.00, mul = 1.00;

int menu()
{
	// DIsplaying the menu for users to buy various items to get better.
	cout << "_________________________________________\n";
	cout << "|                                       |\n";
	cout << "|    Miner              5.00            |\n";
	cout << "|    Pickaxe            80.00           |\n";
	cout << "|    Stronger miners    130.00          |\n";
	cout << "|    Hard workers       300.00          |\n";
	cout << "|    Drill              700.00          |\n";
	cout << "|    Explosives         1,000.00        |\n";
	cout << "|    Super Miner        8,000.00        |\n";
	cout << "|    A Robot            14,000.00       |\n";
	cout << "|    Freaking Lazers    20,000.00       |\n";
	cout << "|    Better Mine        500,000,000     |\n";
	cout << "|_______________________________________|\n";
	return 0;
}


int buy()
{
	string buys[]{ "Miner" , "Upgrade all miners" }; // My only Array in this program 
	string choice;


	menu(); // Displaying menu so user can see it.
	cout << "Would you like to buy a " << buys[0] << " for " << priceMine << " coins or " << buys[1] << " for " << priceUpg << " coins?\n";
	cin >> choice;
	if (choice == "miner")
	{
		if (priceMine <= money)
		{
			cout << "You have bought one miner\n";
			money = money - priceMine;
			cout << "You now have " << money << " coin(s)\n";
			priceMine = priceMine * 8;
			mul = mul + 2;
		}
		else
		{
			cout << "You do not have enough coins to do that.\n";
		}
	}
	if (choice == "upgrade")
	{
		if (priceUpg <= money)
		{
			level = level + .25;
			cout << "You have upgraded your miners to level " << level << ".\n"; \
				money = money - priceUpg;
			cout << "You now have " << money << " coin(s)\n";
			priceUpg = priceUpg * 3;
		}
		else
		{
			cout << "You do not have enough coins to do that.\n";
		}
	}

	return mul;
}

int main()
{
	int day = 0;
	string user, act;
	ofstream myfile;
	cout << "Welcome to the miner game. In this game you mine to become rich... obviously.\n";
	cout << "Please input your name." << endl;
	cin >> user;
	cout << "Buy your first level one miner by typing buy\n";
	cin >> act;
	if (act == "buy")
	{
		buy();
	}

	do
	{
		mul = (mul * level);
		cout << "You can now buy something else, wait for more money, or retire (buy, w, retire) You have " << money << " coins\n";
		cin >> act;
		if (act == "buy")
		{
			buy();
		}
		if (act == "w")
		{
			money = money + mul;
			day++;
		}


	} while (act != "retire");

	myfile.open("C:\\Users\\Jack\\source\\BiggestMiners.txt");
	myfile << user << " has finally retired after " << day << " of work with " << money << " coins and an accumulator of " << mul << endl;
	myfile.close();
	cout << "You have retired with " << money << " coins and an accumulator of " << mul << " congratulations!!\n";

	system("pause");
	return 0;
}