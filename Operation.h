#ifndef OPER_HEADER
#define OPER_HEADER

class Operation {
	int id1, id2, idf;
public:
	Operation(int x, int y) : id1(x), id2(y) {};
	void max();
};

#endif
