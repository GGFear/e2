/***********************************************************************
 * Module:  Elibrary.cpp
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:18
 * Purpose: Implementation of the class Elibrary
 ***********************************************************************/

#include "stdafx.h"
#include "Elibrary.h"
#include <iostream>

using namespace std;

void Elibrary::SetVideo(string v) // встановити відео
{
	videolecture = v;
}
void Elibrary::SetVeb(string veb) // встановити вебінари
{
	vebinari = veb;
}
void Elibrary::SetPZ(string pz) // встановити практичні завдання
{
	prakt_zavd = pz;
}
void Elibrary::SetSZ(string sz) // встановити самостійні завдання
{
	sam_zavd = sz;
}

void Elibrary::use(void)
{
	cout << "Elibrary was used." << endl;
	if (true)
	{
		edit();
	}
}


void Elibrary::edit(void)
{
	cout << "Elibrary was edited." << endl;
}

istream& operator >> (istream& is, Elibrary & cl)
{
	string video, veb;

	cout << "\nEnter videolecture: ";

	is >> video;
	cl.SetVideo(video);

	cout << "Enter vebinari: ";

	is >> veb;
	cl.SetVeb(veb);

	return is;
}


ostream& operator<<(std::ostream& os, const Elibrary & cl)
{
	os << "\nCVideolecture: ";
	os << cl.GetVideo();
	os << "\nCVebinari: ";
	os << cl.GetVeb();
	return os;
}