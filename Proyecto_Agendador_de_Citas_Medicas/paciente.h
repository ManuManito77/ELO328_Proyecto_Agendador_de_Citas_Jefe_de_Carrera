#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>

class Paciente {
private:
    std::string nombre;
    std::string contacto;

public:
    Paciente(const std::string& nombre, const std::string& contacto);
    std::string getNombre() const;
    std::string getContacto() const;
};

#endif // PACIENTE_H
