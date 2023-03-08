#include <iostream>;
#include <Windows.h>;

using namespace std;

int main(void) 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	//--------------------------------------------------Глобальні перемінні.

	system("color b"); //decoration
	bool pin1 = true, pin2 = true, pin3 = true, pin4 = true; //для закриття циклу.
	__int16 pincode1 = 0, pincode2 = 0, pincode3 = 0, pincode4 = 0; //Значеня для ведення пін коду.


	//--------------------------------------------------Акаунт?.
	cout << "У вас є вже акаунт?" << " вкажіть N або ж Y" << endl;
	
	char acaunt = 'o'; cin >> acaunt;
	
	switch (acaunt)
	{
	case 'Y':
		

		break;

	case 'y':
		cout << "в такому разі вкажіть пароль!" << endl; 


		break;
		
	case 'N':
		cout << "Тоді ми почнемо регистрацію." << endl;

		cout << "в такому разі вкажіть пароль!" << endl;

		//--------------------------------------------------В вод пароля.

		cout << "Вкажіть 4 значний PIN код" << endl;



		while (pin1)
		{
			cout << "    " << endl; //space
			cout << "Ви вказали:"; cin >> pincode1;

			if (pincode1 >= 10)
			{
				pincode1 = 0; pin1 = true;
				Sleep(50);
				cout << "Вказуйте будь ласка значення по одній цифрі від 0 до 9, \n Здаєтця ви вказали за надто велике або мале значення,\n не варто вказувати більше 127." << endl;
				if (pincode1 > 0)
				{
					pincode1 = 0; pin1 = true;
					cout << "Боюся що ви вказали за надто мале значення, ми встановили вам:" << pincode1 << endl;

				}
				else
				{
					cout << " ERROR - 0、В не зрозумілих випадках ми встановим вам значення 0. \n Спробуй ще раз!" << pincode1 << endl;
					pincode1 = 0;
				}
			}
			else
			{
				cout << "skip 1  " << pincode1 << endl;
				pin1 = false;
			}
		}

		while (pin2) {

			cout << "    " << endl; //space
			cout << "Ви вказали:"; cin >> pincode2;

			if (pincode2 >= 10)
			{
				pincode2 = 0; pin2 = true;
				Sleep(50);
				cout << "Вказуйте будь ласка значення по одній цифрі від 0 до 9, \n Здаєтця ви вказали за надто велике або мале значення,\n не варто вказувати більше 127." << endl;
				if (pincode2 > 0)
				{
					pincode2 = 0; pin2 = true;
					cout << "Боюся що ви вказали за надто мале значення, ми встановили вам:" << pincode2 << endl;

				}
				else
				{
					cout << " ERROR - 0、В не зрозумілих випадках ми встановим вам значення 0. \n Спробуй ще раз!" << pincode2 << endl;
					pincode2 = 0;
				}
			}
			else
			{
				cout << "skip 2  " << pincode2 << endl;
				pin2 = false;
			}

		}

		while (pin3) {

			cout << "    " << endl; //space
			cout << "Ви вказали:"; cin >> pincode3;

			if (pincode3 >= 10)
			{
				pincode3 = 0; pin3 = true;
				Sleep(50);
				cout << "Вказуйте будь ласка значення по одній цифрі від 0 до 9, \n Здаєтця ви вказали за надто велике або мале значення,\n не варто вказувати більше 127." << endl;
				if (pincode3 > 0)
				{
					pincode3 = 0; pin3 = true;
					cout << "Боюся що ви вказали за надто мале значення, ми встановили вам:" << pincode3 << endl;

				}
				else
				{
					cout << " ERROR - 0、В не зрозумілих випадках ми встановим вам значення 0. \n Спробуй ще раз!" << pincode3 << endl;
					pincode3 = 0;
				}
			}
			else
			{
				cout << "skip 3  " << pincode3 << endl;
				pin3 = false;
			}
		}


		while (pin4) {

			cout << "    " << endl; //space
			cout << "Ви вказали:"; cin >> pincode4;

			if (pincode4 >= 10)
			{
				pincode4 = 0; pin4 = true;
				Sleep(50);
				cout << "Вказуйте будь ласка значення по одній цифрі від 0 до 9, \n Здаєтця ви вказали за надто велике або мале значення,\n не варто вказувати більше 127." << endl;
				if (pincode4 > 0)
				{
					pincode4 = 0; pin4 = true;
					cout << "Боюся що ви вказали за надто мале значення, ми встановили вам:" << pincode4 << endl;

				}
				else
				{
					cout << " ERROR - 0、В не зрозумілих випадках ми встановим вам значення 0. \n Спробуй ще раз!" << pincode4 << endl;
					pincode4 = 0;
				}
			}
			else
			{
				cout << "skip 4  " << pincode4 << endl;
				pin4 = false;
			}
		}

		cout << "Ваш пароль - " << pincode1 << pincode2 << pincode3 << pincode4 << endl;

		Sleep(2000);

		cout << "Зачекайте трохи..." << endl;
		Sleep(1000);
		cout << "Шефруємо ваш PIN код:Етап 1" << endl;
		pincode1 = pincode1 + 496; pincode2 = pincode2 + 436;
		pincode3 = pincode3 + 636; pincode4 = pincode4 + 136;
		cout << "Етап:1 - Готово." << endl;

		cout << "Вітаю пароль встановлено." << endl;

		/*	pincode1 = pincode1 - 496; pincode2 = pincode2 - 436;
			pincode3 = pincode3 - 636; pincode4 = pincode4 - 136;

			cout << "Ваш пароль - " << pincode1 << pincode2 << pincode3 << pincode4 << endl;
		*/

		//розшифровка работа, ну так собі, банально.


		break;

	case 'n':
		cout << "Тоді ми почнемо регистрацію." << endl;

		cout << "в такому разі вкажіть пароль!" << endl;

		//--------------------------------------------------В вод пароля.

		cout << "Вкажіть 4 значний PIN код" << endl;



		while (pin1)
		{
			cout << "    " << endl; //space
			cout << "Ви вказали:"; cin >> pincode1;

			if (pincode1 >= 10)
			{
				pincode1 = 0; pin1 = true;
				Sleep(50);
				cout << "Вказуйте будь ласка значення по одній цифрі від 0 до 9, \n Здаєтця ви вказали за надто велике або мале значення,\n не варто вказувати більше 127." << endl;
				if (pincode1 > 0)
				{
					pincode1 = 0; pin1 = true;
					cout << "Боюся що ви вказали за надто мале значення, ми встановили вам:" << pincode1 << endl;

				}
				else
				{
					cout << " ERROR - 0、В не зрозумілих випадках ми встановим вам значення 0. \n Спробуй ще раз!" << pincode1 << endl;
					pincode1 = 0;
				}
			}
			else
			{
				cout << "skip 1  " << pincode1 << endl;
				pin1 = false;
			}
		}

		while (pin2) {

			cout << "    " << endl; //space
			cout << "Ви вказали:"; cin >> pincode2;

			if (pincode2 >= 10)
			{
				pincode2 = 0; pin2 = true;
				Sleep(50);
				cout << "Вказуйте будь ласка значення по одній цифрі від 0 до 9, \n Здаєтця ви вказали за надто велике або мале значення,\n не варто вказувати більше 127." << endl;
				if (pincode2 > 0)
				{
					pincode2 = 0; pin2 = true;
					cout << "Боюся що ви вказали за надто мале значення, ми встановили вам:" << pincode2 << endl;

				}
				else
				{
					cout << " ERROR - 0、В не зрозумілих випадках ми встановим вам значення 0. \n Спробуй ще раз!" << pincode2 << endl;
					pincode2 = 0;
				}
			}
			else
			{
				cout << "skip 2  " << pincode2 << endl;
				pin2 = false;
			}

		}

		while (pin3) {

			cout << "    " << endl; //space
			cout << "Ви вказали:"; cin >> pincode3;

			if (pincode3 >= 10)
			{
				pincode3 = 0; pin3 = true;
				Sleep(50);
				cout << "Вказуйте будь ласка значення по одній цифрі від 0 до 9, \n Здаєтця ви вказали за надто велике або мале значення,\n не варто вказувати більше 127." << endl;
				if (pincode3 > 0)
				{
					pincode3 = 0; pin3 = true;
					cout << "Боюся що ви вказали за надто мале значення, ми встановили вам:" << pincode3 << endl;

				}
				else
				{
					cout << " ERROR - 0、В не зрозумілих випадках ми встановим вам значення 0. \n Спробуй ще раз!" << pincode3 << endl;
					pincode3 = 0;
				}
			}
			else
			{
				cout << "skip 3  " << pincode3 << endl;
				pin3 = false;
			}
		}


		while (pin4) {

			cout << "    " << endl; //space
			cout << "Ви вказали:"; cin >> pincode4;

			if (pincode4 >= 10)
			{
				pincode4 = 0; pin4 = true;
				Sleep(50);
				cout << "Вказуйте будь ласка значення по одній цифрі від 0 до 9, \n Здаєтця ви вказали за надто велике або мале значення,\n не варто вказувати більше 127." << endl;
				if (pincode4 > 0)
				{
					pincode4 = 0; pin4 = true;
					cout << "Боюся що ви вказали за надто мале значення, ми встановили вам:" << pincode4 << endl;

				}
				else
				{
					cout << " ERROR - 0、В не зрозумілих випадках ми встановим вам значення 0. \n Спробуй ще раз!" << pincode4 << endl;
					pincode4 = 0;
				}
			}
			else
			{
				cout << "skip 4  " << pincode4 << endl;
				pin4 = false;
			}
		}

		cout << "Ваш пароль - " << pincode1 << pincode2 << pincode3 << pincode4 << endl;

		Sleep(2000);

		cout << "Зачекайте трохи..." << endl;
		Sleep(1000);
		cout << "Шефруємо ваш PIN код:Етап 1" << endl;
		pincode1 = pincode1 + 496; pincode2 = pincode2 + 436;
		pincode3 = pincode3 + 636; pincode4 = pincode4 + 136;
		cout << "Етап:1 - Готово." << endl;

		cout << "Вітаю пароль встановлено." << endl;

		/*	pincode1 = pincode1 - 496; pincode2 = pincode2 - 436;
			pincode3 = pincode3 - 636; pincode4 = pincode4 - 136;

			cout << "Ваш пароль - " << pincode1 << pincode2 << pincode3 << pincode4 << endl;
		*/

		//розшифровка работа, ну так собі, банально.


		break;
	}





	
			
			


	cin.get(); //not close in cmd.
}
