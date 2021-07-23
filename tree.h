#pragma once



//////////////////////////////////////////////////////////////////////
struct Node
{
	Node(const char symbol, const int count) 
		: letter(symbol)
		, freq(count)
		, left(nullptr)
		, right(nullptr)
	{}

	Node(Node* lhs, Node* rhs)
		: letter('\0')
		, freq(lhs->freq + rhs->freq)
		, left(lhs)
		, right(rhs)
	{}

	char letter;
	unsigned freq;
	Node* left;
	Node* right;
};

//////////////////////////////////////////////////////////////////////
Node* newNode(const char symbol, const unsigned count);

//////////////////////////////////////////////////////////////////////
Node* newNode(Node* left, Node* right);

