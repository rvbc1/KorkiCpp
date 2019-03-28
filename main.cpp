#include <iostream>
#include <conio.h>
#include "Master.h"

using namespace std;



void showAmmonutOfSlaves() {
	cout << "Ammount of slaves: " << Slave::all_slaves << endl;
}

int main() {
#ifdef _DEBUG
	cout << "Program run in debug mode" << std::endl << std::endl;
#endif // _DEBUG

	int linia_kodu = 1;

	cout << linia_kodu << " linia kodu - stworzenie 1 mastera" << endl << endl;
	linia_kodu++;
	Master * master1 = new Master();

	cout << endl << endl << linia_kodu << " linia kodu - sprawdzenie ilosci slug (zmienna statyczna)" << endl << endl;
	linia_kodu++;
	showAmmonutOfSlaves();

	cout << endl << endl << linia_kodu << " linia kodu - proba pracy na niestworoznym sludze" << endl << endl;
	linia_kodu++;
	master1->sendDynamicSalveToWork();

	cout << endl << endl << linia_kodu << " linjka kodu - dodanie slugi do mastera 1" << endl << endl;
	linia_kodu++;
	master1->addSlave("John", 2);

	cout << endl << endl << linia_kodu << " linia kodu - sprawdzenie ilosci slug (zmienna statyczna)" << endl << endl;
	linia_kodu++;
	showAmmonutOfSlaves();

	cout << endl << endl << linia_kodu << " linjka kodu - wyslanie do pracy slugi" << endl << endl;
	linia_kodu++;
	master1->sendDynamicSalveToWork();

	cout << endl << endl << linia_kodu << " linjka kodu - ponowne wyslanie do pracy slugi" << endl << endl;
	linia_kodu++;
	master1->sendDynamicSalveToWork();

	cout << endl << endl << linia_kodu << " linjka kodu - ponowne wyslanie do pracy slugi" << endl << endl;
	linia_kodu++;
	master1->sendDynamicSalveToWork();


	cout << endl << linia_kodu << " linia kodu - stworzenie 2 mastera" << endl << endl;
	linia_kodu++;
	Master * master2 = new Master();

	cout << endl << endl << linia_kodu << " linia kodu - sprawdzenie ilosci slug (zmienna statyczna)" << endl << endl;
	linia_kodu++;
	showAmmonutOfSlaves();

	cout << endl << endl << linia_kodu << " linjka kodu - dodanie slugi do mastera 2" << endl << endl;
	linia_kodu++;
	master2->addSlave("Tommy", 4);

	cout << endl << endl << linia_kodu << " linia kodu - sprawdzenie ilosci slug (zmienna statyczna)" << endl << endl;
	linia_kodu++;
	showAmmonutOfSlaves();

	cout << endl << endl << linia_kodu << " linia kodu - usuwanie mastera 1" << endl << endl;
	linia_kodu++;
	delete master1;

	cout << endl << endl << linia_kodu << " linia kodu - usuwanie mastera 2" << endl << endl;
	linia_kodu++;
	delete master2;

	

	_getch();
	return 0;
}

