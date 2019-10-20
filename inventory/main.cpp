#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct Item
{
    char name[20];
    int stat;
}items;
int main()
{
    items isi[10];
    int a,b,c,i,j,k;
    int terhebat,terlemah,indeks,indeks2;
    int start;
    char confirm;
    start = -1;
    i = 0;
    c = 0;
    input:
        while(start !=0)
        {
            cout << "Masukan Nama Item: ";
            cin >> isi[i].name;
            cout << "Masukan Stat: ";
            cin >> isi[i].stat;
            c++;
            system("cls");
            for(b=0;b<c;b++)
            {
                cout << "ITEM " << b+1 << "\n";
                cout << "Item Name: " << isi[b].name << "\n";
                cout << "Item Stat: " << isi[b].stat << "\n\n";
            }
            terlemah = isi[0].stat;
            terhebat = isi[0].stat;
            for(j=0;j<c;j++)
            {
                if(terlemah>=isi[j].stat)
                {
                    terlemah = isi[j].stat;
                    indeks = j;
                }
            }
            for(k=0;k<c;k++)
            {
                if(terhebat<=isi[k].stat)
                {
                    terhebat = isi[k].stat;
                    indeks2 = k;
                }
            }
            cout << "------------------------------------------\n";
            cout << "Item Terlemah\n";
            cout << "Item Name: " << isi[indeks].name << "\n";
            cout << "Item Stat: " << isi[indeks].stat << "\n\n";

            cout << "Item Terhebat\n";
            cout << "Item Name: " << isi[indeks2].name << "\n";
            cout << "Item Stat: " << isi[indeks2].stat << "\n\n";
            if(c>1)
            {
                cout << "Item Sebelumnya\n";
                cout << "Item Name: " << isi[c-2].name << "\n";
                cout << "Item Stat: " << isi[c-2].stat << "\n\n";
            }
            else
            {
                cout << "Item Sebelumnya = NOTHING\n\n";
            }
            again:
                cout << "Input Item Lagi ? y/n: ";
                cin >> confirm;
                if(confirm == 'y')
                {
                    a = 1;
                    i++;
                }
                else if(confirm == 'n')
                    a = 0;
                else
                    a = 2;
                switch(a)
                {
                    case 1:
                        system("cls");
                        for(b=0;b<c;b++)
                        {
                            cout << "ITEM " << b+1 << "\n";
                            cout << "Item Name: " << isi[b].name << "\n";
                            cout << "Item Stat: " << isi[b].stat << "\n\n";
                        }

                        cout << "------------------------------------------\n";
                        cout << "Item Terlemah\n";
                        cout << "Item Name: " << isi[indeks].name << "\n";
                        cout << "Item Stat: " << isi[indeks].stat << "\n\n";

                        cout << "Item Terhebat\n";
                        cout << "Item Name: " << isi[indeks2].name << "\n";
                        cout << "Item Stat: " << isi[indeks2].stat << "\n\n";
                        if(c>1)
                        {
                            cout << "Item Sebelumnya\n";
                            cout << "Item Name: " << isi[c-2].name << "\n";
                            cout << "Item Stat: " << isi[c-2].stat << "\n\n";
                        }
                        else
                        {
                            cout << "Item Sebelumnya = NOTHING\n\n";
                        }
                        cout << "\n";
                        goto input;
                        break;

                    case 0:
                        system("cls");
                        for(b=0;b<c;b++)
                        {
                            cout << "ITEM " << b+1 << "\n";
                            cout << "Item Name: " << isi[b].name << "\n";
                            cout << "Item Stat: " << isi[b].stat << "\n\n";
                        }

                        cout << "------------------------------------------\n";
                        cout << "Item Terlemah\n";
                        cout << "Item Name: " << isi[indeks].name << "\n";
                        cout << "Item Stat: " << isi[indeks].stat << "\n\n";

                        cout << "Item Terhebat\n";
                        cout << "Item Name: " << isi[indeks2].name << "\n";
                        cout << "Item Stat: " << isi[indeks2].stat << "\n\n";
                        if(c>1)
                        {
                            cout << "Item Sebelumnya\n";
                            cout << "Item Name: " << isi[c-2].name << "\n";
                            cout << "Item Stat: " << isi[c-2].stat << "\n\n";
                        }
                        else
                        {
                            cout << "Item Sebelumnya = NOTHING\n\n";
                        }
                        system("PAUSE");
                        start = 0;
                        break;
                    default:
                        goto again;

                }
        }
    return 0;
}
