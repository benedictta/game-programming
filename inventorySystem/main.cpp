#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;
typedef struct Item
{
    string name;
    int stat;
}item;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    item loot1;
    loot1.name = "Thunder Sword";
    loot1.stat = 10;

    item loot2;
    loot2.name = "Alien Gun";
    loot2.stat = 15;

    item loot3;
    loot3.name = "Shuriken";
    loot3.stat = 9;

    item loot4;
    loot4.name = "Hidden Knife";
    loot4.stat = 11;

    int jml,max_inventory,menu,hapus,n,i;
    int jml_inventory = 0;
    vector<item> loot{loot1,loot2,loot3,loot4};
    vector<item>::iterator penunjuk;
    vector<item> inventory;
    cout << "Input jumlah item: ";
    cin >> jml;
    cout << "Input Max Inventory: ";
    cin >> max_inventory;
    system("cls");
    menus:
    cout << "Menu: \n";
    cout << "1. Tampilkan inventory\n";
    cout << "2. Hapus item\n";
    cout << "3. Tambah item\n\n";
    cout << "Inventory slot = "<<jml_inventory<<"/"<<max_inventory<<"\n\n";
    cout <<"Input pilihan menu: ";
    cin >> menu;
    switch(menu)
    {
        case 1:
            if(inventory.empty())
            {
                cout << "\nInventory KOSONG !!\n";
                system("pause");
                system("cls");
                goto menus;
            }
            else
            {
                cout << "\nItem List !!\n";
                for(i = 0; i<inventory.size();i++)
                {
                    cout <<i+1 << ". Item Name: " << inventory[i].name << "\n";
                    cout << "Item Stat: "<< inventory[i].stat << "\n\n";
                }
                system("Pause");
                system("cls");
                goto menus;
            }
            break;
        case 2:
            if(inventory.empty())
            {
                cout << "\nInventory KOSONG !!\n";
                system("pause");
                system("cls");
                goto menus;
            }
            else
            {
                if(inventory.empty())
                {
                    cout << "\nInventory KOSONG !!\n";
                    system("pause");
                    system("cls");
                    goto menus;
                }
                else
                {
                    cout << "\nItem List !!\n";
                    for(i = 0; i<inventory.size();i++)
                    {
                        cout <<i+1 << ". Item Name: " << inventory[i].name << "\n";
                        cout << "Item Stat: "<< inventory[i].stat << "\n\n";
                    }
                    cout << "0 = cancel\n\n";
                    del:
                    cout << "Pilih item yang ingin di hapus: ";
                    cin >> hapus;
                    if(hapus>jml_inventory)
                    {
                        cout<<"Item does not exist\n";
                        goto del;
                    }
                    else if(hapus == 0)
                    {
                        system("cls");
                        goto menus;
                    }
                    else
                    {
                        inventory.erase(inventory.begin()+(hapus-1));
                        cout << "Item sudah dihapus\n";
                        jml_inventory--;
                        system("pause");
                        system("cls");
                        goto menus;
                    }
                }

            }
            break;
        case 3:
            if(jml_inventory == max_inventory)
            {
                cout << "Inventory anda penuh!!\n";
                system("pause");
                system("cls");
                goto menus;
            }
            else
            {
                n = rand() % jml;
                inventory.push_back(loot[n]);
                cout << "\nSelamat anda mendapatkan: \n\n";
                cout << "Item Name: " << loot[n].name << "\n";
                cout << "Item Stat: "<< loot[n].stat << "\n\n";
                jml_inventory++;
                system("pause");
                system("cls");
                goto menus;
            }
            break;

        default:
            system("cls");
            goto menus;


    }

    /*int i;
    for(i = 0; i<loot.size();i++)
    {
        cout << "Item Name: " << loot[i].name << "\n";
        cout << "Item Stat: "<< loot[i].stat << "\n\n";
    }*/

    /** vector<string> item{"Item 3","Item 4"};
    vector<string>::iterator penunjuk;
    item.push_back("Item 1");
    item.push_back("Item 2");
    for(penunjuk = item.begin(); penunjuk != item.end();++penunjuk)
    {
        cout << *penunjuk << "\n";
    }
    item.erase(item.begin()+2);
    cout<<"\n";
    for(penunjuk = item.begin(); penunjuk != item.end();++penunjuk)
    {
        cout << *penunjuk << "\n";
    }*/
    return 0;
}
