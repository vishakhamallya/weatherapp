// WeatherApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Install cpr (c requests for people library)
// and rapidJSON. 
#include <iostream>
#include <rapidjson/document.h>
//#include <rapidjson/writer.h>
//#include <rapidjson/stringbuffer.h>
#include <cpr/cpr.h>
#include "Weather.h";
#include "UI.h";

using namespace std;

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
                Orlando.AnalyzeData;
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
                LosAngeles.AnalyzeData;
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

