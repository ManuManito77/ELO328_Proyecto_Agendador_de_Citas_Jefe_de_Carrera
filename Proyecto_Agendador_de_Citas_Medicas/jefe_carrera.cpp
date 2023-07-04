#include "jefe_carrera.h"
#include "ui_jefe_carrera.h"

Jefe_Carrera::Jefe_Carrera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Jefe_Carrera)
{
    ui->setupUi(this);
}

Jefe_Carrera::~Jefe_Carrera()
{
    delete ui;
}
