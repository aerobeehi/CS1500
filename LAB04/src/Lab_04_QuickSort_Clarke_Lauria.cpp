#include <iostream>
#include <string>
using namespace std;

void displayAllApplicationNames(string appNames[], int appCount);
void swapAppNames(int appIndex1, int appIndex2, string appNames[]);
int pivot(int first, int last, string appNames[]);
void quickSort(int first, int last, string appNames[]);

int main()
{
	string appNames[] =
	{ "Pages", "Keynote", "Numbers", "Word", "PowerPoint", "Excel", "Documents",
			"Presentation", "Sheets" };

	displayAllApplicationNames(appNames, 9);
	swapAppNames(3, 6, appNames);
	displayAllApplicationNames(appNames, 9);

//	pivot(0, 8, appNames);
	quickSort(0, 8, appNames);
	displayAllApplicationNames(appNames, 9);

	return 0;
}

void displayAllApplicationNames(string appNames[], int appCount)
{
	cout << "\nApplications\n";
	for (int i = 0; i < appCount; i++)
	{
		cout << "(" << i + 1 << ") " << appNames[i] << "\n";
	}
}

void swapAppNames(int appIndex1, int appIndex2, string appNames[])
{
	string temporaryString;

	temporaryString = appNames[appIndex1];
	appNames[appIndex1] = appNames[appIndex2];
	appNames[appIndex2] = temporaryString;
}

int pivot(int first, int last, string appNames[])
{
	string pivotValue;
	int pivotIndex;

	pivotIndex = first;
	pivotValue = appNames[first];

	for (int i = first + 1; i <= last; i++)
	{
		if (appNames[i] < pivotValue)
		{
			pivotIndex++;
			swapAppNames(i, pivotIndex, appNames);
		}
	}
	swapAppNames(first, pivotIndex, appNames);
	return pivotIndex;
}

void quickSort(int first, int last, string appNames[])
{
	int pivotIndex;

	if (first < last)
	{
		pivotIndex = pivot(first, last, appNames);
		quickSort(first, pivotIndex - 1, appNames);
		quickSort(pivotIndex + 1, last, appNames);
	}
}




/*
 * 	if (appNames[last] < appNames[last - 1])
 {
 cout << "\nswaptime!\n";
 return last;
 }
 else
 {
 return pivot(first, last - 1, appNames);
 }
 return 0;

 //////

 int swapIndex;

 swapIndex = pivot(first, last, appNames);

 swapAppNames(swapIndex, swapIndex - 1, appNames);

 }


 */
