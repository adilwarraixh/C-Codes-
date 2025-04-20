#include <iostream>
using namespace std;

int main()
{

	//L1F24BSCS0135 {Adil}
	//L1F24BSCS0132 {Sohaib}
	//L1F24BSCS0205 {Fahad}
	//L1F24BSCS0223 {Saad}

	//Maam mera code Chat GPT se copied nahi hai !

	char choice = '\0';
	//For case-1
	
	//Arrays for storing team names

	const int teams = 6;
	const int teamsize = 50;
	char teamname[teams][teamsize] = { "Lahore Qalanders","Peshawar Zalmi",
									   "Quetta Gladiators","Islamabad United","Multan Sultans","Karachi Kings" };

	//Arrays for storing home cities

	const int cities = 6;
	const int citysize = 50;
	char cityname[cities][citysize] = { "Lahore","Peshawar","Quetta","Islamabad","Multan","Karachi" };

	//Arrays for storing home grounds 
	const int grounds = 6;
	const int groundsize = 50;
	char groundname[grounds][groundsize] = { "Gaddafi Stadium","Arbab Niaz Stadium",
											"Bugti Stadium","Rawalpindi Cricket Stadium","Multan Cricket Stadium","National Stadium" };

	// For case-2
	int groundi = 0;
	int no = 1;

	//For Case-3

	int n = 1;
	int scoreteam1 = 0;
	int scoreteam2 = 0;
	int teamwin[teams] = { 0,0,0,0,0,0 };  // For Calclating Teams Win 
	int teamlose[teams] = { 0,0,0,0,0,0 }; // For Calculating Teams Lose 
	int teampoints[teams] = { 0,0,0,0,0,0 }; // For Calculating Team Point
	int matchplayed[teams] = { 0,0,0,0,0,0 }; // 
	int YN = 0; // Yes or No . Mujhe koi acha name smj main hi nahi aya to ye rakh diya .
	bool exiting = true;
	int matchesscored = 1; // For Calculating Matches which have been marked !

	//For Case-5

	char searching = '\0';
	char searchingteam = '\0'; 
	int searchingplayer = 0; 

	const int members = 33;
	const int membersize = 50;


	//I have stored each teams Players Details Seperately in there Teams Array !
     
	//Karachi's Teams Details !
	char Karachiteam[members][membersize] = { "Muhammad Akhlaq","Batsman","32","Irfan Khan","Batsman","30","James Vince","Batsman","33",
											  "Kieron Pollard","All Rounder","42","Shan Masood","Captain","35","Mohammad Nawaz","Wicket Keeper","33" ,
	                                           "Shoaib Malik","All Rounder","45","Amir Khan","Bowler","20","Anwar Ali","Bowler","39" ,
	                                           "Imran Tahir","Bowler","42","Fawad Ali","Bowler","29"};

	//Quettas's Teams Details !
	char Quettateam[members][membersize] = { "Saud Shakeel","Batsman","19","Will Smeed","Batsman","30","Sherfane Rutherford","Batsman","33",
											  "Omair Yousuf","All Rounder","42","Rilee Rossouw","Captain","35","Sarfaraz Ahmed","Wicket Keeper","33" ,
	                                           "Khawaja Nafay","All Rounder","45","Adil Naz","Bowler","20","Mohammad Hasnain","Bowler","39" ,
	                                           "Sohail Khan","Bowler","42","Usman Qadir","Bowler","29"};


	//Multan's Teams Details !
	char Multanteam[members][membersize] = { "Dawid Malan","Batsman","32","Reeza Hendricks","Batsman","30","Muhammad Shehzad","Batsman","33",
											  "Iftikhar Ahmed","All Rounder","42","Mohammad Rizwan","Captain","35","Khushdil Shah","Wicket Keeper","33",
											   "Chris Jordan","All Rounder","45","Oshane Thomas","Bowler","20","Richard Ngarava","Bowler","39",
											   "Ali Majid","Bowler","42","Ihsanullah","Bowler","29" };

	//Islamabad's Teams Details !
	char Islamabadteam[members][membersize] = { "Alex Hales","Batsman","32","Colin Munro","Batsman","30","Haider Ali","Batsman","33",
											  "Qasim Akram","All Rounder","42","Shadab Khan","Captain","35","Azam Khan","Wicket Keeper","33" ,
	                                           "Hunain Shah","All Rounder","45","Naseem Shah","Bowler","22","Rumman Raees","Bowler","39" ,
	                                           "Shahab Khan","Bowler","42","Ubaid Shah","Bowler","29"};

	//Peshawar's Teams Details !
	char Peshawarteam[members][membersize] = { "Asif Ali","Batsman","32","Saim Ayub","Batsman","30","Aamer Jamal","Batsman","33",
											  "Dan Mousley","All Rounder","42","Babar Azam","Captain","35","Hussain Talat","Wicket Keeper","33" ,
	                                           "Tom Kohler-Cadmore","All Rounder","45","Aimal Khan","Bowler","20","Rovman Powell","Bowler","39" ,
	                                           "Lungi Ngidi","Bowler","42","Noor Ahmad","Bowler","29"};

	//Lahore's Teams Details !
	char Lahoreteam[members][membersize] = { "Abdullah Shafique","Batsman","32","Fakhar Zaman","Batsman","30","Mirza Baig","Batsman","33",
											  "David Wiese","All Rounder","42","Shaheen Afridi","Captain","35","Tom Bruce","Wicket Keeper","33" ,
	                                           "Dan Lawrence","All Rounder","45","Sikandar Raza","Bowler","20","Salman Fayyaz","Bowler","39" ,
	                                           "Syed Faridoun","Bowler","42","Salman Fayyaz","Bowler","29"};



	cout << "Welcome to the PSL Management System" << endl ;

	while (true)   // Loop to run the code until the user don't want to exit the Program . 
	{
		cout << "\n";
		cout << "1. View Teams and Home Grounds " << endl;
		cout << "2. View Match Schedule " << endl;
		cout << "3. Enter Match Results " << endl;
		cout << "4. Display Points Table " << endl;
		cout << "5. Search for Teams or Players " << endl;
		cout << "6. Exit \n\n";

		cout << "Enter Your Choice Number : ";
		cin >> choice;

		switch (choice)
		{
		case'1': // Main Case-1 !
			cout << "\nPSL Team Details: " << endl;
			cout << "--------------------------------------------------------------------------------------------------------------" << endl;
			cout << "| Team Name\t\t\t\t| Home City\t\t\t| Home Ground" << endl;
			for (int i = 0; i < teams; i++)
			{
				cout << "| " << teamname[i] << "\t\t\t";
				cout << "| " << cityname[i] << "\t\t\t";
				cout << "| " << groundname[i] << "\t\t\t";
				cout << endl;
			}
			cout << "--------------------------------------------------------------------------------------------------------------" << endl;

			break;

		case'2': // Main Case-2 !

			cout << "\n PSL Match Schedule " << endl << endl ;

			cout << "--------------------------------------------------------------------------------------------------------------" << endl;
			cout << endl;
			for (int i = 0; i < teams; i++)
			{
				for (int j = i + 1; j < teams; j++)
				{
					cout << no << ". " << teamname[i] << " VS " << teamname[j] << " at " << groundname[groundi] << endl;
					groundi = (groundi + 1) % grounds;		//to alternate grounds
					no++;
				}
			}
			cout << endl;
			cout << "--------------------------------------------------------------------------------------------------------------" << endl;



			break;

		case'3': // Main Case-3 !

			exiting = true; 

			cout << endl;

			cout << "Enter the score of the Teams !" << endl ;


			for (int i = 0; ((i < teams) && (exiting == true)) ; i++)
			{
				for (int j = i + 1; ((j < teams) && (exiting == true)); j++)
				{

					cout << "--------------------------------------------------------------------------------------------------------------\n\n";

					cout << "Match no." << n << "\n" << "Team-1 : " << teamname[i] << "\nTeam-2 : " << teamname[j] << endl << endl;
					n++;

					if (n >= matchesscored)
					{
					
					cout << "Enter the score of Team-1 : ";
					cin >> scoreteam1;
					cout << "Enter the score of Team-2 : ";
					cin >> scoreteam2;

					matchplayed[i]++;
					matchplayed[j]++;

					cout << "\n";
					if (scoreteam1 > scoreteam2)
					{
						cout << teamname[i] << " Won the Match !" << endl;
						teampoints[i] += 2;
						teamwin[i]++;
						teamlose[j]++;
					}
					if (scoreteam1 < scoreteam2)
					{
						cout << teamname[j] << " Won the Match !" << endl;
						teampoints[j] += 2;
						teamwin[j]++;
						teamlose[i]++;

					}
					cout << "\n";

				
					//For Checking if the Score Board and Game's Played are Working Ok !!
					/*

					for (int i = 0; i < teams; i++)
					{
						cout << "Game Points of " << teamname[i] << " = " << teamwin[i] << endl;
					}

					cout << "\n";

					for (int i = 0; i < teams; i++)
					{
						cout << "Game Points of " << teamname[i] << " = " << teamlose[i] << endl;
					}

					cout << "\n";

					for (int i = 0; i < teams; i++)
					{
						cout << "Match Played By " << teamname[i] << " = " << matchplayed[i] << endl;
					}

					*/

					matchesscored++;

					cout << "Do you want to exit the scoring ?" << endl;
					cout << "1. Yes " << endl;
					cout << "2. No  " << endl;
					cout << "Enter your choice : ";
					cin >> YN;

					cout << endl;

					if (YN == 1)
					{
						exiting = false;  // For Exiting the Loop , I have used to conditions in the Loop ! See in Line "150" and "152" .
					}

				    }
					
					
				}
			}

			cout << endl;

			break;

		case'4':  // Main Case-4 !

			cout << "-----------------------------------------------------------------------------------------" << endl;
			cout << "| Team Name\t\t| Matches Played|  Matches Won  | Matches Losed |  Team Points  |" << endl;
			cout << "-----------------------------------------------------------------------------------------" << endl;

			for (int i = 0; i < teams; i++)
			{
				
				cout << "| " << teamname[i] << "\t";
				cout << "|\t" << matchplayed[i] << "\t";
				cout << "|\t" << teamwin[i] << "\t";
				cout << "|\t" << teamlose[i] << "\t";
				cout << "|\t" << teampoints[i] << "\t|";

				cout << endl;

				cout << "-----------------------------------------------------------------------------------------" << endl;

			}


			break;

		case'5': // Main Case-5 !

			

				  cout << "\n";

				  exiting = true;
				  while (exiting) // Loop if User wants to see other Teams Players Details !
				  {
					  cout << "\nWhich Teams Player Details do you want to see : " << endl << endl;

					  for (int j = 1, i = 0; i < teams; j++, i++)
					  {
						  cout << j << ". " << teamname[i] << endl;
					  }

					  cout << "\nEnter Your Choice : ";
					  cin >> searchingteam;

					  switch (searchingteam)
					  {
					  case'1':  // For Team-1 Lahore Qalandars ! // Case-1 of Sub-Case-2 of Case-5 !

						  while (exiting)  // Loop if user wants to see Other Players Details of the Same Team !
						  {

							  cout << "\nPlayers of " << teamname[0] << " are as following : \n\n";

							  for (int j = 0, i = 1; i < 12; i++)
							  {
								  cout << i << ". " << Lahoreteam[j] << endl;
								  j = j + 3;
							  }

							  cout << "\nSelect the number of Player to see it's Details : ";
							  cin >> searchingplayer;


							  cout << "Name : " << Lahoreteam[(searchingplayer * 3) - 3] << endl;
							  cout << "Age  : " << Lahoreteam[(searchingplayer * 3) - 1] << endl;
							  cout << "Role : " << Lahoreteam[(searchingplayer * 3) - 2] << endl;

							  cout << "\n";
							  cout << "1. Select '1' if you want to see Other Players Details of this Team. " << endl;
							  cout << "2. Select '2' Other-wise . " << endl;
							  cout << "\nEnter your choice : ";
							  cin >> YN;

							  if (YN == 2)
							  {
								  exiting = false;
								  break;
							  }

						  }

						  break;


					  case'2':  // For Team-2 Peshawar Zalmi ! // Case-2 of Sub-Case-2 of Case-5 !

						  while (exiting)
						  {

							  cout << "\nPlayers of " << teamname[1] << " are as following : \n\n";

							  for (int j = 0, i = 1; i < 12; i++)
							  {
								  cout << i << ". " << Peshawarteam[j] << endl;
								  j = j + 3;
							  }

							  cout << "\nSelect the number of Player to see it's Details : ";
							  cin >> searchingplayer;


							  cout << "Name : " << Peshawarteam[(searchingplayer * 3) - 3] << endl;
							  cout << "Age  : " << Peshawarteam[(searchingplayer * 3) - 1] << endl;
							  cout << "Role : " << Peshawarteam[(searchingplayer * 3) - 2] << endl;

							  cout << "\n";
							  cout << "1. Select '1' if you want to see Other Players Details of this Team. " << endl;
							  cout << "2. Select '2' Other-wise . " << endl;
							  cout << "\nEnter your choice : ";
							  cin >> YN;

							  if (YN == 2)
							  {
								  exiting = false;
								  break;
							  }

						  }

						  break;

					  case'3': // For Team-3 QuettaGladiators !  // Case-3 of Sub-Case-2 of Case-5 !

						  while (exiting)
						  {

							  cout << "\nPlayers of " << teamname[2] << " are as following : \n\n";

							  for (int j = 0, i = 1; i < 12; i++)
							  {
								  cout << i << ". " << Quettateam[j] << endl;
								  j = j + 3;
							  }

							  cout << "\nSelect the number of Player to see it's Details : ";
							  cin >> searchingplayer;


							  cout << "Name : " << Quettateam[(searchingplayer * 3) - 3] << endl;
							  cout << "Age  : " << Quettateam[(searchingplayer * 3) - 1] << endl;
							  cout << "Role : " << Quettateam[(searchingplayer * 3) - 2] << endl;

							  cout << "\n";
							  cout << "1. Select '1' if you want to see Other Players Details of this Team. " << endl;
							  cout << "2. Select '2' Other-wise . " << endl;
							  cout << "\nEnter your choice : ";
							  cin >> YN;

							  if (YN == 2)
							  {
								  exiting = false;
								  break;
							  }

						  }

						  break;

					  case'4': // For Team-4 Islamabad United !  // Case-4 of Sub-Case-2 of Case-5 !


						  while (exiting)
						  {

							  cout << "\nPlayers of " << teamname[3] << " are as following : \n\n";

							  for (int j = 0, i = 1; i < 12; i++)
							  {
								  cout << i << ". " << Islamabadteam[j] << endl;
								  j = j + 3;
							  }

							  cout << "\nSelect the number of Player to see it's Details : ";
							  cin >> searchingplayer;


							  cout << "Name : " << Islamabadteam[(searchingplayer * 3) - 3] << endl;
							  cout << "Age  : " << Islamabadteam[(searchingplayer * 3) - 1] << endl;
							  cout << "Role : " << Islamabadteam[(searchingplayer * 3) - 2] << endl;

							  cout << "\n";
							  cout << "1. Select '1' if you want to see Other Players Details of this Team. " << endl;
							  cout << "2. Select '2' Other-wise . " << endl;
							  cout << "\nEnter your choice : ";
							  cin >> YN;

							  if (YN == 2)
							  {
								  exiting = false;
								  break;
							  }

						  }

						  break;


					  case'5': // For Team-5 Multan Sultan !  // Case-5 of Sub-Case-2 of Case-5 !

						  while (exiting)
						  {

							  cout << "\nPlayers of " << teamname[4] << " are as following : \n\n";

							  for (int j = 0, i = 1; i < 12; i++)
							  {
								  cout << i << ". " << Multanteam[j] << endl;
								  j = j + 3;
							  }

							  cout << "\nSelect the number of Player to see it's Details : ";
							  cin >> searchingplayer;


							  cout << "Name : " << Multanteam[(searchingplayer * 3) - 3] << endl;
							  cout << "Age  : " << Multanteam[(searchingplayer * 3) - 1] << endl;
							  cout << "Role : " << Multanteam[(searchingplayer * 3) - 2] << endl;

							  cout << "\n";
							  cout << "1. Select '1' if you want to see Other Players Details of this Team. " << endl;
							  cout << "2. Select '2' Other-wise . " << endl;
							  cout << "\nEnter your choice : ";
							  cin >> YN;

							  if (YN == 2)
							  {
								  exiting = false;
								  break;
							  }

						  }


						  break;

					  case'6': // For Team-6 Karachi Kings   // Case-6 of Sub-Case-2 of Case-5 !

						  while (exiting)
						  {

							  cout << "\nPlayers of " << teamname[5] << " are as following : \n\n";

							  for (int j = 0, i = 1; i < 12; i++)
							  {
								  cout << i << ". " << Karachiteam[j] << endl;
								  j = j + 3;
							  }

							  cout << "\nSelect the number of Player to see it's Details : ";
							  cin >> searchingplayer;


							  cout << "Name : " << Karachiteam[(searchingplayer * 3) - 3] << endl;
							  cout << "Age  : " << Karachiteam[(searchingplayer * 3) - 1] << endl;
							  cout << "Role : " << Karachiteam[(searchingplayer * 3) - 2] << endl;

							  cout << "\n";
							  cout << "1. Select '1' if you want to see Other Players Details of this Team. " << endl;
							  cout << "2. Select '2' Other-wise . " << endl;
							  cout << "\nEnter your choice : ";
							  cin >> YN;

							  if (YN == 2)
							  {
								  exiting = false;
								  break;
							  }

						  }

						  break;



					  default:
						  cout << "Enter valid choice ! " << endl;
						  break;
					  }

					  exiting = true ;

					  cout << "\n";
					  cout << "1. Select '1' if you want to see other Teams Players. " << endl;
					  cout << "2. Select '2' if you don't want to see other Teams Players. " << endl;
					  cout << "\nEnter your choice : ";
					  cin >> YN;

					  if (YN == 2)
					  {
						  exiting = false;
						  break;
					  }

				  }


		          break; 

		case'6': // For Exiting the Loop !

			cout << "Thank You For Using PSL Management System." << endl;
			cout << "Exiting the Program !" << endl;

			exit(0);  // To exit the Program .
			break;

		default:
			cout << "Enter valid choice ! " << endl;
			break;
		}


	}


	return 0;
}