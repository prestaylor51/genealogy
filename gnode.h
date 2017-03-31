/*
* File: GNODE.H
* Author:
*	Preston Taylor
* Summary:
*	This will be a node class to encapsulate
* 	the otion of a person in a genealogical tree
*/

#include <string>

#ifndef GNODE_H
#define GNODE_H

class gnode
{
	private:
		// data
		string surName;
		string givenName;
		string birth;
		string recordNum;

		// pointers
		gnode * pNext;
		gnode * pFather;
		gnode * pMother;

	public:
		gnode() : pNext(NULL), pFather(NULL), pMother(NULL) {}
		gnode(string surName, string givenName, // TODO
			  string birth, string recordNum);

		// Constructors

		// GETTERS
		// SETTERS

};

#endif // GNODE_H