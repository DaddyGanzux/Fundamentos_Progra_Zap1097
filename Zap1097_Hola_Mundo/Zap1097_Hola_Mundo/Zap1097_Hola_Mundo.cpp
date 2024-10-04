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
    //Inicialezaremos las variables de diferentes tipos
    //Tipo Nombre = Valor asignado de diferentes tipos
    //Para guardar numeros enteros Reales
    int Edad = 0;
    //Para guardar numeros decimales
    float Altura = 0;
    //Para guardar VERDADES o FALSEDADES
    bool esVerdadero;
    //Para guardar numeros REALMENTE EXTENSOS
    double Expoencial = 0;
    //Para guardar letras!!
    char sexo = 0;
    //Para guardar cadenas de caracteres osea muchas letras 
    char nombre[15] = " ";
    std::string name = " ";

    //Hablemos con el usuario y solisitemos la información.
    std::cout << "Cuentame!! Que edad tienes? ";
    std::cin >> Edad;
    std::cout << "Entonces tienes. " << Edad << " de edad,  exelente, pasele joven.";

    //Hablemos con el usuario
    std::cout << " ¿Cual es tú altura?";
    std::cin >> Altura;
    std::cout << "Entonces mides " << Altura << ", que chaparro.";
    std::cout << " ¿Cúal es tu sexo? ";
    std::cin >> nombre;
    if (nombre == "Núlo") {
        esVerdadero = true;
    }
    if (nombre == "Hombre|Mijer") {
        esVerdadero = false;
    }
    if (true) {
        std::cout << "Entonces sos virgen," << std::endl;
    }
    if (false)  {
        std::cout << "Entonces sos " << nombre <<"," << std::endl;
    }
    std::cout << "Tal vez te lo debí de preguntar antes pero ¿Cúal es tu nombre? ";
    std::cin >> sexo;
    std::cout << "Te dire " << sexo << " ¿te parece? ¿No? bueno continuemos con las operaciones";
    //Operaciones (Suma, resta, multiplicación y división)
    std::cout << " de Edad y Altura:" << std::endl;

    //Suma
    std::cout << "Suma: " << Edad + Altura << std::endl;

    //Resta
    std::cout << "Resta: " << Edad - Altura << std::endl;

    //Multiplicación
    std::cout << "Multiplicación: " << Edad * Altura << std::endl;

    // División
    if (Altura != 0) {
        std::cout << "División: " << Edad / Altura << std::endl;
    }
    else {
        std::cout << "No se puede dividir por cero." << std::endl;
    }

    return 0;
}

