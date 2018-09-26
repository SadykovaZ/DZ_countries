#include"Country.h"
#define Kaz 1
#define Rus 2
#define Usa 3
#define Capital

int main()
{
	Country KZ, RU, USA;
	KZ.enter();
	RU.enter();
	USA.enter();

	
#if Kaz==1
	KZ.print();
#endif
#if Rus>1
	RU.print();	
#endif
#if Usa<1
	USA.print();
#endif


	system("pause");
}