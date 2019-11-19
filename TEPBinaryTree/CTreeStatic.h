#ifndef CTREESTATIC_H
#define CTREESTATIC_H

#include "CNodeStatic.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CTreeStatic
{
public:
	CTreeStatic();
	~CTreeStatic();
	CNodeStatic *pcGetRoot() { return(&c_root); }
	void vPrintTree();
private:
	CNodeStatic c_root;
};
#endif
