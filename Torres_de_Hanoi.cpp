/*
    Programa hecho por Carlos Alfonso Lemus Rodezno

            TORRES DE HANOI
    Este programa recrea las torres de hanoi pero unicamente con 4 discos
    con un unico error, en las reglas del juego no se puede poner un disco
    grande en uno pequeño este codigo no contempla esa regla por lo que se
    puede decir que tiene este fallo
*/

//librerias a utilizar
#include <iostream> //libreria standard obligatoria para usar sus funciones
#include <cstdlib> // libreria para utilizar sus funciones
#include <cstring>  // libreria para utilizar sus funciones de cadenas
#include <stdio.h> //libreria para utilizar sus funciones
#include <windows.h> //libreria para utilizar sus funciones
#include <fstream>
#include "mis_funciones.h" /* libreria para utilizar sus funciones ademas esta libreria se encuentra dentro de la
                            carpeta del programa */

int opc = 0; //declaracion de variables
MENU miMenu; //objeto de tipo miMenu

using namespace std; //espacio de nombre a usar std nos permite hacer mas cortas las lineas de codigo

int main() //funcion principal main sera la primera funcion en iniciar al ejecutar el programa
{
    Cls(); //funcion para borrar los textos de la pantalla
	system("color 2D"); //funcion para daele un color al fondo y letra de la consola
	fflush(stdin); //funcion que limpia el buffer
    bool Salir = false;

    //Metodos o funciones del objeto miMenu para crear las opciones del menu principal
	miMenu.Add_Items("1. Jugar     ",1);
	miMenu.Add_Items("2. Registrar ",2);
	miMenu.Add_Items("3. Salir     ",3);

	miMenu.Set_Space(2); //Metodo o funcion del objeto miMenu con este se le da espacio a las opciones

	do {

		TextColor(30); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
		Say(55,4,"Juega y diviertete"); //funcion para imprimir texto en la pantalla en cualquier ubicacion de la pantalla
		Say(54,6,"<< TORRES DE HANOI >>"); //funcion para imprimir texto en la pantalla en cualquier ubicacion de la pantalla

		if(opc == 0) {

			SetColorB(24,20); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
			Rectangle(30,10,65,12,"X"); //funcion que permite imprimir un rectangulo en la consola
			SetColorA(2,22); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
			Say(52,10,"*** ESCOJE UNA OPCION ***"); //funcion para imprimir texto en la pantalla en cualquier ubicacion de la pantalla
	  		opc = miMenu.Draw(56,13); //variable que almacena un Metodo o funcion del objeto miMenu
		}

	   	switch (opc) //setencia switch para permitir una elejir una opcion al usuario
		{
			case 1:
                Cls(); //funcion para borrar los textos de la pantalla
                jugar();
				break;
			case 2:
                Cls(); //funcion para borrar los textos de la pantalla
                registro();
				break;
			case 3:
                Cls(); //funcion para borrar los textos de la pantalla
                Salir = true;
				break;
		}
	} while (Salir == false);

	return 0; //la funcion retorna un valor de tipo entero
}
//funcion donde se presentara las torres de hanoi
void jugar() //funcion sin retorno y sin parametros
{
    ofstream archivo; //objeto de tipo fstream nos permitira vrear y manipular un objeto

    archivo.open("registro.txt", ios::out); /*esta linea de codigo significa que se creara un archivo txt y se escribira en el
                                            en caso de ya haber uno solo se abrira y se escribira en el */

    //Declaracion de variables
    string a[5];
    string b[5];
    string c[5];
    char opcion;
    int terminar = 0;
    int acum = 0; //funcion que dirige al usuario a la funcion

    llenar(a, b, c); // funcion que rellenara las posicicones  de las variables antes de inciar el juego

    do {
        Cls(); //funcion para borrar los textos de la pantalla
        system("color 2D"); //funcion para daele un color al fondo y letra de la consola

        TextColor(17); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
        Rectangle(30,10,65,12,"X"); //funcion que permite imprimir un rectangulo en la consola
        mostrar(a, b, c); //funcion que perimete imprimir las torres de hanoi
        terminar = ganar(c); //variable que almacena la funcion ganar para perimiter evaluar las condiciones para ganar

        TextColor(46); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
		Say(56,4,"Ordena los discos"); //funcion para imprimir texto en la pantalla en cualquier ubicacion de la pantalla
		Say(54,6,"<< TORRES DE HANOI >>"); //funcion para imprimir texto en la pantalla en cualquier ubicacion de la pantalla

        Gotoxy(52, 20); //funcion que permite pone texto en cualquier lugar de la pantalla
        TextColor(47); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
        cout << "Ingrese una posicion: ";
        fflush(stdin); //funcion que limpia el buffer
        cin >> opcion;
        errdat(); //evita error de ingreso de datos

        switch(opcion) //setencia switch para permitir una elejir una opcion al usuario
        {
            case 'A':
                A(a, b, c);
                break;
            case 'B':
                B(a, b, c);
                break;
            case 'C':
                C(a, b, c);
                break;
            case 'a':
                A(a, b, c);
                break;
            case 'b':
                B(a, b, c);
                break;
            case 'c':
                C(a, b, c);
                break;
        }
        acum += 1; //variable acumuladora
    } while (terminar == 0 || cin.fail()); //ciclo que evita datos erroneos y finaliza hasta las condiciones para ganar se cumplen

    archivo << endl << endl <<"\t\t\t\t\t\t     Torres de hanoi" << endl << endl << endl; //Se escribe en el archivo txt
    archivo << "\t\t\t\t\t\t\tRegistro" << endl << endl; //Se escribe en el archivo txt
    archivo << "\t\t\t\tTotal de pasos que se usaron para resolver el juego: " << acum; //Se escribe en el archivo txt
    archivo << endl <<  endl; //Se escribe en el archivo txt

    archivo.close(); //funcion o metodo que cierra el archivo
    opc = 0;
    Gotoxy(44, 25); //funcion que permite pone texto en cualquier lugar de la pantalla
    system("pause"); //funcion que pausa el programa has tocar una tecla
    ganaste(); //funcion que dirige al usuario a la funcion ganaste()
}

