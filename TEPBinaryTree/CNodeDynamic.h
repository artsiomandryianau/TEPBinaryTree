#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class  CNodeDynamic {

public:

	CNodeDynamic();
	~CNodeDynamic();

	CNodeDynamic* pcGetChild(int  iChildOffset);

	void vSetValue(int iNewVal);
	int iGetChildrenNumber();
	void  vAddNewChild();
	void  vPrint();
	void  vPrintAllBelow();

private:
	vector <CNodeDynamic*>  v_children;
	CNodeDynamic* pc_parent_node;
	int  i_val;
	const int iDEFAULT_VAL = 0;
};