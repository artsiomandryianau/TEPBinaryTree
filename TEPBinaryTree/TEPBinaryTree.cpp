#include "CNodeStatic.h"
#include "CTreeStatic.h"


int main()
{
	CNodeStatic c_root;
	c_root.vAddNewChild();
	c_root.vAddNewChild();
	c_root.pcGetChild(0)->vSetValue(1);
	c_root.pcGetChild(1)->vSetValue(2);
	c_root.pcGetChild(0)->vAddNewChild();
	c_root.pcGetChild(0)->vAddNewChild();
	c_root.pcGetChild(0)->pcGetChild(0)->vSetValue(11);
	c_root.pcGetChild(0)->pcGetChild(1)->vSetValue(12);
	c_root.pcGetChild(1)->vAddNewChild();
	c_root.pcGetChild(1)->vAddNewChild();
	c_root.pcGetChild(1)->pcGetChild(0)->vSetValue(21);
	c_root.pcGetChild(1)->pcGetChild(1)->vSetValue(22);
	c_root.vPrintAllBelow();
	cout << endl;
	c_root.pcGetChild(0)->pcGetChild(1)->vPrintUp();
	cout << endl;
	c_root.vPrintUp();
	cout << endl;
	CTreeStatic CTreeStatic;
	CTreeStatic.pcGetRoot()->vAddNewChild();
	CTreeStatic.pcGetRoot()->vAddNewChild();
	CTreeStatic.vPrintTree();
}
