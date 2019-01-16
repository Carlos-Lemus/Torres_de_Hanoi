#include <windows.h> /// libreria para utilizar sus funciones
#include <stdio.h> /// libreria para utilizar sus funciones
#include <conio.h> // libreria para utilizar sus funciones
#include <iostream> //libreria standard obligatoria para usar sus funciones

using namespace std; //espacio de nombre a usar std nos permite hacer mas cortas las lineas de codigo

/*Declaracion de funciones a usar
 ================================*/
void jugar(); //funcion donde se presentara las torres de hanoi
void registro(); //contiene los registros de las partidas
void ganaste(); //funcion que declara ganador al usuario
void salirregis(); //funcion que muestra mensaje al salir del registro
void llenar(string a[5], string b[5], string c[5]); //variable que rellena las torres previo a inicial el juego
void mostrar(string a[5], string b[5], string c[5]); //variable que muestra las torres o variables string  a[5], b[5], c[5]
void A(string a[5], string b[5], string c[5]);//Variable que verifica las condiciones de la torre A o string a[5]
void B(string a[5], string b[5], string c[5]);//Variable que verifica las condiciones de la torre B o string b[5]
void C(string a[5], string b[5], string c[5]);//Variable que verifica las condiciones de la torre C o string c[5]
int ganar(string c[5]); //funcion que evalua las condiciones para ganar
void errdat(); //declaracion de funcion que evita que se ingrese datos incorrectos

//**********defines funciones
void SetColorA(int color,int colorf);
void SetColorB(int color,int colorf);
void TextColor(int color);
void Gotoxy(int x,int y);
void Say(const char *txt);
void Say(int x,int y, const char *txt);
void Replicate(const char c,int can);

void ReplicateH(int x,int y,const char *c,int can);
void ReplicateV(int x,int y,const char *c,int can);

void Rectangle(int x,int y,int w,int h,const char *c);

void MSGBOX(const char *m1,const char *m2);
void Cls();
//****************MENU*********************

struct OPC
	{
		int id;
		char name[128];
	};


///////////////Define CLASE MENU *******************
class MENU
{

	public :
       MENU();
       virtual ~MENU();
       void Set_Color(int color,int colorb);
       void Set_Space(int s);
       void Add_Items(const char *txt, int index);
       int Draw(int x,int y);

    private:
		int COLOR,COLORB,ESPACIO;

		int con;
		OPC Opc[10];
		int OPC_SEL;
};
