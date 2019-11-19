#include "CNodeDynamic.h"



CNodeDynamic::~CNodeDynamic()
{
}

void CNodeDynamic::vAddNewChild()
{
	CNodeDynamic *c = new CNodeDynamic;
	c->pc_parent_node = this;
	v_children.push_back(c);
}

CNodeDynamic * CNodeDynamic::pcGetChild(int iChildOffset)
{

	while (iChildOffset < 0) {
		cout << "iChildOffset < 0, prosze wprowadzic nowa wartosc" << endl;
		cin >> iChildOffset;
	}
	if (this->iGetChildrenNumber() != 0) {
		return (this->v_children[iChildOffset]);
	}
	else {
		return NULL;
	}
}

void CNodeDynamic::vPrintAllBelow()
{
	this->vPrint();
	for (int i = 0; i < this->iGetChildrenNumber(); i++)
	{

		this->v_children[i]->vPrintAllBelow();

	}
}
