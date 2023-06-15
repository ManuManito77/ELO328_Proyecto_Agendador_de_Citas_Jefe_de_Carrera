#include "widget.h"
#include "ui_widget.h"


Widget::Widget(int dato, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Para agregar una acción a un boton
    connect(ui->pushButton_2, &QPushButton::clicked, this, &Widget::abrirVentanaPaciente);
    //connect(ui->pushButton_2, &QPushButton::clicked, this, &Widget::abrirVentana);
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
    v = new Ventana_paciente;
    v->show();
}
