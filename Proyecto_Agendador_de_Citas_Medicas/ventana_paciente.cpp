#include "ventana_paciente.h"
#include "ui_ventana_paciente.h"

Ventana_paciente::Ventana_paciente(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_paciente)
{
    ui->setupUi(this);
    //ui->label->setText("¡Hola, mundo!");
    ui->listWidget->addItem("hello!");
    ui->listWidget->addItem("hello!");
}

Ventana_paciente::~Ventana_paciente()
{
    delete ui;
}

/*
void Widget::cambiarTextoEtiqueta()
{
    ui->label->setText("¡Hola, mundo!");
}


*/
