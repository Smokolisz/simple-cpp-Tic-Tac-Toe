#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>

using namespace std;

char wybor;
char a;
char znak[9]; //dlaczego jak jest 8 nie dzia³¹? lol
char pole[8];
int c;
string kolejka="Kolejka gracza pierwszego";
string win;

int main()
{
    /*            A           B           C
    cout << "           |           |           " << endl;
    cout << "           |           |           " << endl;
  1 cout << "           |           |           " << endl;
    cout << "           |           |           " << endl;
    cout << "           |           |           " << endl;
    cout << "-----------+-----------+-----------" << endl;
    cout << "           |           |           " << endl;
    cout << "           |           |           " << endl;
  2 cout << "           |           |           " << endl;
    cout << "           |           |           " << endl;
    cout << "           |           |           " << endl;
    cout << "-----------+-----------+-----------" << endl;
    cout << "           |           |           " << endl;
    cout << "           |           |           " << endl;
  3 cout << "           |           |           " << endl;
    cout << "           |           |           " << endl;
    cout << "           |           |           " << endl;  */
    //By Adam Czwordon
    //Napisane przez Adam Czwordon
    srand(time(NULL));

    c:
    system("cls");

    for(int z=0; z<8; z++)
    {
        //cout<<znak[z]<<endl<<pole[z]<<endl;
        pole[z]=a;
    }

    cout<<"Wybierz tryb gry:\n1. Z komputerem\n2. Dw\242ch graczy\n\n\n\nBy Adam Czwordon";
    wybor=getch();
    system("cls");

    switch(wybor)
    {
    case('1'):
        {
            ///GRA Z KOMPUTEREM///
            while(true)
            {
                system("cls");

                ///-========-plansza-========-///
                //             A           B           C
                cout << "      A           B           C     \n" << endl;
                cout << "            |           |           " << endl;
                cout << "            |           |           " << endl;
                ///-==========-A1-==========-///
                if(pole[0]=='1')
                {
                cout << "1     "<<znak[0]<<"     |";
                }
                else
                {
                cout << "1     "<<" "<<"     |";
                }
                ///-==========-B1-==========-///
                if(pole[1]=='1')
                {
                cout << "     "<<znak[1]<<"     |";
                }
                else
                {
                cout << "     "<<" "<<"     |";
                }
                ///-==========-C1-==========-///
                if(pole[2]=='1')
                {
                cout << "     "<<znak[2]<<"      \n";
                }
                else
                {
                cout << "     "<<" "<<"      \n";
                }
                cout << "            |           |           " << endl;
                cout << "            |           |           " << endl;
                cout << " -----------+-----------+-----------" << endl;
                cout << "            |           |           " << endl;
                cout << "            |           |           " << endl;
                ///-==========-A2-==========-///
                if(pole[3]=='1')
                {
                cout << "2     "<<znak[3]<<"     |";
                }
                else
                {
                cout << "2     "<<" "<<"     |";
                }
                ///-==========-B2-==========-///
                if(pole[4]=='1')
                {
                cout << "     "<<znak[4]<<"     |";
                }
                else
                {
                cout << "     "<<" "<<"     |";
                }
                ///-==========-C2-==========-///
                if(pole[5]=='1')
                {
                cout << "     "<<znak[5]<<"       \n";
                }
                else
                {
                cout << "       "<<" "<<"     \n";
                }
                cout << "            |           |           " << endl;
                cout << "            |           |           " << endl;
                cout << " -----------+-----------+-----------" << endl;
                cout << "            |           |           " << endl;
                cout << "            |           |           " << endl;
                ///-==========-A3-==========-///
                if(pole[6]=='1')
                {
                cout << "3     "<<znak[6]<<"     |";
                }
                else
                {
                cout << "3     "<<" "<<"     |";
                }
                ///-==========-B3-==========-///
                if(pole[7]=='1')
                {
                cout << "     "<<znak[7]<<"     |";
                }
                else
                {
                cout << "     "<<" "<<"     |";
                }
                ///-==========-C3-==========-///
                if(pole[8]=='1')
                {
                cout << "     "<<znak[8]<<"      \n"; //dzia³a, dlaczego?
                }
                else
                {
                cout << "     "<<" "<<"       \n";
                }
                cout << "            |           |           " << endl;
                cout << "            |           |           " << endl;

                cout<<"\n   Legenda:\n\n    1.A1        2.B1        3.C1\n";
                cout<<"\n    4.A2        5.B2        6.C2\n";
                cout<<"\n    7.A3        8.B3        9.C3\n";
                cout<<"\n\n\n"<<kolejka;
                cout<<"\n\n\nBy Adam Czwordon";

                //sprawdzanie czy ktos wygral
                if(((pole[0]=='1')&&(znak[0]=='X')&&(pole[4]=='1')&&(znak[4]=='X')&&(pole[8]=='1')&&(znak[8]=='X'))||((pole[2]=='1')&&(znak[2]=='X')&&(pole[4]=='1')&&(znak[4]=='X')&&(pole[6]=='1')&&(znak[6]=='X')))
                {
                    cout<<"\nWygra\210 gracz pierwszy!";
                    cout<<"\nWygrana!\nWygrana!\nWygrana!\nWygrana!\nWygrana!\n";
                    getch();
                    Sleep(100);
                    goto c;
                }
                else if(((pole[0]=='1')&&(znak[0]=='X')&&(pole[1]=='1')&&(znak[1]=='X')&&(pole[2]=='1')&&(znak[2]=='X'))||((pole[3]=='1')&&(znak[3]=='X')&&(pole[4]=='1')&&(znak[4]=='X')&&(pole[5]=='1')&&(znak[5]=='X'))||((pole[6]=='1')&&(znak[6]=='X')&&(pole[7]=='1')&&(znak[7]=='X')&&(pole[8]=='1')&&(znak[8]=='X')))
                {
                    cout<<"\nWygra\210 gracz pierwszy!";
                    cout<<"\nWygrana!\nWygrana!\nWygrana!\nWygrana!\nWygrana!\n";
                    getch();
                    Sleep(100);
                    goto c;
                }
                else if(((pole[0]=='1')&&(znak[0]=='X')&&(pole[3]=='1')&&(znak[3]=='X')&&(pole[6]=='1')&&(znak[6]=='X'))||((pole[1]=='1')&&(znak[1]=='X')&&(pole[4]=='1')&&(znak[4]=='X')&&(pole[7]=='1')&&(znak[7]=='X'))||((pole[2]=='1')&&(znak[2]=='X')&&(pole[5]=='1')&&(znak[5]=='X')&&(pole[8]=='1')&&(znak[8]=='X')))
                {   cout<<"\nWygra\210 gracz pierwszy!";
                    cout<<"\nWygrana!\nWygrana!\nWygrana!\nWygrana!\nWygrana!\n";
                    getch();
                    Sleep(100);
                    goto c;
                }
                else if(((pole[0]=='1')&&(znak[0]=='O')&&(pole[4]=='1')&&(znak[4]=='O')&&(pole[8]=='1')&&(znak[8]=='O'))||((pole[2]=='1')&&(znak[2]=='O')&&(pole[4]=='1')&&(znak[4]=='O')&&(pole[6]=='1')&&(znak[6]=='O')))
                {
                    cout<<"\nWygra\210 komputer!";
                    cout<<"\nPrzegrana!";
                    getch();
                    Sleep(100);
                    goto c;
                }
                else if(((pole[0]=='1')&&(znak[0]=='O')&&(pole[1]=='1')&&(znak[1]=='O')&&(pole[2]=='1')&&(znak[2]=='O'))||((pole[3]=='1')&&(znak[3]=='O')&&(pole[4]=='1')&&(znak[4]=='O')&&(pole[5]=='1')&&(znak[5]=='O'))||((pole[6]=='1')&&(znak[6]=='O')&&(pole[7]=='1')&&(znak[7]=='O')&&(pole[8]=='1')&&(znak[8]=='O')))
                {
                    cout<<"\nWygra\210 kumputer!";
                    cout<<"\nPrzegrana!";
                    getch();
                    Sleep(100);
                    goto c;
                }
                else if(((pole[0]=='1')&&(znak[0]=='O')&&(pole[3]=='1')&&(znak[3]=='O')&&(pole[6]=='1')&&(znak[6]=='O'))||((pole[1]=='1')&&(znak[1]=='O')&&(pole[4]=='1')&&(znak[4]=='O')&&(pole[7]=='1')&&(znak[7]=='O'))||((pole[2]=='1')&&(znak[2]=='O')&&(pole[5]=='1')&&(znak[5]=='O')&&(pole[8]=='1')&&(znak[8]=='O')))
                {   cout<<"\nWygra\210 kumputer!";
                    cout<<"\nPrzegrana!";
                    getch();
                    Sleep(100);
                    goto c;
                }



                ///-========-wybór-========-///
                if(kolejka=="Kolejka gracza pierwszego")
                {
                    wybor=getch();
                    switch(wybor)
                    {
                    case('1'):
                        {
                            if(pole[0]==0)
                            {
                                znak[0]='X';
                                pole[0]='1';
                                kolejka="Kolej na komputer";
                            }
                        }
                        break;
                    case('2'):
                        {
                            if(pole[1]==0)
                            {
                                znak[1]='X';
                                pole[1]='1';
                                kolejka="Kolej na komputer";
                            }
                        }
                        break;
                    case('3'):
                        {
                            if(pole[2]==0)
                            {
                                znak[2]='X';
                                pole[2]='1';
                                kolejka="Kolej na komputer";
                            }
                        }
                        break;
                    case('4'):
                        {
                            if(pole[3]==0)
                            {
                                znak[3]='X';
                                pole[3]='1';
                                kolejka="Kolej na komputer";
                            }
                        }
                        break;
                    case('5'):
                        {
                            if(pole[4]==0)
                            {
                                znak[4]='X';
                                pole[4]='1';
                                kolejka="Kolej na komputer";
                            }
                        }
                        break;
                    case('6'):
                        {
                            if(pole[5]==0)
                            {
                                znak[5]='X';
                                pole[5]='1';
                                kolejka="Kolej na komputer";
                            }
                        }
                        break;
                    case('7'):
                        {
                            if(pole[6]==0)
                            {
                                znak[6]='X';
                                pole[6]='1';
                                kolejka="Kolej na komputer";
                            }
                        }
                        break;
                    case('8'):
                        {
                            if(pole[7]==0)
                            {
                                znak[7]='X';
                                pole[7]='1';
                                kolejka="Kolej na komputer";
                            }
                        }
                        break;
                    case('9'):
                        {
                            if(pole[8]==0)
                            {
                                znak[8]='X';
                                pole[8]='1';
                                kolejka="Kolej na komputer";
                            }
                        }
                        break;
                    }
                }
                else if(kolejka=="Kolej na komputer")
                {
                    Sleep(500);
                    d:
                    c=rand()%8+1;
                    switch(c)
                    {
                    case 1:
                        {
                            if(pole[0]==0)
                            {
                                znak[0]='O';
                                pole[0]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                            else
                            {
                                goto d;
                            }
                        }
                        break;
                    case 2:
                        {
                            if(pole[1]==0)
                            {
                                znak[1]='O';
                                pole[1]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                            else
                            {
                                goto d;
                            }
                        }
                        break;
                    case 3:
                        {
                            if(pole[2]==0)
                            {
                                znak[2]='O';
                                pole[2]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                            else
                            {
                                goto d;
                            }
                        }
                        break;
                    case 4:
                        {
                            if(pole[3]==0)
                            {
                                znak[3]='O';
                                pole[3]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                            else
                            {
                                goto d;
                            }
                        }
                        break;
                    case 5:
                        {
                            if(pole[4]==0)
                            {
                                znak[4]='O';
                                pole[4]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                            else
                            {
                                goto d;
                            }
                        }
                        break;
                    case 6:
                        {
                            if(pole[5]==0)
                            {
                                znak[5]='O';
                                pole[5]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                            else
                            {
                                goto d;
                            }
                        }
                        break;
                    case 7:
                        {
                            if(pole[6]==0)
                            {
                                znak[6]='O';
                                pole[6]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                            else
                            {
                                goto d;
                            }
                        }
                        break;
                    case 8:
                        {
                            if(pole[7]==0)
                            {
                                znak[7]='O';
                                pole[7]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                            else
                            {
                                goto d;
                            }
                        }
                        break;
                    case 9:
                        {
                            if(pole[8]==0)
                            {
                                znak[8]='O';
                                pole[8]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                            else
                            {
                                goto d;
                            }
                        }
                        break;
                    }
                }
            }
        }
        break;
    case('2'):
        {
            ///DWOCH GRACZY///
            while(true)
            {
                system("cls");

                ///-========-plansza-========-///
                //             A           B           C
                cout << "      A           B           C     \n" << endl;
                cout << "            |           |           " << endl;
                cout << "            |           |           " << endl;
                ///-==========-A1-==========-///
                if(pole[0]=='1')
                {
                cout << "1     "<<znak[0]<<"     |";
                }
                else
                {
                cout << "1     "<<" "<<"     |";
                }
                ///-==========-B1-==========-///
                if(pole[1]=='1')
                {
                cout << "     "<<znak[1]<<"     |";
                }
                else
                {
                cout << "     "<<" "<<"     |";
                }
                ///-==========-C1-==========-///
                if(pole[2]=='1')
                {
                cout << "     "<<znak[2]<<"      \n";
                }
                else
                {
                cout << "     "<<" "<<"      \n";
                }
                cout << "            |           |           " << endl;
                cout << "            |           |           " << endl;
                cout << " -----------+-----------+-----------" << endl;
                cout << "            |           |           " << endl;
                cout << "            |           |           " << endl;
                ///-==========-A2-==========-///
                if(pole[3]=='1')
                {
                cout << "2     "<<znak[3]<<"     |";
                }
                else
                {
                cout << "2     "<<" "<<"     |";
                }
                ///-==========-B2-==========-///
                if(pole[4]=='1')
                {
                cout << "     "<<znak[4]<<"     |";
                }
                else
                {
                cout << "     "<<" "<<"     |";
                }
                ///-==========-C2-==========-///
                if(pole[5]=='1')
                {
                cout << "     "<<znak[5]<<"       \n";
                }
                else
                {
                cout << "       "<<" "<<"     \n";
                }
                cout << "            |           |           " << endl;
                cout << "            |           |           " << endl;
                cout << " -----------+-----------+-----------" << endl;
                cout << "            |           |           " << endl;
                cout << "            |           |           " << endl;
                ///-==========-A3-==========-///
                if(pole[6]=='1')
                {
                cout << "3     "<<znak[6]<<"     |";
                }
                else
                {
                cout << "3     "<<" "<<"     |";
                }
                ///-==========-B3-==========-///
                if(pole[7]=='1')
                {
                cout << "     "<<znak[7]<<"     |";
                }
                else
                {
                cout << "     "<<" "<<"     |";
                }
                ///-==========-C3-==========-///
                if(pole[8]=='1')
                {
                cout << "     "<<znak[8]<<"      \n"; //dzia³a, dlaczego?
                }
                else
                {
                cout << "     "<<" "<<"       \n";
                }
                cout << "            |           |           " << endl;
                cout << "            |           |           " << endl;

                cout<<"\n   Legenda:\n\n    1.A1        2.B1        3.C1\n";
                cout<<"\n    4.A2        5.B2        6.C2\n";
                cout<<"\n    7.A3        8.B3        9.C3\n";
                cout<<"\n\n\n"<<kolejka;
                cout<<"\n\n\nBy Adam Czwordon";

                //sprawdzanie czy ktoœ wygra³
                if(((pole[0]=='1')&&(znak[0]=='X')&&(pole[4]=='1')&&(znak[4]=='X')&&(pole[8]=='1')&&(znak[8]=='X'))||((pole[2]=='1')&&(znak[2]=='X')&&(pole[4]=='1')&&(znak[4]=='X')&&(pole[6]=='1')&&(znak[6]=='X')))
                {
                    cout<<"\nWygra\210 gracz pierwszy!";
                    cout<<"\nWygrana!\nWygrana!\nWygrana!\nWygrana!\nWygrana!\n";
                    getch();
                    Sleep(100);
                    goto c;
                }
                else if(((pole[0]=='1')&&(znak[0]=='X')&&(pole[1]=='1')&&(znak[1]=='X')&&(pole[2]=='1')&&(znak[2]=='X'))||((pole[3]=='1')&&(znak[3]=='X')&&(pole[4]=='1')&&(znak[4]=='X')&&(pole[5]=='1')&&(znak[5]=='X'))||((pole[6]=='1')&&(znak[6]=='X')&&(pole[7]=='1')&&(znak[7]=='X')&&(pole[8]=='1')&&(znak[8]=='X')))
                {
                    cout<<"\nWygra\210 gracz pierwszy!";
                    cout<<"\nWygrana!\nWygrana!\nWygrana!\nWygrana!\nWygrana!\n";
                    getch();
                    Sleep(100);
                    goto c;
                }
                else if(((pole[0]=='1')&&(znak[0]=='X')&&(pole[3]=='1')&&(znak[3]=='X')&&(pole[6]=='1')&&(znak[6]=='X'))||((pole[1]=='1')&&(znak[1]=='X')&&(pole[4]=='1')&&(znak[4]=='X')&&(pole[7]=='1')&&(znak[7]=='X'))||((pole[2]=='1')&&(znak[2]=='X')&&(pole[5]=='1')&&(znak[5]=='X')&&(pole[8]=='1')&&(znak[8]=='X')))
                {   cout<<"\nWygra\210 gracz pierwszy!";
                    cout<<"\nWygrana!\nWygrana!\nWygrana!\nWygrana!\nWygrana!\n";
                    getch();
                    Sleep(100);
                    goto c;
                }
                else if(((pole[0]=='1')&&(znak[0]=='O')&&(pole[4]=='1')&&(znak[4]=='O')&&(pole[8]=='1')&&(znak[8]=='O'))||((pole[2]=='1')&&(znak[2]=='O')&&(pole[4]=='1')&&(znak[4]=='O')&&(pole[6]=='1')&&(znak[6]=='O')))
                {
                    cout<<"\nWygra\210 gracz drugi!";
                    cout<<"\nWygrana!\nWygrana!\nWygrana!\nWygrana!\nWygrana!\n";
                    getch();
                    Sleep(100);
                    goto c;
                }
                else if(((pole[0]=='1')&&(znak[0]=='O')&&(pole[1]=='1')&&(znak[1]=='O')&&(pole[2]=='1')&&(znak[2]=='O'))||((pole[3]=='1')&&(znak[3]=='O')&&(pole[4]=='1')&&(znak[4]=='O')&&(pole[5]=='1')&&(znak[5]=='O'))||((pole[6]=='1')&&(znak[6]=='O')&&(pole[7]=='1')&&(znak[7]=='O')&&(pole[8]=='1')&&(znak[8]=='O')))
                {
                    cout<<"\nWygra\210 gracz drugi!";
                    cout<<"\nWygrana!\nWygrana!\nWygrana!\nWygrana!\nWygrana!\n";
                    getch();
                    Sleep(100);
                    goto c;
                }
                else if(((pole[0]=='1')&&(znak[0]=='O')&&(pole[3]=='1')&&(znak[3]=='O')&&(pole[6]=='1')&&(znak[6]=='O'))||((pole[1]=='1')&&(znak[1]=='O')&&(pole[4]=='1')&&(znak[4]=='O')&&(pole[7]=='1')&&(znak[7]=='O'))||((pole[2]=='1')&&(znak[2]=='O')&&(pole[5]=='1')&&(znak[5]=='O')&&(pole[8]=='1')&&(znak[8]=='O')))
                {   cout<<"\nWygra\210 gracz drugi!";
                    cout<<"\nWygrana!\nWygrana!\nWygrana!\nWygrana!\nWygrana!\n";
                    getch();
                    Sleep(100);
                    goto c;
                }

                wybor=getch();

                ///-========-wybór-========-///
                if(kolejka=="Kolejka gracza pierwszego")
                {
                    switch(wybor)
                    {
                    case('1'):
                        {
                            if(pole[0]==0)
                            {
                                znak[0]='X';
                                pole[0]='1';
                                kolejka="Kolejka gracza drugiego";
                            }
                        }
                        break;
                    case('2'):
                        {
                            if(pole[1]==0)
                            {
                                znak[1]='X';
                                pole[1]='1';
                                kolejka="Kolejka gracza drugiego";
                            }
                        }
                        break;
                    case('3'):
                        {
                            if(pole[2]==0)
                            {
                                znak[2]='X';
                                pole[2]='1';
                                kolejka="Kolejka gracza drugiego";
                            }
                        }
                        break;
                    case('4'):
                        {
                            if(pole[3]==0)
                            {
                                znak[3]='X';
                                pole[3]='1';
                                kolejka="Kolejka gracza drugiego";
                            }
                        }
                        break;
                    case('5'):
                        {
                            if(pole[4]==0)
                            {
                                znak[4]='X';
                                pole[4]='1';
                                kolejka="Kolejka gracza drugiego";
                            }
                        }
                        break;
                    case('6'):
                        {
                            if(pole[5]==0)
                            {
                                znak[5]='X';
                                pole[5]='1';
                                kolejka="Kolejka gracza drugiego";
                            }
                        }
                        break;
                    case('7'):
                        {
                            if(pole[6]==0)
                            {
                                znak[6]='X';
                                pole[6]='1';
                                kolejka="Kolejka gracza drugiego";
                            }
                        }
                        break;
                    case('8'):
                        {
                            if(pole[7]==0)
                            {
                                znak[7]='X';
                                pole[7]='1';
                                kolejka="Kolejka gracza drugiego";
                            }
                        }
                        break;
                    case('9'):
                        {
                            if(pole[8]==0)
                            {
                                znak[8]='X';
                                pole[8]='1';
                                kolejka="Kolejka gracza drugiego";
                            }
                        }
                        break;
                    }
                }
                else if(kolejka=="Kolejka gracza drugiego")
                {
                    switch(wybor)
                    {
                    case('1'):
                        {
                            if(pole[0]==0)
                            {
                                znak[0]='O';
                                pole[0]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                        }
                        break;
                    case('2'):
                        {
                            if(pole[1]==0)
                            {
                                znak[1]='O';
                                pole[1]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                        }
                        break;
                    case('3'):
                        {
                            if(pole[2]==0)
                            {
                                znak[2]='O';
                                pole[2]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                        }
                        break;
                    case('4'):
                        {
                            if(pole[3]==0)
                            {
                                znak[3]='O';
                                pole[3]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                        }
                        break;
                    case('5'):
                        {
                            if(pole[4]==0)
                            {
                                znak[4]='O';
                                pole[4]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                        }
                        break;
                    case('6'):
                        {
                            if(pole[5]==0)
                            {
                                znak[5]='O';
                                pole[5]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                        }
                        break;
                    case('7'):
                        {
                            if(pole[6]==0)
                            {
                                znak[6]='O';
                                pole[6]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                        }
                        break;
                    case('8'):
                        {
                            if(pole[7]==0)
                            {
                                znak[7]='O';
                                pole[7]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                        }
                        break;
                    case('9'):
                        {
                            if(pole[8]==0)
                            {
                                znak[8]='O';
                                pole[8]='1';
                                kolejka="Kolejka gracza pierwszego";
                            }
                        }
                        break;
                    }
                }
            }
        }
        break;
    default:
        {
            system("cls");
            goto c;
        }
        break;
    }

    return 0;
}
