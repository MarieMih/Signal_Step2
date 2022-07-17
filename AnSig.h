#ifndef AN_SIG_HEADER
#define AN_SIG_HEADER
#define MAX_SIZE 12
#include <vector>

using namespace std;

class AnSig {
	unsigned int id;
	unsigned int length;
	vector <double> arr;
public:
	AnSig() {}
	AnSig(int name) : id(name) {}
	AnSig(const vector <double> mass) { arr = mass; };

	void input_r(int x);
	void print() const;
	double operator () (unsigned int time) const;
	size_t get_size_array() const;
};
#endif
