#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
   	setlocale(LC_ALL,"Turkish");
	
	int gsaati;
	int csaati;
	int tsaat;
	int tutar;
	
    std::cout << "Hoþgeldiniz\n\n" << std::endl;
    
    std::cout << "Lütfen giriþ saatiniz giriniz: " << std::endl;
    std::cin >> gsaati;
    
    std::cout << "Lütfen çýkýþ saatinizi giriniz: " << std::endl;
    std::cin >> csaati;
    
    tsaat = csaati - gsaati;
    
    tutar = tsaat * 8;
    
    std::cout << "Toplam saat: "+tsaat << std::endl;
	

	
    return 0;
	getch();
}

