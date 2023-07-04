#include "ventana_paciente.h"
#include "ui_ventana_paciente.h"

Ventana_paciente::Ventana_paciente(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_paciente)
{
    ui->setupUi(this);

    //ui->label->setText("¡Hola, mundo!");
    ui->Listas_Dias->addItem("Lunes");
    ui->Listas_Dias->addItem("Martes");
    ui->Listas_Dias->addItem("Miercoles");
    ui->Listas_Dias->addItem("Jueves");
    ui->Listas_Dias->addItem("Viernes");
    ui->Lista_Horarios->addItem("1-2");
    ui->Lista_Horarios->addItem("3-4");
    ui->Lista_Horarios->addItem("5-6");
    ui->Lista_Horarios->addItem("7-8");
    ui->Lista_Horarios->addItem("9-10");
    ui->Lista_Horarios->addItem("11-12");
    ui->Lista_Horarios->addItem("13-14");
    ui->Lista_Horarios->addItem("15-16");
    ui->Lista_Horarios->addItem("17-18");
    ui->Lista_Horarios->addItem("19-20");
}

Ventana_paciente::~Ventana_paciente()
{
    delete ui;
}
void Ventana_paciente::DiaSeleccionado(QListWidgetItem *item){
    QString dia = item->text();
   // Lista_Horarios->clear();
}
/*
void Widget::cambiarTextoEtiqueta()
{
    ui->label->setText("¡Hola, mundo!");
}


*/
