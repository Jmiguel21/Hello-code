#include <iostream>
#include <fstream>

int main() {
    std::ofstream archivo("materias.txt");
    
    if (!archivo) {
        std::cerr << "Error al abrir el archivo." << std::endl;
        return 1;
    }
    
    archivo << "EC-1251 - Circuitos Eléctricos 1" << std::endl;
    archivo << "FS-2181 - Laboratorio de Física 1" << std::endl;
    archivo << "EC-2262 - Análisis de Circuitos Lineales" << std::endl;
    archivo << "CI-2125 - Computación 1" << std::endl;
    archivo << "CT-1212 - Introducción a la Ingeniería Eléctrica" << std::endl;
    
    archivo.close();
    std::cout << "Archivo generado exitosamente." << std::endl;
    
    return 0;
}