//contiene los registros de las partidas
void registro() //funcion sin retorno ni parametros
{
    system("color 4D"); //funcion para dar un color al fondo y letra de la consola
    fstream archivo; //objeto del tipo fstream
    string texto; //Declaracion de variable

    archivo.open("registro.txt" , ios::in); /*esta linea de codigo significa que se abrira el archivo y se
                                            solo se podra leer los datos de este */

    //condicion que verificara que no halla errores en el archivo
    if(archivo.fail()){

        cout << "\n\n\t\t\t\t\tSe produjo un error, ingrese a la jugar primero\n\n";
        system("pause");
        salirregis();

    }

    while(!archivo.eof()) //ciclo para imprimir los datos del archivo txt
    {
        getline(archivo, texto);
        cout << texto << endl;
    }

    archivo.close(); //funcion o metodo que cierra el archivo txt
    system("pause"); //pausa el programa hasta que se toca algun boton
    salirregis(); //dirije al ususario a la funcion main al finalizar esta funcion
}

//funcion que declara ganador al usuario
void ganaste() //funcion sin retorno ni parametros
{
    Cls(); //funcion para borrar los textos de la pantalla
    system("color 5C"); //funcion para daele un color al fondo y letra de la consola

    Say(54,6,"<< TORRES DE HANOI >>"); //funcion para imprimir texto en la pantalla en cualquier ubicacion de la pantalla

    TextColor(12); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    Rectangle(30,10,65,12,"\/"); //funcion que permite imprimir un rectangulo en la consola

    SetColorA(2,22); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    Say(48,16,"*** FELICIDADES HAS GANADO ***"); //funcion para imprimir texto en la pantalla en cualquier ubicacion de la pantalla
    int tec = getch(); //variable que almacena la funcion getch() esto permite detectar si se toca una tecla para poder avanzar
    opc = 0;

    main(); //funcion que dirige al usuario a la funcion salirregis()
}

//funcion que muestra mensaje al salir del registro
void salirregis() //funcion sin retorno ni parametros
{
    Cls(); //funcion para borrar los textos de la pantalla
    system("color 3E"); //funcion para daele un color al fondo y letra de la consola

    Say(54,6,"<< TORRES DE HANOI >>"); //funcion para imprimir texto en la pantalla en cualquier ubicacion de la pantalla

    TextColor(12); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    Rectangle(30,10,65,12,"#"); //funcion que permite imprimir un rectangulo en la consola

    SetColorA(2,22); //funcion que perimete darle color  de fondo y letra al texto en la pantalla
    Say(48,16,">>> Registro de Partidas <<<"); //funcion para imprimir texto en la pantalla en cualquier ubicacion de la pantalla
    int tec = getch(); //variable que almacena la funcion getch() esto permite detectar si se toca una tecla para poder avanzar
    opc = 0;

    main(); //funcion que dirige al usuario a la funcion main()
}

//funcion que evalua las condiciones para ganar
int ganar(string c[5]) //funcion que retorno un valor de tipo int y con un parametro de tipo string o cadena
{
    //si todas las condiciones se cumpla retornara un 1
    if(c[3] == "***")
    {
        if(c[2] == "*****")
        {
            if(c[1] == "*******")
            {
                if(c[0] == "*********")
                {
                    return 1;
                }
            }
        }
    }
    //sino se cumplen las condiciones se retornara un cero
    return 0;
}

void errdat() //funcion que evita que se ingrese datos incorrectos
{
		//Ciclo while paraevitar datos incorrectos
		while(cin.fail()){

		//Limpia el buffer de los datos ingresados
		cin.clear();

		//Ignora los primeros 1000 caracteres o en este caso los numeros
		cin.ignore(1000,'\n');

		}
}
