#include "widget.h"

#include <QApplication>
#include <iostream>
#include "clinica.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    cout << "Welcome!!" << std::endl;

// Crear objetos Paciente
    Paciente* paciente1 = new Paciente("Juan Pérez", "123456789");
    Paciente* paciente2 = new Paciente("María Gómez", "987654321");

    // Crear objetos Funcionario
    Funcionario* funcionario1 = new Funcionario("Dr. López", "Pediatría");
    Funcionario* funcionario2 = new Funcionario("Dra. García", "Dermatología");

    // Crear objetos Cita
    Cita* cita1 = new Cita("2023-06-05", "09:00", "Pediatría", paciente1, funcionario1);
    Cita* cita2 = new Cita("2023-06-06", "14:30", "Dermatología", paciente2, funcionario2);

    // Crear objeto Clínica
    Clinica clinica;
    clinica.agregarCita(cita1);
    clinica.agregarCita(cita2);

    // Mostrar citas programadas
    clinica.mostrarCitas();

    Widget w(1, nullptr);
    w.show();

    // Liberar memoria
    delete paciente1;
    delete paciente2;
    delete funcionario1;
    delete funcionario2;
    delete cita1;
    delete cita2;

    return a.exec();
}
