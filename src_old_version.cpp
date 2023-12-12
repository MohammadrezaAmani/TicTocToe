/* --------------------------show photo in terminal------------------------
author : Mohammadreza Amani
GitHub : https://www.github.com/MohammadrezaAmani
Linkedin : https://www.linkedin.com/in/mohammadreza-amani/
Date : 2021/5/ 08
---------------------------------------------------------------------------- */
#include <iostream>
using namespace std;
void startpage()
{
    system("cls");
    cout << " ____________________________________________________________" << endl;
    cout << "| X/O game.                                                  |" << endl;
    cout << "|____________________________________________________________|" << endl;
    cout << "| 1 = PvP mode                                               | " << endl;
    cout << "|____________________________________________________________|" << endl;
    cout << "| 2 = PvComputer                                             |" << endl;
    cout << "|____________________________________________________________|" << endl;
    cout << "| 0 = exit                                                   |" << endl;
    cout << "|____________________________________________________________|" << endl;
    cout << "| entry number    : ";
}
int check(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    int c = 2;
    if (a1 + a2 + a3 == 3)
    {
        cout << "***************** player 1 win. *****************";
        c = 1;
    }
    if (a1 + a2 + a3 == 6)
    {
        cout << "***************** player 2 win. *****************";
        c = 1;
    }
    if (a1 + a4 + a7 == 3)
    {
        cout << "***************** player 1 win. *****************";
        c = 1;
    }
    if (a1 + a4 + a7 == 6)
    {
        cout << "***************** player 2 win. *****************";
        c = 1;
    }
    if (a1 + a5 + a9 == 3)
    {
        cout << "***************** player 1 win. *****************";
        c = 1;
    }
    if (a1 + a5 + a9 == 6)
    {
        cout << "***************** player 2 win. *****************";
        c = 1;
    }
    if (a2 + a5 + a8 == 3)
    {
        cout << "***************** player 1 win. *****************";
        c = 1;
    }
    if (a2 + a5 + a8 == 6)
    {
        cout << "***************** player 2 win. *****************";
        c = 1;
    }
    if (a3 + a6 + a9 == 6)
    {
        cout << "***************** player 2 win. *****************";
        c = 1;
    }
    if (a3 + a5 + a7 == 6)
    {
        cout << "***************** player 2 win. *****************";
        c = 1;
    }
    if (a3 + a5 + a7 == 3)
    {
        cout << "***************** player 1 win. *****************";
        c = 1;
    }
    if (a4 + a5 + a6 == 6)
    {
        cout << "***************** player 2 win. *****************";
        c = 1;
    }
    if (a4 + a5 + a6 == 3)
    {
        cout << "***************** player 1 win. *****************";
        c = 1;
    }
    if (a7 + a8 + a9 == 6)
    {
        cout << "***************** player 2 win. *****************";
        c = 1;
    }
    if (a7 + a8 + a9 == 3)
    {
        cout << "***************** player 1 win. *****************";
        c = 1;
    }
    if (c == 2)
    {
        if (a1 != 11 && a2 != 22 && a3 != 33 && a4 != 44 && a5 != 55 && a6 != 66 && a7 != 87 && a8 != 88 && a9 != 99)
        {
            cout << ")))))))))))))))))))) : game over, Tied. : ((((((((((((((((((((";
            c = 1;
        }
    }
    if (c == 1)
    {
        cout << "\n";
    }
    return c;
}

