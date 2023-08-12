#include "widget.h"
#include "ui_widget.h"


Widget::Widget(int dato, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Para agregar una acción a un boton
    connect(ui->Pacientes, &QPushButton::clicked, this, &Widget::abrirVentanaPaciente);
    connect(ui->Funcionarios, &QPushButton::clicked, this, &Widget::abrirVentanaJefeCarrera);

    //connect(ui->pushButton_2, &QPushButton::clicked, this, &Widget::abrirVentana);
    lista_ocupadosLunes = {"Libre", "Libre", "Libre", "Libre", "Libre", "Libre", "Libre", "Libre", "Libre", "Libre"};
    lista_ocupadosMiercoles = lista_ocupadosViernes = lista_ocupadosLunes;
}

Widget::~Widget()
{
    delete ui;
}

/*
void Widget::cambiarTextoEtiqueta()
{
    ui->label->setText("¡Hola, mundo!");
}
*/

void Widget::abrirVentanaPaciente()
{
    v = new Ventana_consulta(&lista_ocupadosLunes, &lista_ocupadosMiercoles, &lista_ocupadosViernes);
    v->show();
}
void Widget::abrirVentanaJefeCarrera()
{
    j = new Jefe_Carrera;
    j->show();
}


