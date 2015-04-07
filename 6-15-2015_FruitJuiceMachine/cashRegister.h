class cashRegister
{
public:
	int getCurrentBalance() const;
	//Function to show the current amount in the cash register
	//Postcondition: The value of cashOnHand is returned

	void acceptAmount(int amountIn);
	//Funtion to receive the amount deposited by the customerand update the amount in the register
	//Postcondition: cashonHand = cashOnHand + amountIn

	cashRegister();
	//Default Constructor
	//Sets the cash in the register to 500 cents
	//Postcondition: cashOnHand=500

	cashRegister(int cashIn);
	//Constructor with a parameter
	//Sets the cash in the register to a specific amount
	//PostCondition: cashOnHand = cashIn;

private:
	int cashOnHand; //variable to store the cash in the register
};

int cashRegister::getCurrentBalance() const
{
	return cashOnHand;
}

void cashRegister::acceptAmount(int amountIn)
{
	cashOnHand = cashOnHand + amountIn;
}

cashRegister::cashRegister()
{
	cashOnHand = 500;
}

cashRegister::cashRegister(int cashIn)
{
	if (cashIn >= 0)
		cashOnHand = cashIn;
	else
		cashOnHand = 500;
}