#include <iostream> //libreria standard obligatoria para usar sus funciones
#include "mis_funciones.h" /* libreria para utilizar sus funciones ademas esta libreria se encuentra dentro de la
                            carpeta del programa */

using namespace std; //espacio de nombre a usar std nos permite hacer mas cortas las lineas de codigo

//variable que rellena las torres previo a inicial el juego
void llenar(string a[5], string b[5], string c[5]) //funcion que no retorna un valor pero que tiene tres parametros de tipo string
{
    for (int i = 0; i < 5; i++) //ciclo for para llenar las variables
    {
        a[i] = "*";
        b[i] = "*";
        c[i] = "*";
        //condiciones para rellenar las variables
        if (i == 0)
        {
            a[0] = "*********";
        }
        else if (i == 1)
        {
            a[1] = "*******";
        }
        else if (i == 2)
        {
            a[2] = "*****";
        }
        else if (i == 3)
        {
            a[3] = "***";
        }
    }
}
//variable que muestra las torres o variables string  a[5], b[5], c[5]
void mostrar(string a[5], string b[5], string c[5]) //funcion que no retorna un valor pero que tiene tres parametros de tipo string
{
    TextColor(47); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    Gotoxy(47, 12); //funcion que permite pone texto en cualquier lugar de la pantalla
    cout << "A";
    Gotoxy(62, 12); //funcion que permite pone texto en cualquier lugar de la pantalla
    cout << "B";
    Gotoxy(77, 12); //funcion que permite pone texto en cualquier lugar de la pantalla
    cout << "C";

    TextColor(17); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    Gotoxy(47, 13); //funcion que permite pone texto en cualquier lugar de la pantalla
    cout << a[4];
    Gotoxy(47, 14); //funcion que permite pone texto en cualquier lugar de la pantalla
    TextColor(51); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    cout << a[3];
    Gotoxy(47, 15); //funcion que permite pone texto en cualquier lugar de la pantalla
    TextColor(68); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    cout << a[2];
    Gotoxy(47, 16); //funcion que permite pone texto en cualquier lugar de la pantalla
    TextColor(102); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    cout << a[1];
    Gotoxy(47, 17); //funcion que permite pone texto en cualquier lugar de la pantalla
    TextColor(85); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    cout << a[0];

    TextColor(17); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    Gotoxy(62, 13); //funcion que permite pone texto en cualquier lugar de la pantalla
    cout << b[4];
    Gotoxy(62, 14); //funcion que permite pone texto en cualquier lugar de la pantalla
    TextColor(51); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    cout << b[3];
    Gotoxy(62, 15); //funcion que permite pone texto en cualquier lugar de la pantalla
    TextColor(68); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    cout << b[2];
    Gotoxy(62, 16); //funcion que permite pone texto en cualquier lugar de la pantalla
    TextColor(102); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    cout << b[1];
    Gotoxy(62, 17); //funcion que permite pone texto en cualquier lugar de la pantalla
    TextColor(85); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    cout << b[0];

    TextColor(17); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    Gotoxy(77, 13); //funcion que permite pone texto en cualquier lugar de la pantalla
    cout << c[4];
    Gotoxy(77, 14); //funcion que permite pone texto en cualquier lugar de la pantalla
    TextColor(51); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    cout << c[3];
    Gotoxy(77, 15); //funcion que permite pone texto en cualquier lugar de la pantalla
    TextColor(68); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    cout << c[2];
    Gotoxy(77, 16); //funcion que permite pone texto en cualquier lugar de la pantalla
    TextColor(102); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    cout << c[1];
    Gotoxy(77, 17); //funcion que permite pone texto en cualquier lugar de la pantalla
    TextColor(85); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    cout << c[0];

    Gotoxy(38,18);
    TextColor(119); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    cout << "=================================================";
}

