#include "CNodeStatic.h"

CNodeStatic::~CNodeStatic()
{
	
}

void CNodeStatic::vAddNewChild()
{
	CNodeStatic c;
	c.pc_parent_node = this;
	v_children.push_back(c);

}

CNodeStatic * CNodeStatic::pcGetChild(int iChildOffset)
{
	while (iChildOffset < 0) {
		cout << "iChildOffset < 0, prosze wprowadzic nowa wartosc" << endl;
		cin >> iChildOffset;
	}
	if (this->iGetChildrenNumber() != 0) {
		return &(this->v_children[iChildOffset]);
	}
	else {
		return NULL;
	}
}

void CNodeStatic::vPrintAllBelow()
{
	this->vPrint();
	for (int i = 0; i < this->iGetChildrenNumber(); i++)
	{
		
			this->v_children[i].vPrintAllBelow();
		
	}

}

void CNodeStatic::vPrintUp()
{
	this->vPrint();

	if (this->pc_parent_node != NULL)
		(this->pc_parent_node)->vPrintUp();

}