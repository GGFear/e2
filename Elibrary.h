/***********************************************************************
 * Module:  Elibrary.h
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:18
 * Purpose: Declaration of the class Elibrary
 ***********************************************************************/


#include <iostream>
#include <string>
#if !defined(__ClassDiagram_1_Elibrary_h)
#define __ClassDiagram_1_Elibrary_h

using namespace std;

class Elibrary
{
public:
   void use(void);

   // конструктори inline
   Elibrary() : videolecture("") {}									// конструктор за замовченням
   Elibrary(string vl, string v, string pz, string sz) : videolecture(vl), vebinari(v), prakt_zavd(pz), sam_zavd(sz) {}	// конструктор ініціалізації
   ~Elibrary() {}									// деструктор 
   // inline
   string GetVideo() const // отримати відеолекцію
   {
	   return videolecture;
   }
   string GetVeb() const  // отримати вебінари
   {
	   return vebinari;
   }
   string GetPZ() const // отримати практичні завадання
   {
	   return prakt_zavd;
   }
   string GetSZ() const // отримати самостійні завдання
   {
	   return sam_zavd;
   }
   
   void SetVideo(string); // встановити відео
   void SetVeb(string); // встановити вебінари
   void SetPZ(string); // встановити практичні завдання
   void SetSZ(string); // встановити самостійні завдання

   friend istream & operator>> (istream& is, Elibrary&);
   friend ostream & operator<< (ostream& os, const Elibrary&);

protected:
private:
	void edit(void);

   string videolecture;
   string vebinari;
   string prakt_zavd;
   string sam_zavd;
};

#endif