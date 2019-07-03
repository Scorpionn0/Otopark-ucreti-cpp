
#include <iostream>

using namespace std;

int main()
{
   	setlocale(LC_ALL,"Turkish");
	
	int gsaati;
	int csaati;
	int tsaat;
	int tutar;
	
    std::cout << "Hoşgeldiniz\n\n" << std::endl;
    
    std::cout << "Lütfen giriş saatiniz giriniz: " << std::endl;
    std::cin >> gsaati;
    
    std::cout << "Lütfen çıkış saatinizi giriniz: " << std::endl;
    std::cin >> csaati;
    
    tsaat = csaati - gsaati;
    
    tutar = tsaat * 8;
    
    std::cout << "Toplam saat: "+tsaat << std::endl;
	

	
    return 0;
}

