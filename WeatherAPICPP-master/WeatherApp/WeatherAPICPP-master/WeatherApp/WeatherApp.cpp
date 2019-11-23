
#include <iostream>
#include <rapidjson/document.h>
#include <cpr/cpr.h>
#include "Weather.h";

using namespace std;

void displayIntroduction()
{
    cout << "Welcome to the Disney Weather App!\n" <<
        "Where all those visiting Disney get data on the precautions they should take regarding weather at the Parks in real time.\n\n";
}

void displayMenu()
{
    cout << "Select the Disney Theme Park you are visiting today:\n" <<
        "a: Disney Orlando Theme Park, FL.\n" <<
        "b: Disney Los Angeles Theme Park, CA.\n" <<      //change in other places
        "c: Quit.\n";       //change in other places
}

void displayMoreMenu()
{
    cout << "Would you like to see the 5-day forecast for your theme park?\n" <<
        "a: yes.\n" <<
        "b: no.\n";
}

void displayExit()
{
    cout << "Have a great time at Disney Theme Parks!\n";
}


int main(int argc, char** argv)
{
	displayIntroduction();
	displayMenu();

	bool run = true;
	
	char option;
	cin >> option;

	do 
	{
		switch (option) 
		{
			case 'a' : 
            {
            	Weather Orlando;
				Orlando.GetWeatherData("Orlando");
                Orlando.AnalyzeData();
                cin.clear();
                displayMoreMenu();
                char option2;
                cin >> option2;
                switch (option2)
                {
                    case 'a':
                    {
                        Orlando.display();
                        cin.clear();
                        displayExit();
                    }
                    
                    case 'b':
                    {
                        cin.clear();
                        displayExit();
                    }
                }
				cin.ignore(10000, '\n');
            }
                
            case 'b' :
            {
                Weather LosAngeles;
                LosAngeles.GetWeatherData("Los Angeles");
                LosAngeles.AnalyzeData();
                cin.clear();
                displayMoreMenu();
                char option2;
                cin >> option2;
                switch (option2)
                {
                    case 'a':
                    {
                        LosAngeles.display();
                        cin.clear();
                        displayExit();
                    }
                    
                    case 'b':
                    {
                        cin.clear();
                        displayExit();
                    }
                }
                cin.ignore(1000, '\n');
            }
		}
		run = false;
	} while (run);



	return 0;
}

