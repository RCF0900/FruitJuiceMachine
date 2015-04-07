//Copied from a book, program by the dude who wrote it D.S. Malik

#include <iostream>
#include "cashRegister.h"
#include "dispenserType.h"

using namespace std;

void showSelection();
void sellProduct(dispenserType& product, cashRegister& pCounter);

//Main
int main()
{
	cashRegister counter;
	dispenserType appleJuice(100, 50);
	dispenserType orangeJuice(100, 65);
	dispenserType mangoLassi(75, 45);
	dispenserType fruitPunch(100, 85);

	int choice;

	showSelection();
	cin >> choice;

	while (choice != 9)
	{
		switch (choice)
		{
		case 1:
			sellProduct(appleJuice, counter);
			break;
		case 2:
			sellProduct(orangeJuice, counter);
			break;
		case 3:
			sellProduct(mangoLassi, counter);
			break;
		case 4:
			sellProduct(fruitPunch, counter);
			break;
		default:
			cout << "Invalid Selection." << endl;
		}//end switch
		showSelection();
		cin >> choice;
	}//end while
}//end main

//showSelection
void showSelection()
{
	cout << "*** Welcome to Shelly's Fruit Juice Shop ***" << endl;
	cout << "To select an item, enter " << endl;
	cout << "1 for apple juice" << endl;
	cout << "2 for orange juice" << endl;
	cout << "3 for mango lassi" << endl;
	cout << "4 for fruit punch" << endl;
	cout << "9 to exit" << endl;
}

//sellProduct
void sellProduct(dispenserType& product, cashRegister& pCounter)
{
	int amount;
	int amount2;

	if (product.getNoOfItems() > 0)
	{
		cout << "Please deposit " << product.getCost()
			<< " cents" << endl;
		cin >> amount;

		if (amount < product.getCost())
		{
			cout << "Please deposit another "
				<< product.getCost() - amount << " cents" << endl;
			cin >> amount2;
			amount = amount + amount2;
		}

		if (amount >= product.getCost())
		{
			pCounter.acceptAmount(amount);
			product.makeSale();
			cout << "Collect you item at the bottom and enjoy."
				<< endl;
		}

		else
			cout << "The amount is not enough. " << "Collect what you deposited." << endl;

		cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
			<< endl << endl;
	}
	else
		cout << "Sorry, this item is sold out." << endl;
}//end 