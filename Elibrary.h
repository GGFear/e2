/***********************************************************************
 * Module:  Elibrary.h
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:18
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

   // ������������ inline
   Elibrary() : videolecture("") {}									// ����������� �� �����������
   Elibrary(string vl, string v, string pz, string sz) : videolecture(vl), vebinari(v), prakt_zavd(pz), sam_zavd(sz) {}	// ����������� �����������
   ~Elibrary() {}									// ���������� 
   // inline
   string GetVideo() const // �������� ����������
   {
	   return videolecture;
   }
   string GetVeb() const  // �������� �������
   {
	   return vebinari;
   }
   string GetPZ() const // �������� �������� ���������
   {
	   return prakt_zavd;
   }
   string GetSZ() const // �������� �������� ��������
   {
	   return sam_zavd;
   }
   
   void SetVideo(string); // ���������� ����
   void SetVeb(string); // ���������� �������
   void SetPZ(string); // ���������� �������� ��������
   void SetSZ(string); // ���������� �������� ��������

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