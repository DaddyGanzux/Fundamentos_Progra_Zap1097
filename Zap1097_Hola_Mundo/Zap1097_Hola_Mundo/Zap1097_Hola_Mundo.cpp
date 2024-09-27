// Zap1097_Hola_Mundo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Gonzalo Robles
//Este archivo contiene la función
//"main". La ejecución del programa
//comienza y termina aquí
//
// STD::

#include <iostream>
#include <math.h>
#include <time.h>
#include <Locale>//Libreria para cambiar idioma
#include <codecvt>//Librerias para cambiar codigos de UTF

int main()
{   //Maneras de configurar para que soporte ñ y acentos
    setlocale(LC_ALL, "es_MX.UFT-8");
    //\n es un salto de linea
    //std::endl;
    std::cout << "Ostias chaval pero que haces por aquí?\n";
    //Inicialezaremos las variables de diferentes tipos
    //Tipo Nombre = Valor asignado de diferentes tipos
    //Para guardar numeros enteros Reales
    int Edad = 0;
    //Para guardar numeros decimales
    float Altura = 0;
    float Cali = 0;
    //Para guardar VERDADES o FALSEDADES
    bool d1 = false;
    //Para guardar numeros REALMENTE EXTENSOS
    double Expoencial = 0;
    //Para guardar letras!!
    char sexo = 0;
    //Para guardar cadenas de caracteres osea muchas letras 
    char nombre[15] = " ";
    std::string name = " ";

    //Hablemos con el usuario y solisitemos la información.
    std::cout << "Cuentame!! Que edad tienes? ";
    //Para resivir datos del usuario necesitamos utilizar el protocolo de entrada de datos
    //STD::CIN >> Variable donde se guardarán los datos.
    std::cin >> Edad;
    std::cout << "Entonces tienes. " << Edad << " de edad,  exelente, pasele joven.";

        //Hablemos con el usuario
        std::cout << " Vale lo que haremos sera cocinar una tortilla Española ostia.";

        //Hablemos con el usuario y solisiremos la información.
        std::cout << " Busca la receta en internet, ¿Cuentas con todos los ingredientes?";
        //Para resivir datos del usuario necesitamos utilizar el protocolo de entrada de datos
        //STD::CIN >> Variable donde se guardarán los datos.
        std::cin >> d1;
        std::cout << "Excelente, continuemos entonces";
}
