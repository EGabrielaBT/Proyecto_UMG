#include <iostream>
#include <algorithm>
#include <cctype>
#include <limits>

// Funci�n para limpiar la cadena eliminando caracteres no alfanum�ricos y convirtiendo a min�sculas
std::string limpiarCadena(const std::string& str) {
    std::string limpio;
    for (char c : str) {
        if (std::isalnum(static_cast<unsigned char>(c))) {
            limpio += std::tolower(static_cast<unsigned char>(c));
        }
    }
    return limpio;
}

// Funci�n para verificar si la cadena es un pal�ndromo
bool esPalindromo(const std::string& str) {
    std::string limpio = limpiarCadena(str);
    if (limpio.empty()) {
        return false; // Cadena vac�a no se considera pal�ndromo
    }
    std::string reverso = limpio;
    std::reverse(reverso.begin(), reverso.end());
    return limpio == reverso;
}

int main() {
    char opcion;
    
    do {
        std::string entrada;
        std::cout << "\nIngrese una palabra, frase o numero: ";
        std::getline(std::cin, entrada);
        
        // Verificar si la entrada est� vac�a
        if (entrada.empty()) {
            std::cout << "Error: No se ingreso ningun texto." << std::endl;
            continue;
        }
        
        // Verificar si la entrada limpia est� vac�a (solo caracteres no alfanum�ricos)
        std::string limpio = limpiarCadena(entrada);
        if (limpio.empty()) {
            std::cout << "Error: La entrada no contiene caracteres alfanumericos validos." << std::endl;
            continue;
        }
        
        if (esPalindromo(entrada)) {
            std::cout << "\n\"" << entrada << "\" ES un palindromo." << std::endl;
        } else {
            std::cout << "\n\"" << entrada << "\" NO es un palindromo." << std::endl;
        }
        
        std::cout << "\nDesea verificar otro palindromo? (s/n): ";
        std::cin >> opcion;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
    } while (std::tolower(opcion) == 's');
    
    std::cout << "\nPresione Enter para salir...";
    std::cin.ignore();
    
    return 0;
}
