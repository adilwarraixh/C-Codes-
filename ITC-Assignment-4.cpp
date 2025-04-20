#include <iostream>
using namespace std;


int main()
{
	int entries = 50;
	const int size = 100;
	int rollno[size] = { 25, 45, 66, 12, 89, 78, 32, 21, 54, 90, 33, 88, 77, 11, 44, 99, 55, 22, 18, 34,
	 40, 56, 73, 28, 67, 13, 19, 48, 31, 27, 16, 75, 63, 84, 14, 29, 46, 37, 68, 85, 30, 24, 10, 35, 39,
	43, 26, 15, 41, 50 };

	float midterm[size] = { 10.5, 8, 36, 15, 25, 22, 18, 12, 14, 17, 13, 20, 24, 19, 26, 27, 31, 21, 9, 29,
	23, 25.5, 18, 22, 27, 19, 11, 17, 15.5, 16, 14, 28, 12.5, 24.5, 14.5, 20, 22, 21, 30, 19, 18.5, 10, 16,
	15.5, 13.5, 11.5, 14, 12, 17.5 };

	float finalterm[size] = { 55, 55, 75.5, 45, 88, 92, 63, 50, 78, 81, 74, 85, 89, 48, 68, 90, 72, 60, 49, 73,
	77, 82, 84, 62, 79, 55, 53, 67, 66, 58, 51, 88, 61, 64, 50, 69, 70, 54, 62, 80, 52, 56, 40, 61, 71, 65, 57,
	59, 68, 76 };

	int classes[size] = { 6, 7, 6, 5, 8, 9, 6, 5, 7, 8, 6, 8, 7, 5, 6, 9, 7, 5, 5, 6, 7, 8, 8, 6, 7, 5, 5, 6, 5, 6, 5,
	8, 6, 7, 5, 6, 6, 5, 6, 8, 5, 5, 4, 6, 6, 6, 5, 5, 6, 7 };

	char grades[size]{};
	for (int i = 0; i < entries; i++)
	{
		if (finalterm[i] < 50)
		{
			grades[i] = 'F';
		}
		if (finalterm[i] <= 59 && finalterm[i] >= 50)
		{
			grades[i] = 'D';
		}
		if (finalterm[i] <= 72 && finalterm[i] >= 60)
		{
			grades[i] = 'C';
		}
		if (finalterm[i] <= 85 && finalterm[i] >= 73)
		{
			grades[i] = 'B';
		}
		if (finalterm[i] >= 86)
		{
			grades[i] = 'A';
		}

	}

	int temprollno = 0;
	int tempclass = 0;
	float tempmidterm = 0;
	float tempfinalterm = 0;
	char tempgrades = 0;

	int choice = 0;


	int newrollno = 0;
	bool unique = true;
	int delrollno = 0;
	int findingindex = 0;
	float input11 = 0, input12 = 0, input13 = 0, input14 = 0;
	char input15 = '\0', input16 = '\0', input17 = '\0', input18 = '\0';

	while (true)
	{
		cout << "1.  Sorting in ascending order according to roll number wise" << endl;
		cout << "2.  Sorting in descending order according to roll number wise" << endl;
		cout << "3.  Sorting in ascending order according to midterm marks" << endl;
		cout << "4.  Sorting in descending order according to midterm marks" << endl;
		cout << "5.  Sorting in ascending order according to finalterm marks" << endl;
		cout << "6.  Sorting in descending order according to finalterm marks" << endl;
		cout << "7.  Sorting in ascending order according to grades" << endl;
		cout << "8.  Sorting in descending order according to grades" << endl;
		cout << "9.  Entering new student" << endl;
		cout << "10. Deleting a student" << endl;
		cout << "11. Showing final term marks greater than X (descending order)" << endl;
		cout << "12. Showing final term marks greater than X (ascending order)" << endl;
		cout << "13. Showing final term marks lesser than X (descending order)" << endl;
		cout << "14. Showing final term marks lesser than X (ascending order)" << endl;
		cout << "15. Showing Grades greater than X (descending order)" << endl;
		cout << "16. Showing Grades greater than X (ascending order)" << endl;
		cout << "17. Showing Grades lesser than X (descending order)" << endl;
		cout << "18. Showing Grades lesser than X (ascending order)" << endl;
		cout << "E.  Exit the programme(e or E)" << endl;


		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 'e' || choice == 'E')
		{
			cout << "Thanks For using our programme\nExiting the programme" << endl;
			exit(0);
		}

		switch (choice)
		{
		case 1:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (rollno[j] > rollno[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}

			for (int k = 0; k < entries; k++)
			{
				cout << "Roll no: " << rollno[k] << "\t";
				cout << "Midterm Marks: " << midterm[k] << "\t";
				cout << "Finalterm Marks : " << finalterm[k] << "\t";
				cout << "Class: " << classes[k] << "\t";
				cout << "Grades: " << grades[k] << endl;
			}
			cout << endl;
			break;
		case 2:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (rollno[j] < rollno[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}

			for (int k = 0; k < entries; k++)
			{
				cout << "Roll no: " << rollno[k] << "\t";
				cout << "Midterm Marks: " << midterm[k] << "\t";
				cout << "Finalterm Marks : " << finalterm[k] << "\t";
				cout << "Class: " << classes[k] << "\t";
				cout << "Grades: " << grades[k] << endl;
			}
			cout << endl;
			break;
		case 3:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (midterm[j] > midterm[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}

			for (int k = 0; k < entries; k++)
			{
				cout << "Roll no: " << rollno[k] << "\t";
				cout << "Midterm Marks: " << midterm[k] << "\t";
				cout << "Finalterm Marks : " << finalterm[k] << "\t";
				cout << "Class: " << classes[k] << "\t";
				cout << "Grades: " << grades[k] << endl;
			}
			cout << endl;
			break;
		case 4:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (midterm[j] < midterm[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}

			for (int k = 0; k < entries; k++)
			{
				cout << "Roll no: " << rollno[k] << "\t";
				cout << "Midterm Marks: " << midterm[k] << "\t";
				cout << "Finalterm Marks : " << finalterm[k] << "\t";
				cout << "Class: " << classes[k] << "\t";
				cout << "Grades: " << grades[k] << endl;
			}
			cout << endl;
			break;
		case 5:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (finalterm[j] > finalterm[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}

			for (int k = 0; k < entries; k++)
			{
				cout << "Roll no: " << rollno[k] << "\t";
				cout << "Midterm Marks: " << midterm[k] << "\t";
				cout << "Finalterm Marks : " << finalterm[k] << "\t";
				cout << "Class: " << classes[k] << "\t";
				cout << "Grades: " << grades[k] << endl;
			}
			cout << endl;
			break;
		case 6:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (finalterm[j] < finalterm[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}

			for (int k = 0; k < entries; k++)
			{
				cout << "Roll no: " << rollno[k] << "\t";
				cout << "Midterm Marks: " << midterm[k] << "\t";
				cout << "Finalterm Marks : " << finalterm[k] << "\t";
				cout << "Class: " << classes[k] << "\t";
				cout << "Grades: " << grades[k] << endl;
			}
			cout << endl;
			break;
		case 7:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (grades[j] > grades[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}

			for (int k = 0; k < entries; k++)
			{
				cout << "Roll no: " << rollno[k] << "\t";
				cout << "Midterm Marks: " << midterm[k] << "\t";
				cout << "Finalterm Marks : " << finalterm[k] << "\t";
				cout << "Class: " << classes[k] << "\t";
				cout << "Grades: " << grades[k] << endl;
			}
			cout << endl;
			break;
		case 8:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (grades[j] < grades[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}

			for (int k = 0; k < entries; k++)
			{
				cout << "Roll no: " << rollno[k] << "\t";
				cout << "Midterm Marks: " << midterm[k] << "\t";
				cout << "Finalterm Marks : " << finalterm[k] << "\t";
				cout << "Class: " << classes[k] << "\t";
				cout << "Grades: " << grades[k] << endl;
			}
			break;
		case 9:
			cout << "Enter the new roll number: ";
			cin >> newrollno;

			for (int i = 0; i < entries; i++)
			{
				if (rollno[i] == newrollno)
				{
					unique = false;
					break;
				}
			}
			if (!unique)
			{
				cout << "Roll number already exists. Please enter a unique roll number." << endl;
			}
			else
			{
				rollno[entries] = newrollno;
				cout << "Enter midterm marks: ";
				cin >> midterm[entries];
				cout << "Enter finalterm marks: ";
				cin >> finalterm[entries];
				cout << "Enter class: ";
				cin >> classes[entries];
				if (finalterm[entries] < 50)
				{
					grades[entries] = 'F';
				}
				if (finalterm[entries] <= 59 && finalterm[entries] >= 50)
				{
					grades[entries] = 'D';
				}
				if (finalterm[entries] <= 72 && finalterm[entries] >= 60)
				{
					grades[entries] = 'C';
				}
				if (finalterm[entries] <= 85 && finalterm[entries] >= 73)
				{
					grades[entries] = 'B';
				}
				if (finalterm[entries] >= 86)
				{
					grades[entries] = 'A';
				}

				entries++;
				cout << "Student Added Successfully" << endl;
			}
			break;
		case 10:
			cout << "Enter a roll no to del: ";
			cin >> delrollno;

			for (int i = 0; i < entries; i++)
			{
				if (rollno[i] == delrollno)
				{
					findingindex = i;
					break;
				}
			}
			if (findingindex != 0)
			{
				for (int j = findingindex; j < entries; j++)
				{
					rollno[j] = rollno[j + 1];
					midterm[j] = midterm[j + 1];
					finalterm[j] = finalterm[j + 1];
					classes[j] = classes[j + 1];
				}
				entries--;
				cout << "The number has been deleted" << endl;
				cout << endl;
			}
			else
			{
				cout << "Entered roll no don't exist" << endl;
			}

			cout << endl;
			break;
		case 11:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (finalterm[j] < finalterm[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}
			cout << "Enter a final term marks (1-100): ";
			cin >> input11;
			for (int i = 0; i < entries; i++)
			{
				if (input11 < finalterm[i])
				{
					cout << "Roll no: " << rollno[i] << "\t";
					cout << "Midterm Marks: " << midterm[i] << "\t";
					cout << "Finalterm Marks : " << finalterm[i] << "\t";
					cout << "Class: " << classes[i] << "\t";
					cout << "Grades: " << grades[i] << endl;
				}
			}
			cout << endl;
			break;
		case 12:

			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (finalterm[j] > finalterm[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}
			cout << "Enter a final term marks (1-100): ";
			cin >> input12;
			for (int i = 0; i < entries; i++)
			{
				if (input12 < finalterm[i])
				{
					cout << "Roll no: " << rollno[i] << "\t";
					cout << "Midterm Marks: " << midterm[i] << "\t";
					cout << "Finalterm Marks : " << finalterm[i] << "\t";
					cout << "Class: " << classes[i] << "\t";
					cout << "Grades: " << grades[i] << endl;
				}
			}
			cout << endl;
			break;
		case 13:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (finalterm[j] < finalterm[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}
			cout << "Enter a final term marks (1-100): ";
			cin >> input13;
			for (int i = 0; i < entries; i++)
			{
				if (input13 >= finalterm[i])
				{
					cout << "Roll no: " << rollno[i] << "\t";
					cout << "Midterm Marks: " << midterm[i] << "\t";
					cout << "Finalterm Marks : " << finalterm[i] << "\t";
					cout << "Class: " << classes[i] << "\t";
					cout << "Grades: " << grades[i] << endl;
				}
			}
			cout << endl;
			break;
		case 14:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (finalterm[j] > finalterm[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}
			cout << "Enter a final term marks (1-100): ";
			cin >> input14;
			for (int i = 0; i < entries; i++)
			{
				if (input14 >= finalterm[i])
				{
					cout << "Roll no: " << rollno[i] << "\t";
					cout << "Midterm Marks: " << midterm[i] << "\t";
					cout << "Finalterm Marks : " << finalterm[i] << "\t";
					cout << "Class: " << classes[i] << "\t";
					cout << "Grades: " << grades[i] << endl;
				}
			}
			cout << endl;
			break;
		case 15:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (grades[j] < grades[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}
			cout << "Enter the grade(A,B,C,D,F): ";
			cin >> input15;
			for (int j = 0; j < entries; j++)
			{
				if (input15 >= grades[j])
				{
					cout << "Roll no: " << rollno[j] << "\t";
					cout << "Midterm Marks: " << midterm[j] << "\t";
					cout << "Finalterm Marks : " << finalterm[j] << "\t";
					cout << "Class: " << classes[j] << "\t";
					cout << "Grades: " << grades[j] << endl;
				}
			}

			cout << endl;
			break;
		case 16:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (grades[j] > grades[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}
			cout << "Enter the grade(A,B,C,D,F): ";
			cin >> input16;
			for (int j = 0; j < entries; j++)
			{
				if (grades[j] >= input16)
				{
					cout << "Roll no: " << rollno[j] << "\t";
					cout << "Midterm Marks: " << midterm[j] << "\t";
					cout << "Finalterm Marks : " << finalterm[j] << "\t";
					cout << "Class: " << classes[j] << "\t";
					cout << "Grades: " << grades[j] << endl;
				}
			}

			cout << endl;
			break;
		case 17:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (grades[j] < grades[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}
			cout << "Enter the grade(A,B,C,D,F): ";
			cin >> input17;
			for (int j = 0; j < entries; j++)
			{
				if (input17 >= grades[j])
				{
					cout << "Roll no: " << rollno[j] << "\t";
					cout << "Midterm Marks: " << midterm[j] << "\t";
					cout << "Finalterm Marks : " << finalterm[j] << "\t";
					cout << "Class: " << classes[j] << "\t";
					cout << "Grades: " << grades[j] << endl;
				}
			}

			cout << endl;
			break;
		case 18:
			for (int i = 0; i < entries; i++)
			{
				for (int j = 0; j < entries - 1; j++)
				{
					if (grades[j] > grades[j + 1])
					{
						temprollno = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temprollno;

						tempmidterm = midterm[j];
						midterm[j] = midterm[j + 1];
						midterm[j + 1] = tempmidterm;

						tempfinalterm = finalterm[j];
						finalterm[j] = finalterm[j + 1];
						finalterm[j + 1] = tempfinalterm;

						tempclass = classes[j];
						classes[j] = classes[j + 1];
						classes[j + 1] = tempclass;

						tempgrades = grades[j];
						grades[j] = grades[j + 1];
						grades[j + 1] = tempgrades;
					}
				}
			}
			cout << "Enter the grade(A,B,C,D,F): ";
			cin >> input18;
			for (int j = 0; j < entries; j++)
			{
				if (grades[j] <= input18)
				{
					cout << "Roll no: " << rollno[j] << "\t";
					cout << "Midterm Marks: " << midterm[j] << "\t";
					cout << "Finalterm Marks : " << finalterm[j] << "\t";
					cout << "Class: " << classes[j] << "\t";
					cout << "Grades: " << grades[j] << endl;
				}
			}

			cout << endl;
			break;
		default:
			exit(0);
			break;
		}
	}

	return 0;
}
