#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    int random;
    int highest;
    int tebak;
    char lagi;
    int num;
    int nyawa = 3;
    srand(static_cast<unsigned int>(time(0)));
    input:
    cout <<"----------------------------------------------------\n";
    cout << "/////////////////|GAME TEBAK ANGKA|/////////////////\n";
    cout <<"----------------------------------------------------\n\n";
    cout << "Masukan maksimal nilai (10 - 100): ";
    cin >> highest;
    if (highest < 10)
    {
        cout << "Nilai maksimal tidak boleh kurang dari 10\n";
        system("PAUSE");
        system("cls");
        goto input;
    }
    else if (highest > 100)
    {
        cout << "Nilai maksimal tidak boleh lebih dari 100\n";
        system("PAUSE");
        system("cls");
        goto input;
    }
    else
    {
        num = rand()% (highest+1);
        random = num;
    }
    cout << "Angka Random dari 0 hingga "  << highest << " sudah di pilih !!\tnyawa = " << nyawa << "\n\n";
    cout << "(cheat: angka random = " << random << ")\n\n";
    tebak:
    cout << "Input Tebakan Anda: ";
    cin >> tebak;

    if(tebak == random)
    {
        cout << "\nTebakan mu benar !!\n";
        again:
        cout << "Main lagi ? (y/n): ";
        cin >> lagi;
        if (lagi == 'y')
        {
            system("cls");
            nyawa = 3;
            goto input;
        }
        if (lagi == 'n')
        {
            cout << "Terimakasih sudah bermain !\n";
                system("PAUSE");
                return 0;
        }
        else
        {
            goto again;
        }

    }
    else
    {
        nyawa--;
        if(tebak > random)
        {
            cout<< "\nAngka terlalu besar!!\n";
        }
        if(tebak < random)
        {
            cout<< "\nAngka terlalu kecil!!\n";
        }
        cout << "Karea tebakan mu salah nyawa kamu tinggal = " << nyawa << "\n";
        if(nyawa != 0)
        {
            cout << "\n";
            goto tebak;
        }
        else
        {

        }

    }
    if(nyawa == 0)
    {
        cout << "Nyawa kamu sudah habis... game over\n";
        cout << "Main lagi ? (y/n): ";
        cin >> lagi;
        if (lagi == 'y')
        {
            system("cls");
            nyawa = 3;
            goto input;
        }
        if (lagi == 'n')
        {
            cout << "Terimakasih sudah bermain !\n";
                system("PAUSE");
                return 0;
        }
        else
        {
            goto again;
        }
    }

    return 0;
}
