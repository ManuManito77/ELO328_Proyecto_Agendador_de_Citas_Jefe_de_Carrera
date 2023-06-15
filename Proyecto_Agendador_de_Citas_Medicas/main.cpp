#include "widget.h"

#include <QApplication>
#include <iostream>
#include "Clinica.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    cout << "Welcome!!" << std::endl;

    Clinica clinica;

    // Solicitar una cita
    string nombrePaciente = "Juan Perez";
    string contactoPaciente = "1234567890";
    Paciente paciente(nombrePaciente, contactoPaciente);

    string fechaCita = "2023-06-10";
    string horaCita = "14:30";
    string especialidadCita = "Cardiología";
    Cita cita(fechaCita, horaCita, especialidadCita, paciente);

    clinica.programarCita(cita);

    // Mostrar citas programadas
    clinica.mostrarCitas();

    return a.exec();
}
