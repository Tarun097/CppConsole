#include <iostream>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {

	double tip_amount = meal_cost * (static_cast<double>(tip_percent) / 100);
	double tax_amount = meal_cost * (static_cast<double>(tax_percent) / 100);

	cout << static_cast<int>(meal_cost + tax_amount + tip_amount);
}

int main()
{
	double meal_cost;
	cin >> meal_cost;

	int tip_percent;
	cin >> tip_percent;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int tax_percent;
	cin >> tax_percent;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	solve(meal_cost, tip_percent, tax_percent);

	return 0;
}
