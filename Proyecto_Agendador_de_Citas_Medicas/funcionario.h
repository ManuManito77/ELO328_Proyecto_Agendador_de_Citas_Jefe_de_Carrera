#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario {
private:
    std::string nombre;
    std::string especialidad;

public:
    Funcionario(std::string nombre, std::string especialidad);

    std::string getNombre();
    std::string getEspecialidad();
};

#endif // FUNCIONARIO_H
