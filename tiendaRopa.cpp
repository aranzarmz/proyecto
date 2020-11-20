/*
Avance 2 Proyecto
Nombre: Aranza Ramírez Mora
Matrícula: A017746
20/11/2020
*/

/*
Descripción:
Este es un avance para el proyecto de la clase de Pensamiento Computacional Orientado a Objetos. 
Es un programa el cual nos muestra la variedad de tallas y colores que tienen los productos de una tienda de ropa.
Así también, se podrá mostrar el tipo de corte de las playeras, el género de los pantalones y se podrán hacer compras para los zapatos.
*/

//Bibliotecas
#include<iostream>  // Usada para imprimir.
#include<string>     // Para el uso de strings.
#include "Producto.h" // Clase padre llamada "Producto"
#include "Playeras.h" // Clase hija llamada "Playeras"
#include "Pantalones.h" // Clase hija llamada "Pantalones"
#include "Zapatos.h" // Clase hija llamada "Zapatos"


using namespace std;

int main(){
	
	// Creando objetos de la clase hija "Playeras" con parámetros predeterminados.
	Playeras p1(4.0,"blanco","Regular Fit");
	Playeras p2(5.0, "verde","Tailored Fit");
	
    // Creando objetos de la clase hija "Pantalones" con parámetros predeterminados.
	Pantalones pan1(6.0, "cafe","Hombre");
	Pantalones pan2(4.0, "azul","Mujer");
	
	// Creando objetos de la clase hija "Zapatos" con parámetros predeterminados.
	Zapatos z1(25.0, "negro",900.00,2);
	Zapatos z2(23.0, "gris",450.00,1);
	
	/*
	// Creando objeto utilizando los setters de la clase "Playeras"
	Playeras p3;
	p3.set_talla(6.0);
	p3.set_color("rosa");
	
	// Creando objeto utilizando los setters de la clase "Pantalones"
	Pantalones pan3;
	pan3.set_talla(5.0);
	pan3.set_color("blanco");
	
	
	//Creando objeto utilizando los setters de la clase "Zapatos"
	Zapatos z3;
	z3.set_talla(24.0);
	z3.set_color("negro");
	*/
	
	
	cout<<"Que desea ver?"<<endl;
	int opcion = 0;
	
	// Se utiliza un while para que el usuario pueda seguir viendo los productos hasta que decida salir del programa
	while(opcion != 5){
		// Mostramos el catálogo de los productos de la tienda
		cout<<"\nCATALOGO\n"<<endl;
		cout<<"1. Playeras"<<endl;
		cout<<"2. Pantalones"<<endl;
		cout<<"3. Zapatos"<<endl;
		cout<<"4. Comprar zapatos"<<endl;
		cout<<"5. Salir\n"<<endl;
		
		// El usuario ingresará su opción deseada
		cin>>opcion;
		
		// Si la opción es 1, se mostrarán los colores y las tallas de cada objeto utilizando los getters de la clase "Playera"
		// Así también, se podrá checar el tipo de corte, que es un atributo de esta clase hija
		if(opcion == 1){
			cout<<"Color de playera 1: "<<p1.get_color()<<"\n Talla: "<<p1.get_talla()<<"\n Tipo de corte: "<<p1.get_tipo_corte()<<endl;
			cout<<"Color de playera 2: "<<p2.get_color()<<"\n Talla: "<<p2.get_talla()<<"\n Tipo de corte: "<<p2.get_tipo_corte()<<endl;
			//cout<<"Color de playera 3: "<<p3.get_color()<<"\n Talla: "<<p3.get_talla()<<endl;
		}
		
		// Si la opción es 2, se mostrarán los colores y las tallas de cada objeto utilizando los getters de la clase "Pantalones"
		// Así también, se podrá checar el genero, que es un atributo de esta clae hija
		else if(opcion == 2){
			cout<<"Color de pantalon 1: "<<pan1.get_color()<<"\n Talla: "<<pan1.get_talla()<<"\n Genero: "<<pan1.checar_genero()<<endl;
			cout<<"Color de pantalon 2: "<<pan2.get_color()<<"\n Talla: "<<pan2.get_talla()<<"\n Genero: "<<pan2.checar_genero()<<endl;
			//cout<<"Color de pantalon 3: "<<pan3.get_color()<<"\n Talla: "<<pan3.get_talla()<<endl;
		}
		
		// Si la opción es 3, se mostrarán los colores y las tallas de cada objeto utilizando los getters de la clase "Zapatos"
		else if(opcion == 3){
			cout<<"Color de zapatos 1: "<<z1.get_color()<<"\n Talla: "<<z1.get_talla()<<endl;
			cout<<"Color de zapatos 2: "<<z2.get_color()<<"\n Talla: "<<z2.get_talla()<<endl;
			//cout<<"Color de zapatos 3: "<<z3.get_color()<<"\n Talla: "<<z3.get_talla()<<endl;
		}
		
		// Si la opción es 4, el usuario podrá hacer compras de pares de zapatos, así como consultar el precio y la cantidad de pares de zapatos que ha comprado
		else if(opcion == 4){
			int pares;
			float pago;
			int total;
			cout<<"Cuantos pares quieres comprar: ";
			cin>>pares;
		    total = z1.comprar(pares);
			pago = z1.consultaPrecio(pares);
			cout<<"La cantidad a pagar es de $"<<pago<<endl;
			cout<<"\n"<<"Se han comprado en total "<<total<<" zapatos en "<<pares<<" pares en toda la tienda"<<endl;
		}
		
		// Si la opción es 5, se mostrará un mensaje de despedida al usuario ya que decidió salir
		else if(opcion == 5){
			cout<<"Gracias por visitarnos"<<endl;
		}
		
		// Si la opción es diferente a las anteriores, se mostrará un mensaje de error de que la opcion que eligió el usuario es inválida
		else {
			cout<<"ERROR: OPCION INVALIDA \n"<<endl;
		}
	}
	return 0;
}

