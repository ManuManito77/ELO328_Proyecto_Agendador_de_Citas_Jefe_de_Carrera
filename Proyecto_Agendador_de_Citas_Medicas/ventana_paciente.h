#ifndef VENTANA_PACIENTE_H
#define VENTANA_PACIENTE_H


#include <QWidget>
#include <QListWidgetItem>
namespace Ui {
class Ventana_paciente;
}

class Ventana_paciente : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_paciente(QWidget *parent = nullptr);
    ~Ventana_paciente();

    void DiaSeleccionado(QListWidgetItem *item);
private:
    Ui::Ventana_paciente *ui;
};

#endif // VENTANA_PACIENTE_H
