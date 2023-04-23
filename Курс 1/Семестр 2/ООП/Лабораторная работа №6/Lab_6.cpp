#include "Set.cpp"
using namespace std;

int main() {
	Set s1, s2;

	(((s1 |= 2) |= 3) |= 1) |= 1;
	(((s2 |= 2) |= 1) |= 3);

	cout << "s1: " << s1;
	cout << "s2: " << s2;

	if (s1<3)
		cout << "s1 < 3\n";
	else
		cout << "s1 != 3\n";
	if (s1<4)
		cout << "s2 < 4\n";
	else
		cout << "s2 != 4\n";
	
	if (s1 != s2)
		cout << "s1 != s2\n";
	else
		cout << "s1 == s2\n";

	cout << "s1[2]: " << s1[2] << "\n";

	Set s;

	((s |= 2) |= 5) |= 10;
	cout << "s: " << s;

	cout << *(s.first()) << "\n";

	Iterator i = a.first();
	i + 2;
	cout << *i << "\n";

	for (i = s.first(); i != s.last(); i++)
		cout << *i << " ";

	return 0;
}
