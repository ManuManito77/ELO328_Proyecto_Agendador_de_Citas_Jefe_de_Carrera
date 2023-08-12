#ifndef VENTANA_CONSULTA_H
#define VENTANA_CONSULTA_H


#include <QWidget>
#include <QListWidgetItem>
namespace Ui {
class Ventana_consulta;
}

class Ventana_consulta : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_consulta(QStringList *lo_lunes, QStringList *lo_miercoles, QStringList *lo_viernes, QWidget *parent = nullptr);
    ~Ventana_consulta();
    QString name;
    QString rut;
public slots:
    void mostrarTextos(QListWidgetItem *item);
    void enviarDatos();
private:

    Ui::Ventana_consulta *ui;
    QStringList *lista_ocupadosLunes;
    //QStringList *lista_ocupadosMartes;
    QStringList *lista_ocupadosMiercoles;
    //QStringList *lista_ocupadosJueves;
    QStringList *lista_ocupadosViernes;

};

#endif // VENTANA_CONSULTA_H
