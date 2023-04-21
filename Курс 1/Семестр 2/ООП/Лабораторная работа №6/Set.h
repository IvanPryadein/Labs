class Set {
public:
	Set(int size, int k = 0);
	Set(const Set& other);
	~Set();

	Set& operator =(const Set& other);
	int& operator [](int index);
	bool operator !=(const Set& other);
	bool operator <(int key);

	friend ostream& operator <<(ostream& out, const Set& other);
	friend istream& operator >>(istream& in, const Set& other);

private:
	int minNumber;
	int maxNUmber;
	int* element;
};