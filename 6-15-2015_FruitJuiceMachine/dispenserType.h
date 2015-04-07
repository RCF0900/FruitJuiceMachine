class dispenserType
{
public:
	int getNoOfItems() const;
	int getCost() const;
	void makeSale();
	dispenserType();
	dispenserType(int setNoOfItems, int setCost);

private:
	int numberOfItems;
	int cost;
};

int dispenserType::getNoOfItems() const
{
	return numberOfItems;
}

int dispenserType::getCost() const
{
	return cost;
}

void dispenserType::makeSale()
{
	numberOfItems--;
}

dispenserType::dispenserType()
{
	numberOfItems = 50;
	cost = 50;
}

dispenserType::dispenserType(int setNoOfItems, int setCost)
{
	if (setNoOfItems >= 0)
		numberOfItems = setNoOfItems;
	else numberOfItems = 50;

	if (setCost >= 0)
		cost = setCost;
	else
		cost = 50;
}