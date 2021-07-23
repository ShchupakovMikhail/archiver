#include "tree.h"



//////////////////////////////////////////////////////////////////////
Node* newNode(const char symbol, const unsigned count)
{
	return new Node(symbol, count);
}

