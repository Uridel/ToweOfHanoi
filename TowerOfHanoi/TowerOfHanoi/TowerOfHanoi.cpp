
#include "TowerOfHanoi.h"
#include <iostream>
using namespace std;



/// <summary>
/// Mains this instance.
/// </summary>
/// <returns>int.</returns>
int main()
{
	cout << "Enter the number of disks : " ;
	cin >> num;
	if (cin.fail())
	{
		cout << "Please enter any number using 0-9 keys to determine disk size: " <<endl;
		cin >> num;
	}
	cout << "The sequence of moves involved in the Tower of Hanoi are " << endl;
	towers(num, 'A', 'C', 'B');
	cout << "The number of steps it took " << *pMoves << endl;
	system("pause");
	return 0;
}


/// <summary>
/// Towers the specified number of disks.
///Source of inspiration: https://en.wikipedia.org/wiki/Tower_of_Hanoi
/// </summary>
/// <param name="numberOfDisks">The number of disks.</param>
/// <param name="sourcePeg">The source peg.</param>
/// <param name="targetPeg">The target peg.</param>
/// <param name="sparePeg">The spare peg.</param>
void towers(int num, char sourcePeg, char targetPeg, char sparePeg)
{
	if (num == 1)
	{
		cout << "Move disk 1 from  " << sourcePeg << " to  " << targetPeg << endl;
		
		return;
		
	}
	towers(num - 1, sourcePeg, sparePeg, targetPeg);
	cout << "Move disk " << num << " from  " << sourcePeg << " to  " << targetPeg << endl;
	steps++;
	towers(num - 1, sparePeg, targetPeg, sourcePeg);
	
	
}