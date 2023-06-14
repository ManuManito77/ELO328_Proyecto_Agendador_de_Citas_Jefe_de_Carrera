#include "widget.h"

#include <QApplication>
#include <iostream>
#include <vector>

// Clase para representar un paciente
class Paciente {
public:
    std::string nombre;
    std::string contacto;

    Paciente(const std::string& nombre, const std::string& contacto) : nombre(nombre), contacto(contacto) {}
};

// Clase para representar una cita médica
class Cita {
public:
    std::string fecha;
    std::string hora;
    std::string especialidad;
    Paciente paciente;

    Cita(const std::string& fecha, const std::string& hora, const std::string& especialidad, const Paciente& paciente)
        : fecha(fecha), hora(hora), especialidad(especialidad), paciente(paciente) {}
};

// Clase para representar una clínica médica
class Clinica {
public:
    std::vector<Cita> citas;

    void programarCita(const Cita& cita) {
        citas.push_back(cita);
        std::cout << "Cita programada con éxito." << std::endl;
    }

    void mostrarCitas() {
        std::cout << "Citas programadas:" << std::endl;
        for (const auto& cita : citas) {
            std::cout << "Fecha: " << cita.fecha << ", Hora: " << cita.hora << ", Especialidad: " << cita.especialidad
                      << ", Paciente: " << cita.paciente.nombre << std::endl;
        }
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    std::cout << "Welcome!!" << std::endl;

    Clinica clinica;

    // Solicitar una cita
    std::string nombrePaciente = "Juan Perez";
    std::string contactoPaciente = "1234567890";
    Paciente paciente(nombrePaciente, contactoPaciente);

    std::string fechaCita = "2023-06-10";
    std::string horaCita = "14:30";
    std::string especialidadCita = "Cardiología";
        Cita cita(fechaCita, horaCita, especialidadCita, paciente);

    clinica.programarCita(cita);

    // Mostrar citas programadas
    clinica.mostrarCitas();

    return a.exec();
}
