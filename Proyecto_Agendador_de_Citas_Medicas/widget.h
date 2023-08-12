#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>
#include <QDialog>
#include "ventana_consulta.h"
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
    Ventana_consulta *v;
    Jefe_Carrera *j;

    QStringList lista_ocupadosLunes;
    //QStringList lista_ocupadosMartes;
    QStringList lista_ocupadosMiercoles;
    //QStringList lista_ocupadosJueves;
    QStringList lista_ocupadosViernes;

};
#endif // WIDGET_H
