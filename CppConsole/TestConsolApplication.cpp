
#include <iostream>
using namespace std;

int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}
// Sorting a no. using qsort
int main()
{
	int a[10];
	int n;
	cout << "Enter a no.:";
	cin >> n;
	cout << "Enter "<<n<<" no.s:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	qsort(a, n, sizeof(int), compare);
	cout << "Sorted no.s are: ";
	for(int i = 0; i < n; i++)
		cout << a[i]<<" ";

}
