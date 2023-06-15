#include "ventana_paciente.h"
#include "ui_ventana_paciente.h"

Ventana_paciente::Ventana_paciente(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_paciente)
{
    ui->setupUi(this);
}

Ventana_paciente::~Ventana_paciente()
{
    delete ui;
}
