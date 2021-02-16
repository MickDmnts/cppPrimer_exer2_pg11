#include <iostream>

/*
*Main function calls NestedComments() 
*and LegalOutputStatements().
*/

void NestedComments() //Task 1.7
{
//	/*
//	* This is an /* incorrectly nested comment.*/
//	* Everything below this point is considered source code.
//	* I wont compile.
//	* Remove the "//" before each line to see the effect.
//	*/

	std::cout << "See source code to view the error of this nested comment." << std::endl;
}

void LegalOutputStatements() //Task 1.8
{
	std::cout << "/* is legal" << std::endl;
	std::cout << "*/ is legal" << std::endl;
	//std::cout << /* "*/" */<< std::endl; //throws error
	std::cout << /* "*/" /* is legal under conditions"/*" */ << std::endl; //throws error if the above statement statement doesn't get commented out
}

int main()
{
	NestedComments();
	system("pause");

	LegalOutputStatements();

	return 0;
}