/*
    la funcion de las condiciones es facil
    if(condicion) ---> si la condicion se cumple entonces...
    {
        strcpy ---> esta funcion copia la cadena1 en la cadena2
        las funcion var.c_str() ---> combierte a char cualquier variable

        Entonces el proceso es el siguiente
        strcpy(temp, b[3].c_str()); strcpy copia la cadena1(que ya es char) en la cadena2(que se convirtio en tipo char)
        strcpy(aux, a[0].c_str()); strcpy copia la cadena1(que ya es char) en la cadena2(que se convirtio en tipo char)
        Esto para comvertir las variables a tipo char
        strcpy(aux, temp); strcpy copia la cadena 1 en la cadena 2(que se convirtio en tipo char)
        string(var) ---> es la forma en que una variable cambia de tipo para combertirse de tipo string
        a[0] = string(aux); y luego se almacena a la cadena 2
        b[3] = "*"; luego se le reagsna un nuevo valor a la cadena2
        ****************************************************************************************************************
        Este metodo es necesario porque la funcion strcpy no admite otro tipo de dato que no se char
        char var[n]
    }
*/
//Variable que verifica las condiciones de la torre C o string c[5]
void A(string a[5], string b[5], string c[5]) //funcion que no retorna un valor pero que tiene tres parametros de tipo string
{
    char aux[10];
    char temp[10];
    char aux2[10];
    char temp2[10];
    char aux3[10];
    char temp3[10];
    char aux4[10];
    char temp4[10];

    if(a[0] == "*" && b[3] != "*")
    {
        strcpy(temp, b[3].c_str());
        strcpy(aux, a[0].c_str());
        strcpy(aux, temp);
        a[0] = string(aux);
        b[3] = "*";
    }
    else if(a[1] == "*" && b[3] != "*")
    {
        strcpy(temp, b[3].c_str());
        strcpy(aux, a[1].c_str());
        strcpy(aux, temp);
        a[1] = string(aux);
        b[3] = "*";
    }
    else if(a[2] == "*" && b[3] != "*")
    {
        strcpy(temp, b[3].c_str());
        strcpy(aux, a[2].c_str());
        strcpy(aux, temp);
        a[2] = string(aux);
        b[3] = "*";
    }
    else if(a[3] == "*" && b[3] != "*")
    {
        strcpy(temp, b[3].c_str());
        strcpy(aux, a[3].c_str());
        strcpy(aux, temp);
        a[3] = string(aux);
        b[3] = "*";
    }

    else if(a[0] == "*" && c[3] != "*")
    {
        strcpy(temp, c[3].c_str());
        strcpy(aux, a[0].c_str());
        strcpy(aux, temp);
        a[0] = string(aux);
        c[3] = "*";
    }
    else if(a[1] == "*" && c[3] != "*")
    {
        strcpy(temp, c[3].c_str());
        strcpy(aux, a[1].c_str());
        strcpy(aux, temp);
        a[1] = string(aux);
        c[3] = "*";
    }
    else if(a[2] == "*" && c[3] != "*")
    {
        strcpy(temp, c[3].c_str());
        strcpy(aux, a[2].c_str());
        strcpy(aux, temp);
        a[2] = string(aux);
        c[3] = "*";
    }
    else if(a[3] == "*" && c[3] != "*")
    {
        strcpy(temp, c[3].c_str());
        strcpy(aux, a[3].c_str());
        strcpy(aux, temp);
        a[3] = string(aux);
        c[3] = "*";
    }




    else if(a[0] == "*" && b[2] != "*")
    {
        strcpy(temp2, b[2].c_str());
        strcpy(aux2, a[0].c_str());
        strcpy(aux2, temp2);
        a[0] = string(aux2);
        b[2] = "*";
    }
    else if(a[1] == "*" && b[2] != "*")
    {
        strcpy(temp2, b[2].c_str());
        strcpy(aux2, a[1].c_str());
        strcpy(aux2, temp2);
        a[1] = string(aux2);
        b[2] = "*";
    }
    else if(a[2] == "*" && b[2] != "*")
    {
        strcpy(temp2, b[2].c_str());
        strcpy(aux2, a[2].c_str());
        strcpy(aux2, temp2);
        a[2] = string(aux2);
        b[2] = "*";
    }
    else if(a[3] == "*" && b[2] != "*")
    {
        strcpy(temp2, b[2].c_str());
        strcpy(aux2, a[3].c_str());
        strcpy(aux2, temp2);
        a[3] = string(aux2);
        b[2] = "*";
    }

    else if(a[0] == "*" && c[2] != "*")
    {
        strcpy(temp2, c[2].c_str());
        strcpy(aux2, a[0].c_str());
        strcpy(aux2, temp2);
        a[0] = string(aux2);
        c[2] = "*";
    }
    else if(a[1] == "*" && c[2] != "*")
    {
        strcpy(temp2, c[2].c_str());
        strcpy(aux2, a[1].c_str());
        strcpy(aux2, temp2);
        a[1] = string(aux2);
        c[2] = "*";
    }
    else if(a[2] == "*" && c[2] != "*")
    {
        strcpy(temp2, c[2].c_str());
        strcpy(aux2, a[2].c_str());
        strcpy(aux2, temp2);
        a[2] = string(aux2);
        c[2] = "*";
    }
    else if(a[3] == "*" && c[2] != "*")
    {
        strcpy(temp2, c[2].c_str());
        strcpy(aux2, a[3].c_str());
        strcpy(aux2, temp2);
        a[3] = string(aux2);
        c[2] = "*";
    }




    else if(a[0] == "*" && b[1] != "*")
    {
        strcpy(temp3, b[1].c_str());
        strcpy(aux3, a[0].c_str());
        strcpy(aux3, temp3);
        a[0] = string(aux3);
        b[1] = "*";
    }
    else if(a[1] == "*" && b[1] != "*")
    {
        strcpy(temp3, b[1].c_str());
        strcpy(aux3, a[1].c_str());
        strcpy(aux3, temp3);
        a[1] = string(aux3);
        b[1] = "*";
    }
    else if(a[2] == "*" && b[1] != "*")
    {
        strcpy(temp3, b[1].c_str());
        strcpy(aux3, a[2].c_str());
        strcpy(aux3, temp3);
        a[2] = string(aux3);
        b[1] = "*";
    }
    else if(a[3] == "*" && b[1] != "*")
    {
        strcpy(temp3, b[1].c_str());
        strcpy(aux3, a[3].c_str());
        strcpy(aux3, temp3);
        a[3] = string(aux3);
        b[1] = "*";
    }

    else if(a[0] == "*" && c[1] != "*")
    {
        strcpy(temp3, c[1].c_str());
        strcpy(aux3, a[0].c_str());
        strcpy(aux3, temp3);
        a[0] = string(aux3);
        c[1] = "*";
    }
    else if(a[1] == "*" && c[1] != "*")
    {
        strcpy(temp3, c[1].c_str());
        strcpy(aux3, a[1].c_str());
        strcpy(aux3, temp3);
        a[1] = string(aux3);
        c[1] = "*";
    }
    else if(a[2] == "*" && c[1] != "*")
    {
        strcpy(temp3, c[1].c_str());
        strcpy(aux3, a[2].c_str());
        strcpy(aux3, temp3);
        a[2] = string(aux3);
        c[1] = "*";
    }
    else if(a[3] == "*" && c[1] != "*")
    {
        strcpy(temp3, c[1].c_str());
        strcpy(aux3, a[3].c_str());
        strcpy(aux3, temp3);
        a[3] = string(aux3);
        c[1] = "*";
    }




    else if(a[0] == "*" && b[0] != "*")
    {
        strcpy(temp4, b[0].c_str());
        strcpy(aux4, a[0].c_str());
        strcpy(aux4, temp4);
        a[0] = string(aux4);
        b[0] = "*";
    }
    else if(a[1] == "*" && b[0] != "*")
    {
        strcpy(temp4, b[0].c_str());
        strcpy(aux4, a[1].c_str());
        strcpy(aux4, temp4);
        a[1] = string(aux4);
        b[0] = "*";
    }
    else if(a[2] == "*" && b[0] != "*")
    {
        strcpy(temp4, b[0].c_str());
        strcpy(aux4, a[2].c_str());
        strcpy(aux4, temp4);
        a[2] = string(aux4);
        b[0] = "*";
    }
    else if(a[3] == "*" && b[0] != "*")
    {
        strcpy(temp4, b[0].c_str());
        strcpy(aux4, a[3].c_str());
        strcpy(aux4, temp4);
        a[3] = string(aux4);
        b[0] = "*";
    }

    else if(a[0] == "*" && c[0] != "*")
    {
        strcpy(temp4, c[0].c_str());
        strcpy(aux4, a[0].c_str());
        strcpy(aux4, temp4);
        a[0] = string(aux4);
        c[0] = "*";
    }
    else if(a[1] == "*" && c[0] != "*")
    {
        strcpy(temp4, c[0].c_str());
        strcpy(aux4, a[1].c_str());
        strcpy(aux4, temp4);
        a[1] = string(aux4);
        c[0] = "*";
    }
    else if(a[2] == "*" && c[0] != "*")
    {
        strcpy(temp4, c[0].c_str());
        strcpy(aux4, a[2].c_str());
        strcpy(aux4, temp4);
        a[2] = string(aux4);
        c[0] = "*";
    }
    else if(a[3] == "*" && c[0] != "*")
    {
        strcpy(temp4, c[0].c_str());
        strcpy(aux4, a[3].c_str());
        strcpy(aux4, temp4);
        a[3] = string(aux4);
        c[0] = "*";
    }
}
//variable que verifica las condiciones en la torre B o  variable string b[5]
void B(string a[5], string b[5], string c[5]) //funcion que no retorna un valor pero que tiene tres parametros de tipo string
{
    char aux[10];
    char temp[10];
    char aux2[10];
    char temp2[10];
    char aux3[10];
    char temp3[10];
    char aux4[10];
    char temp4[10];

    if(b[0] == "*" && a[3] != "*")
    {
        strcpy(temp, a[3].c_str());
        strcpy(aux, b[0].c_str());
        strcpy(aux, temp);
        b[0] = string(aux);
        a[3] = "*";
    }
    else if(b[1] == "*" && a[3] != "*")
    {
        strcpy(temp, a[3].c_str());
        strcpy(aux, b[1].c_str());
        strcpy(aux, temp);
        b[1] = string(aux);
        a[3] = "*";
    }
    else if(b[2] == "*" && a[3] != "*")
    {
        strcpy(temp, a[3].c_str());
        strcpy(aux, b[2].c_str());
        strcpy(aux, temp);
        b[2] = string(aux);
        a[3] = "*";
    }
    else if(b[3] == "*" && a[3] != "*")
    {
        strcpy(temp, a[3].c_str());
        strcpy(aux, b[3].c_str());
        strcpy(aux, temp);
        b[3] = string(aux);
        a[3] = "*";
    }

    else if(b[0] == "*" && c[3] != "*")
    {
        strcpy(temp, c[3].c_str());
        strcpy(aux, b[0].c_str());
        strcpy(aux, temp);
        b[0] = string(aux);
        c[3] = "*";
    }
    else if(b[1] == "*" && c[3] != "*")
    {
        strcpy(temp, c[3].c_str());
        strcpy(aux, b[1].c_str());
        strcpy(aux, temp);
        c[1] = string(aux);
        a[3] = "*";
    }
    else if(b[2] == "*" && c[3] != "*")
    {
        strcpy(temp, c[3].c_str());
        strcpy(aux, b[2].c_str());
        strcpy(aux, temp);
        b[2] = string(aux);
        c[3] = "*";
    }
    else if(b[3] == "*" && c[3] != "*")
    {
        strcpy(temp, c[3].c_str());
        strcpy(aux, b[3].c_str());
        strcpy(aux, temp);
        b[3] = string(aux);
        c[3] = "*";
    }




    else if(b[0] == "*" && a[2] != "*")
    {
        strcpy(temp2, a[2].c_str());
        strcpy(aux2, b[0].c_str());
        strcpy(aux2, temp2);
        b[0] = string(aux2);
        a[2] = "*";
    }
    else if(b[1] == "*" && a[2] != "*")
    {
        strcpy(temp2, a[2].c_str());
        strcpy(aux2, b[1].c_str());
        strcpy(aux2, temp2);
        b[1] = string(aux2);
        a[2] = "*";
    }
    else if(b[2] == "*" && a[2] != "*")
    {
        strcpy(temp2, a[2].c_str());
        strcpy(aux2, b[2].c_str());
        strcpy(aux2, temp2);
        b[2] = string(aux2);
        a[2] = "*";
    }
    else if(b[3] == "*" && a[2] != "*")
    {
        strcpy(temp2, a[2].c_str());
        strcpy(aux2, b[3].c_str());
        strcpy(aux2, temp2);
        b[3] = string(aux2);
        a[2] = "*";
    }

    else if(b[0] == "*" && c[2] != "*")
    {
        strcpy(temp2, c[2].c_str());
        strcpy(aux2, b[0].c_str());
        strcpy(aux2, temp2);
        b[0] = string(aux2);
        c[2] = "*";
    }
    else if(b[1] == "*" && c[2] != "*")
    {
        strcpy(temp2, c[2].c_str());
        strcpy(aux2, b[1].c_str());
        strcpy(aux2, temp2);
        b[1] = string(aux2);
        c[2] = "*";
    }
    else if(b[2] == "*" && c[2] != "*")
    {
        strcpy(temp2, c[2].c_str());
        strcpy(aux2, b[2].c_str());
        strcpy(aux2, temp2);
        b[2] = string(aux2);
        c[2] = "*";
    }
    else if(b[3] == "*" && c[2] != "*")
    {
        strcpy(temp2, c[2].c_str());
        strcpy(aux2, b[3].c_str());
        strcpy(aux2, temp2);
        b[3] = string(aux2);
        c[2] = "*";
    }




    else if(b[0] == "*" && a[1] != "*")
    {
        strcpy(temp3, a[1].c_str());
        strcpy(aux3, b[0].c_str());
        strcpy(aux3, temp3);
        b[0] = string(aux3);
        a[1] = "*";
    }
    else if(b[1] == "*" && a[1] != "*")
    {
        strcpy(temp3, a[1].c_str());
        strcpy(aux3, b[1].c_str());
        strcpy(aux3, temp3);
        b[1] = string(aux3);
        a[1] = "*";
    }
    else if(b[2] == "*" && a[1] != "*")
    {
        strcpy(temp3, a[1].c_str());
        strcpy(aux3, b[2].c_str());
        strcpy(aux3, temp3);
        b[2] = string(aux3);
        a[1] = "*";
    }
    else if(b[3] == "*" && a[1] != "*")
    {
        strcpy(temp3, a[1].c_str());
        strcpy(aux3, b[3].c_str());
        strcpy(aux3, temp3);
        b[3] = string(aux3);
        a[1] = "*";
    }

    else if(b[0] == "*" && c[1] != "*")
    {
        strcpy(temp3, c[1].c_str());
        strcpy(aux3, b[0].c_str());
        strcpy(aux3, temp3);
        b[0] = string(aux3);
        c[1] = "*";
    }
    else if(b[1] == "*" && c[1] != "*")
    {
        strcpy(temp3, c[1].c_str());
        strcpy(aux3, b[1].c_str());
        strcpy(aux3, temp3);
        b[1] = string(aux3);
        c[1] = "*";
    }
    else if(b[2] == "*" && c[1] != "*")
    {
        strcpy(temp3, c[1].c_str());
        strcpy(aux3, b[2].c_str());
        strcpy(aux3, temp3);
        b[2] = string(aux3);
        c[1] = "*";
    }
    else if(b[3] == "*" && c[1] != "*")
    {
        strcpy(temp3, c[1].c_str());
        strcpy(aux3, b[3].c_str());
        strcpy(aux3, temp3);
        b[3] = string(aux3);
        c[1] = "*";
    }




    else if(b[0] == "*" && a[0] != "*")
    {
        strcpy(temp4, a[0].c_str());
        strcpy(aux4, b[0].c_str());
        strcpy(aux4, temp4);
        b[0] = string(aux4);
        a[0] = "*";
    }
    else if(b[1] == "*" && a[0] != "*")
    {
        strcpy(temp4, a[0].c_str());
        strcpy(aux4, b[1].c_str());
        strcpy(aux4, temp4);
        b[1] = string(aux4);
        a[0] = "*";
    }
    else if(b[2] == "*" && a[0] != "*")
    {
        strcpy(temp4, a[0].c_str());
        strcpy(aux4, b[2].c_str());
        strcpy(aux4, temp4);
        b[2] = string(aux4);
        a[0] = "*";
    }
    else if(b[3] == "*" && a[0] != "*")
    {
        strcpy(temp4, a[0].c_str());
        strcpy(aux4, b[3].c_str());
        strcpy(aux4, temp4);
        b[3] = string(aux4);
        a[0] = "*";
    }

    else if (b[0] == "*" && c[0] != "*")
    {
        strcpy(temp4, c[0].c_str());
        strcpy(aux4, b[0].c_str());
        strcpy(aux4, temp4);
        b[0] = string(aux4);
        c[0] = "*";
    }
    else if(b[1] == "*" && c[0] != "*")
    {
        strcpy(temp4, c[0].c_str());
        strcpy(aux4, b[1].c_str());
        strcpy(aux4, temp4);
        b[1] = string(aux4);
        c[0] = "*";
    }
    else if(b[2] == "*" && c[0] != "*")
    {
        strcpy(temp4, c[0].c_str());
        strcpy(aux4, b[2].c_str());
        strcpy(aux4, temp4);
        b[2] = string(aux4);
        c[0] = "*";
    }
    else if(b[3] == "*" && c[0] != "*")
    {
        strcpy(temp4, c[0].c_str());
        strcpy(aux4, b[3].c_str());
        strcpy(aux4, temp4);
        b[3] = string(aux4);
        c[0] = "*";
    }
}
//variable que verifica las condiciones para la torre C o string c[5]
void C(string a[5], string b[5], string c[5]) //funcion que no retorna un valor pero que tiene tres parametros de tipo string
{
    char aux[10];
    char temp[10];
    char aux2[10];
    char temp2[10];
    char aux3[10];
    char temp3[10];
    char aux4[10];
    char temp4[10];

    if(c[0] == "*" && a[3] != "*")
    {
        strcpy(temp, a[3].c_str());
        strcpy(aux, c[0].c_str());
        strcpy(aux, temp);
        c[0] = string(aux);
        a[3] = "*";
    }
    else if(c[1] == "*" && a[3] != "*")
    {
        strcpy(temp, a[3].c_str());
        strcpy(aux, c[1].c_str());
        strcpy(aux, temp);
        c[1] = string(aux);
        a[3] = "*";
    }
    else if(c[2] == "*" && a[3] != "*")
    {
        strcpy(temp, a[3].c_str());
        strcpy(aux, c[2].c_str());
        strcpy(aux, temp);
        c[2] = string(aux);
        a[3] = "*";
    }
    else if(c[3] == "*" && a[3] != "*")
    {
        strcpy(temp, a[3].c_str());
        strcpy(aux, c[3].c_str());
        strcpy(aux, temp);
        c[3] = string(aux);
        a[3] = "*";
    }

    else if(c[0] == "*" && b[3] != "*")
    {
        strcpy(temp, b[3].c_str());
        strcpy(aux, c[0].c_str());
        strcpy(aux, temp);
        c[0] = string(aux);
        b[3] = "*";
    }
    else if(c[1] == "*" && b[3] != "*")
    {
        strcpy(temp, b[3].c_str());
        strcpy(aux, c[1].c_str());
        strcpy(aux, temp);
        c[1] = string(aux);
        b[3] = "*";
    }
    else if(c[2] == "*" && b[3] != "*")
    {
        strcpy(temp, b[3].c_str());
        strcpy(aux, c[2].c_str());
        strcpy(aux, temp);
        c[2] = string(aux);
        b[3] = "*";
    }
    else if(c[3] == "*" && b[3] != "*")
    {
        strcpy(temp, b[3].c_str());
        strcpy(aux, c[3].c_str());
        strcpy(aux, temp);
        c[3] = string(aux);
        b[3] = "*";
    }




    else if(c[0] == "*" && a[2] != "*")
    {
        strcpy(temp2, a[2].c_str());
        strcpy(aux2, c[0].c_str());
        strcpy(aux2, temp2);
        c[0] = string(aux2);
        a[2] = "*";
    }
    else if(c[1] == "*" && a[2] != "*")
    {
        strcpy(temp2, a[2].c_str());
        strcpy(aux2, c[1].c_str());
        strcpy(aux2, temp2);
        c[1] = string(aux2);
        a[2] = "*";
    }
    else if(c[2] == "*" && a[2] != "*")
    {
        strcpy(temp2, a[2].c_str());
        strcpy(aux2, c[2].c_str());
        strcpy(aux2, temp2);
        c[2] = string(aux2);
        a[2] = "*";
    }
    else if(c[3] == "*" && a[2] != "*")
    {
        strcpy(temp2, a[2].c_str());
        strcpy(aux2, c[3].c_str());
        strcpy(aux2, temp2);
        c[3] = string(aux2);
        a[2] = "*";
    }

    else if(c[0] == "*" && b[2] != "*")
    {
        strcpy(temp2, b[2].c_str());
        strcpy(aux2, c[0].c_str());
        strcpy(aux2, temp2);
        c[0] = string(aux2);
        b[2] = "*";
    }
    else if(c[1] == "*" && b[2] != "*")
    {
        strcpy(temp2, b[2].c_str());
        strcpy(aux2, c[1].c_str());
        strcpy(aux2, temp2);
        c[1] = string(aux2);
        b[2] = "*";
    }
    else if(c[2] == "*" && b[2] != "*")
    {
        strcpy(temp2, b[2].c_str());
        strcpy(aux2, c[2].c_str());
        strcpy(aux2, temp2);
        c[2] = string(aux2);
        b[2] = "*";
    }
    else if(c[3] == "*" && b[2] != "*")
    {
        strcpy(temp2, b[2].c_str());
        strcpy(aux2, c[3].c_str());
        strcpy(aux2, temp2);
        c[3] = string(aux2);
        b[2] = "*";
    }




    else if(c[0] == "*" && a[1] != "*")
    {
        strcpy(temp3, a[1].c_str());
        strcpy(aux3, c[0].c_str());
        strcpy(aux3, temp3);
        c[0] = string(aux3);
        a[1] = "*";
    }
    else if(c[1] == "*" && a[1] != "*")
    {
        strcpy(temp3, a[1].c_str());
        strcpy(aux3, c[1].c_str());
        strcpy(aux3, temp3);
        c[1] = string(aux3);
        a[1] = "*";
    }
    else if(c[2] == "*" && a[1] != "*")
    {
        strcpy(temp3, a[1].c_str());
        strcpy(aux3, c[2].c_str());
        strcpy(aux3, temp3);
        c[2] = string(aux3);
        a[1] = "*";
    }
    else if(c[3] == "*" && a[1] != "*")
    {
        strcpy(temp3, a[1].c_str());
        strcpy(aux3, c[3].c_str());
        strcpy(aux3, temp3);
        c[3] = string(aux3);
        a[1] = "*";
    }

    else if(c[0] == "*" && b[1] != "*")
    {
        strcpy(temp3, b[1].c_str());
        strcpy(aux3, c[0].c_str());
        strcpy(aux3, temp3);
        c[0] = string(aux3);
        b[1] = "*";
    }
    else if(c[1] == "*" && b[1] != "*")
    {
        strcpy(temp3, b[1].c_str());
        strcpy(aux3, c[1].c_str());
        strcpy(aux3, temp3);
        c[1] = string(aux3);
        b[1] = "*";
    }
    else if(c[2] == "*" && b[1] != "*")
    {
        strcpy(temp3, b[1].c_str());
        strcpy(aux3, c[2].c_str());
        strcpy(aux3, temp3);
        c[2] = string(aux3);
        b[1] = "*";
    }
    else if(c[3] == "*" && b[1] != "*")
    {
        strcpy(temp3, b[1].c_str());
        strcpy(aux3, c[3].c_str());
        strcpy(aux3, temp3);
        c[3] = string(aux3);
        b[1] = "*";
    }




    else if(c[0] == "*" && a[0] != "*")
    {
        strcpy(temp4, a[0].c_str());
        strcpy(aux4, c[0].c_str());
        strcpy(aux4, temp4);
        c[0] = string(aux4);
        a[0] = "*";
    }
    else if(c[1] == "*" && a[0] != "*")
    {
        strcpy(temp4, a[0].c_str());
        strcpy(aux4, c[1].c_str());
        strcpy(aux4, temp4);
        c[1] = string(aux4);
        a[0] = "*";
    }
    else if(c[2] == "*" && a[0] != "*")
    {
        strcpy(temp4, a[0].c_str());
        strcpy(aux4, c[2].c_str());
        strcpy(aux4, temp4);
        c[2] = string(aux4);
        a[0] = "*";
    }
    else if(c[3] == "*" && a[0] != "*")
    {
        strcpy(temp4, a[0].c_str());
        strcpy(aux4, c[3].c_str());
        strcpy(aux4, temp4);
        c[3] = string(aux4);
        a[0] = "*";
    }

    else if(c[0] == "*" && b[0] != "*")
    {
        strcpy(temp4, b[0].c_str());
        strcpy(aux4, c[0].c_str());
        strcpy(aux4, temp4);
        c[0] = string(aux4);
        b[0] = "*";
    }
    else if(c[1] == "*" && b[0] != "*")
    {
        strcpy(temp4, b[0].c_str());
        strcpy(aux4, c[1].c_str());
        strcpy(aux4, temp4);
        c[1] = string(aux4);
        b[0] = "*";
    }
    else if(c[2] == "*" && b[0] != "*")
    {
        strcpy(temp4, b[0].c_str());
        strcpy(aux4, c[2].c_str());
        strcpy(aux4, temp4);
        c[2] = string(aux4);
        b[0] = "*";
    }
    else if(c[3] == "*" && b[0] != "*")
    {
        strcpy(temp4, b[0].c_str());
        strcpy(aux4, c[3].c_str());
        strcpy(aux4, temp4);
        c[3] = string(aux4);
        b[0] = "*";
    }
}

