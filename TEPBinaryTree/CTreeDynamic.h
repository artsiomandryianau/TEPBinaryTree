#ifndef CTREEDYNAMIC_H
#define CTREEDYNAMIC_H

#include "CNodeDynamic.h"

using namespace std;
class CTreeDynamic
{
public:
	CTreeDynamic();
	~CTreeDynamic();

	CNodeDynamic *pcGetRoot() 
	{ 
		return(pc_root); 
	}
	void vPrintTree();

private:
	CNodeDynamic *pc_root;
};
#endif