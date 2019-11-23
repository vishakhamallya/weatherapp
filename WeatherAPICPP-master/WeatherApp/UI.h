#pragma once
#include <iostream>
using namespace std;

//just inlining some stuff to do with console 

void displayIntroduction()
{
	cout << "Welcome to the Disney Weather App!\n" <<
		"Where all those visiting Disney get data on the precautions they should take regarding weather at the Parks in real time.\n\n";
}

void displayMenu()
{
	cout << "Select the Disney Theme Park you are visiting today:" <<
		"a: Disney Orlando Theme Park, FL.\n" <<
		"b: Disney Los Angeles Theme Park, CA.\n" <<      //change in other places
		"c: Quit.\n";       //change in other places
}

void displayMoreMenu()
{
    cout << "Would you like to see the 5-day forecast for your theme park?" <<
        "a: yes." <<
        "b: no.";
}

void displayExit()
{
    cout << "Have a great time at Disney Theme Parks!";
}

