#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>
#include <QDialog>
#include "ventana_paciente.h"
#include "jefe_carrera.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(int dato, QWidget *parent = nullptr);
    ~Widget();
    //void cambiarTextoEtiqueta();
private slots:
    void abrirVentanaPaciente();
    void abrirVentanaJefeCarrera();
private:
    Ui::Widget *ui;
    Ventana_paciente *v;
    Jefe_Carrera *j;
};
#endif // WIDGET_H
