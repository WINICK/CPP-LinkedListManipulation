#include <iostream>
#include <cstdlib>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
	List Test;
	int choice, input, size, position;
	bool gameOn = true;
	while (gameOn != false) {
		cout << "*******************************\n\n";
		cout << " 1 - Create a list.\n";
		cout << " 2 - Append a node into the list\n";
		cout << " 3 - Push a node into the list\n";
		cout << " 4 - Print the list.\n";
		cout << " 5 - Delete a node from the list.\n";
		cout << " 6 - Insert at specific position in the list\n";
		cout << " 7 - Sort the List\n";
		cout << " 8 - Exit.\n\n";
		cout << " Enter your choice and press return: \n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Size of the List: \n";
			cin >> size;
			for (int i = 0; i <= size; i++)
			{
				cin >> input;
				Test.AddNode(input);
				input = 0;
			}
			break;
		case 2:
			cin >> input;
			Test.AddNode(input);
			break;
		case 3:
			cin >> input;
			Test.Push(input);
			break;
		case 4:
			cout << "The List:\n\n";
			Test.PrintList();
			break;
		case 5:
			cout << "Type a node";
			cin >> input;
			Test.DeleteNode(input);
			break;
		case 6:
			cout << "Position\n";
			cin >> position;
			cout << "Data\n";
			cin >> input;
			Test.AddAtSpecified(position, input);
			break;
		case 7:
			cout << "The List:\n";
			Test.bubbleSort();
			Test.PrintList();
			break;
		case 8:
			cout << "End of Program.\n";
			gameOn = false;
			break;
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}

	}
	return 0;
}