void jadval(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    char b1 = '1', b2 = '2', b3 = '3', b4 = '4', b5 = '5', b6 = '6', b7 = '7', b8 = '8', b9 = '9';
    if (a1 == 1)
    {
        b1 = 'x';
    }
    if (a2 == 1)
    {
        b2 = 'x';
    }
    if (a3 == 1)
    {
        b3 = 'x';
    }
    if (a4 == 1)
    {
        b4 = 'x';
    }
    if (a9 == 1)
    {
        b9 = 'x';
    }
    if (a5 == 1)
    {
        b5 = 'x';
    }
    if (a6 == 1)
    {
        b6 = 'x';
    }
    if (a7 == 1)
    {
        b7 = 'x';
    }
    if (a8 == 1)
    {
        b8 = 'x';
    }
    if (a1 == 2)
    {
        b1 = 'o';
    }
    if (a2 == 2)
    {
        b2 = 'o';
    }
    if (a3 == 2)
    {
        b3 = 'o';
    }
    if (a4 == 2)
    {
        b4 = 'o';
    }
    if (a9 == 2)
    {
        b9 = 'o';
    }
    if (a5 == 2)
    {
        b5 = 'o';
    }
    if (a6 == 2)
    {
        b6 = 'o';
    }
    if (a7 == 2)
    {
        b7 = 'o';
    }
    if (a8 == 2)
    {
        b8 = 'o';
    }
    cout << " "
         << "_"
         << "_"
         << "_"
         << "__"
         << "_"
         << "_"
         << "_"
         << "__"
         << "_"
         << "_"
         << "_"
         << " " << endl;
    cout << "|"
         << " "
         << " "
         << " "
         << "||"
         << " "
         << " "
         << " "
         << "||"
         << " "
         << " "
         << " "
         << "|" << endl;
    cout << "|"
         << " " << b1 << " "
         << "||"
         << " " << b2 << " "
         << "||"
         << " " << b3 << " "
         << "|" << endl;
    cout << "|"
         << "_"
         << "_"
         << "_"
         << "||"
         << "_"
         << "_"
         << "_"
         << "||"
         << "_"
         << "_"
         << "_"
         << "|" << endl;
    cout << "|"
         << " "
         << " "
         << " "
         << "||"
         << " "
         << " "
         << " "
         << "||"
         << " "
         << " "
         << " "
         << "|" << endl;
    cout << "|"
         << " " << b4 << " "
         << "||"
         << " " << b5 << " "
         << "||"
         << " " << b6 << " "
         << "|" << endl;
    cout << "|"
         << "_"
         << "_"
         << "_"
         << "||"
         << "_"
         << "_"
         << "_"
         << "||"
         << "_"
         << "_"
         << "_"
         << "|" << endl;
    cout << "|"
         << " "
         << " "
         << " "
         << "||"
         << " "
         << " "
         << " "
         << "||"
         << " "
         << " "
         << " "
         << "|" << endl;
    cout << "|"
         << " " << b7 << " "
         << "||"
         << " " << b8 << " "
         << "||"
         << " " << b9 << " "
         << "|" << endl;
    cout << "|"
         << "_"
         << "_"
         << "_"
         << "||"
         << "_"
         << "_"
         << "_"
         << "||"
         << "_"
         << "_"
         << "_"
         << "|" << endl;
}
void player1(int &a1, int &a2, int &a3, int &a4, int &a5, int &a6, int &a7, int &a8, int &a9)
{
    jadval(a1, a2, a3, a4, a5, a6, a7, a8, a9);
    cout << "______________________________________________________________" << endl;
    cout << "|player 1 lotfan shomere khane ye mored nazar ra vared konid. |" << endl;
    cout << "|_____________________________________________________________|" << endl;
    cout << "| khane vorodi shoma : ";
    int i = 0;
    cin >> i;
    if (i == 1)
        i = 11;
    if (i == 2)
        i = 22;
    if (i == 3)
        i = 33;
    if (i == 4)
        i = 44;
    if (i == 5)
        i = 55;
    if (i == 6)
        i = 66;
    if (i == 7)
        i = 77;
    if (i == 8)
        i = 88;
    if (i == 9)
        i = 99;
    if (i == 11)
    {
        if (a1 == 11)
            a1 = 1;
        else
        {
            cout << "invalid, khane digari ra vared konid." << endl;
            cin >> i;
        }
    }
    if (i == 22)
    {
        if (a2 == 22)
            a2 = 1;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 33)
    {
        if (a3 == 33)
            a3 = 1;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 44)
    {
        if (a4 == 44)
            a4 = 1;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 55)
    {
        if (a5 == 55)
            a5 = 1;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 66)
    {
        if (a6 == 66)
            a6 = 1;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 77)
    {
        if (a7 == 77)
            a7 = 1;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 88)
    {
        if (a8 == 88)
            a8 = 1;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 99)
    {
        if (a9 == 99)
            a9 = 1;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
}
void player2(int &a1, int &a2, int &a3, int &a4, int &a5, int &a6, int &a7, int &a8, int &a9)
{
    jadval(a1, a2, a3, a4, a5, a6, a7, a8, a9);
    int i = 0;
    cout << "______________________________________________________________" << endl;
    cout << "|player 2 lotfan shomere khane ye mored nazar ra vared konid. |" << endl;
    cout << "|_____________________________________________________________|" << endl;
    cout << "| khane vorodi shoma : ";
    cin >> i;
    if (i == 1)
        i = 11;
    if (i == 2)
        i = 22;
    if (i == 3)
        i = 33;
    if (i == 4)
        i = 44;
    if (i == 5)
        i = 55;
    if (i == 6)
        i = 66;
    if (i == 7)
        i = 77;
    if (i == 8)
        i = 88;
    if (i == 9)
        i = 99;
    if (i == 11)
    {
        if (a1 == 11)
            a1 = 2;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 22)
    {
        if (a2 == 22)
            a2 = 2;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 33)
    {
        if (a3 == 33)
            a3 = 2;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 44)
    {
        if (a4 == 44)
            a4 = 2;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 55)
    {
        if (a5 == 55)
            a5 = 2;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 66)
    {
        if (a6 == 66)
            a6 = 2;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 77)
    {
        if (a7 == 77)
            a7 = 2;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 88)
    {
        if (a8 == 88)
            a8 = 2;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
    if (i == 99)
    {
        if (a9 == 99)
            a9 = 2;
        else
        {
            cout << "invalid, khane digari ra vared konid.";
            cin >> i;
        }
    }
}
void P2P(int &a1, int &a2, int &a3, int &a4, int &a5, int &a6, int &a7, int &a8, int &a9)
{
    a1 = 11, a2 = 22, a3 = 33, a4 = 44, a5 = 55;
    a6 = 66, a7 = 77, a8 = 88, a9 = 99;
    int c = 0;
    while (c != 1)
    {
        system("cls");
        player1(a1, a2, a3, a4, a5, a6, a7, a8, a9);
        c = check(a1, a2, a3, a4, a5, a6, a7, a8, a9);
        if (c == 1)
            break;
        system("cls");
        player2(a1, a2, a3, a4, a5, a6, a7, a8, a9);
        c = check(a1, a2, a3, a4, a5, a6, a7, a8, a9);
        if (c == 1)
            break;
    }
}
void pc(int &a1, int &a2, int &a3, int &a4, int &a5, int &a6, int &a7, int &a8, int &a9)
{

    { // 1 2 3 if (a1 == 11)

        if ((a1 + a2) == 4)
            if (a3 == 33)
            {
                a3 = 2;
                return;
            }
        if ((a3 + a2) == 4)
            if (a1 == 11)
            {
                a1 = 2;
                return;
            }
        if ((a3 + a1) == 4)
            if (a2 == 22)
            {
                a2 = 2;
                return;
            }
        // 1 4 7
        if ((a7 + a4) == 4)
            if (a1 == 11)
            {
                a1 = 2;
                return;
            }
        if ((a1 + a4) == 4)
            if (a7 == 77)
            {
                a7 = 2;
                return;
            }
        if ((a1 + a7) == 4)
            if (a4 == 44)
            {
                a4 = 2;
                return;
            }
        // 1 5 9
        if ((a1 + a5) == 4)
            if (a9 == 99)
            {
                a9 = 2;
                return;
            }
        if ((a1 + a9) == 4)
            if (a5 == 55)
            {
                a5 = 2;
                return;
            }
        if ((a5 + a9) == 4)
            if (a1 == 11)
            {
                a1 = 2;
                return;
            }
        // 2 5 8
        if ((a2 + a5) == 4)
            if (a8 == 88)
            {
                a8 = 2;
                return;
            }
        if ((a2 + a8) == 4)
            if (a5 == 55)
            {
                a5 = 2;
                return;
            }
        if ((a8 + a5) == 4)
            if (a2 == 22)
            {
                a2 = 2;
                return;
            }
        // 3 6 9
        if ((a3 + a6) == 4)
            if (a9 == 99)
            {
                a9 = 2;
                return;
            }
        if ((a3 + a9) == 4)
            if (a6 == 66)
            {
                a6 = 2;
                return;
            }
        if ((a9 + a6) == 4)
            if (a3 == 33)
            {
                a3 = 2;
                return;
            }
        // 3 5 7
        if ((a3 + a5) == 4)
            if (a7 == 77)
            {
                a7 = 2;
                return;
            }
        if ((a7 + a5) == 4)
            if (a3 == 33)
            {
                a3 = 2;
                return;
            }
        if ((a7 + a3) == 4)
            if (a5 == 55)
            {
                a5 = 2;
                return;
            }
        // 4 5 7
        if ((a4 + a5) == 4)
            if (a6 == 66)
            {
                a6 = 2;
                return;
            }
        if ((a6 + a4) == 4)
        {
            a5 = 2;
            return;
        }
        if ((a5 + a6) == 4)
            if (a4 == 44)
            {
                a4 = 2;
                return;
            }
        // 7 8 9
        if ((a7 + a8) == 4)
            if (a9 == 99)
            {
                a9 = 2;
                return;
            }
        if ((a9 + a8) == 4)
            if (a7 == 77)
            {
                a7 = 2;
                return;
            }
        if ((a7 + a9) == 4)
            if (a8 == 88)
            {
                a8 = 2;
                return;
            }
    }
    if (a5 == 55)
    {
        a5 = 2;
        return;
    }
    { // 1 2 3 if (a1 == 11)
        if ((a1 + a2) == 2)
            if (a3 == 33)
            {
                a3 = 2;
                return;
            }
        if ((a3 + a2) == 2)
            if (a1 == 11)
            {
                a1 = 2;
                return;
            }
        if ((a3 + a1) == 2)
            if (a2 == 22)
            {
                a2 = 2;
                return;
            }
        // 1 4 7
        if ((a7 + a4) == 2)
            if (a1 == 11)
            {
                a1 = 2;
                return;
            }
        if ((a1 + a4) == 2)
            if (a7 == 77)
            {
                a7 = 2;
                return;
            }
        if ((a1 + a7) == 2)
            if (a4 == 44)
            {
                a4 = 2;
                return;
            }
        // 1 5 9
        if ((a1 + a5) == 2)
            if (a9 == 99)
            {
                a9 = 2;
                return;
            }
        if ((a1 + a9) == 2)
            if (a5 == 55)
            {
                a5 = 2;
                return;
            }
        if ((a5 + a9) == 2)
            if (a1 == 11)
            {
                a1 = 2;
                return;
            }
        // 2 5 8
        if ((a2 + a5) == 2)
            if (a8 == 88)
            {
                a8 = 2;
                return;
            }
        if ((a2 + a8) == 2)
            if (a5 == 55)
            {
                a5 = 2;
                return;
            }
        if ((a8 + a5) == 2)
            if (a2 == 22)
            {
                a2 = 2;
                return;
            }
        // 3 6 9
        if ((a3 + a6) == 2)
            if (a9 == 99)
            {
                a9 = 2;
                return;
            }
        if ((a3 + a9) == 2)
            if (a6 == 66)
            {
                a6 = 2;
                return;
            }
        if ((a9 + a6) == 2)
            if (a3 == 33)
            {
                a3 = 2;
                return;
            }
        // 3 5 7
        if ((a3 + a5) == 2)
            if (a7 == 77)
            {
                a7 = 2;
                return;
            }
        if ((a7 + a5) == 2)
            if (a3 == 33)
            {
                a3 = 2;
                return;
            }
        if ((a7 + a3) == 2)
            if (a5 == 55)
            {
                a5 = 2;
                return;
            }
        // 4 5 7
        if ((a4 + a5) == 2)
            if (a6 == 66)
            {
                a6 = 2;
                return;
            }
        if ((a6 + a4) == 2)
        {
            a5 = 2;
            return;
        }
        if ((a5 + a6) == 2)
            if (a4 == 44)
            {
                a4 = 2;
                return;
            }
        // 7 8 9
        if ((a7 + a8) == 2)
            if (a9 == 99)
            {
                a9 = 2;
                return;
            }
        if ((a9 + a8) == 2)
            if (a7 == 77)
            {
                a7 = 2;
                return;
            }
        if ((a7 + a9) == 2)
            if (a8 == 88)
            {
                a8 = 2;
                return;
            }
    }
    if (a1 == 11)
    {
        a1 = 2;
        return;
    }
    if (a3 == 33)
    {
        a3 = 2;
        return;
    }
    if (a9 == 99)
    {
        a9 = 2;
        return;
    }
    if (a7 == 77)
    {
        a7 = 2;
        return;
    }
    if (a2 == 22)
    {
        a2 = 2;
        return;
    }
    if (a4 == 44)
    {
        a4 = 2;
        return;
    }
    if (a6 == 66)
    {
        a6 = 2;
        return;
    }
    if (a8 == 88)
    {
        a8 = 2;
        return;
    }
}
void Pc2(int &a1, int &a2, int &a3, int &a4, int &a5, int &a6, int &a7, int &a8, int &a9)
{
    a1 = 11, a2 = 22, a3 = 33, a4 = 44, a5 = 55;
    a6 = 66, a7 = 77, a8 = 88, a9 = 99;
    int c = 0;
    while (c != 1)
    {
        system("cls");
        player1(a1, a2, a3, a4, a5, a6, a7, a8, a9);
        c = check(a1, a2, a3, a4, a5, a6, a7, a8, a9);
        if (c == 1)
            break;
        system("cls");
        pc(a1, a2, a3, a4, a5, a6, a7, a8, a9);
        c = check(a1, a2, a3, a4, a5, a6, a7, a8, a9);
        if (c == 1)
            break;
    }
}

int main()
{
    int a1 = 11, a2 = 22, a3 = 33, a4 = 44, a5 = 55;
    int a6 = 66, a7 = 77, a8 = 88, a9 = 99;
    int v = 1;
    while (v != 0)
    {
        startpage();
        cin >> v;
        if (v == 1)
        {
            P2P(a1, a2, a3, a4, a5, a6, a7, a8, a9);
            jadval(a1, a2, a3, a4, a5, a6, a7, a8, a9);
            system("pause");
            system("cls");
        }
        if (v == 2)
        {
            Pc2(a1, a2, a3, a4, a5, a6, a7, a8, a9);
            jadval(a1, a2, a3, a4, a5, a6, a7, a8, a9);
            system("pause");
            system("cls");
        }
        if (v == 0)
        {
            system("cls");
            cout << ":)";
            return 0;
        }
    }
}
