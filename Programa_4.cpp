#include <iostream>
#include <algorithm>
#include <cctype>

// Funci�n para limpiar la cadena eliminando espacios y convirtiendo a min�sculas
std::string limpiarCadena(const std::string& str) {
    std::string limpio;
    for (char c : str) {
        if (std::isalnum(c)) {
            limpio += std::tolower(c);
        }
    }
    return limpio;
}

// Funci�n para verificar si la cadena es un pal�ndromo
bool esPalindromo(const std::string& str) {
    std::string limpio = limpiarCadena(str);
    std::string reverso = limpio;
    std::reverse(reverso.begin(), reverso.end());
    return limpio == reverso;
}

int main() {
    std::string entrada;
    std::cout << "Ingrese una palabra o un numero: ";
    std::getline(std::cin, entrada);
    
    if (esPalindromo(entrada)) {
        std::cout << "\nEs un palindromo." << std::endl;
    } else {
        std::cout << "\nNo es un palindromo." << std::endl;
    }
    
    return 0;
}

