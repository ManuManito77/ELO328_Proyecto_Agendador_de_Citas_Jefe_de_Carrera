#ifndef CITA_H
#define CITA_H

#include <string>
#include "paciente.h"
#include "funcionario.h"

using namespace std;

class Cita {
private:
    string fecha;
    string hora;
    string especialidad;
    Paciente* paciente;
    Funcionario* funcionario;

public:
    Cita(string fecha, string hora, string especialidad, Paciente* paciente, Funcionario* funcionario);

    string getFecha();
    string getHora();
    string getEspecialidad();
    Paciente* getPaciente();
    Funcionario* getFuncionario();
};

#endif // CITA_H
