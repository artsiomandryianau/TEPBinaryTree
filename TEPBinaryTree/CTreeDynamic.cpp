#include "CTreeDynamic.h"

CTreeDynamic::CTreeDynamic()
{
	pc_root = new CNodeDynamic;
}


CTreeDynamic::~CTreeDynamic()
{
}

void CTreeDynamic::vPrintTree()
{
	pc_root->vPrintAllBelow();
}