#ifndef VENTANA_PACIENTE_H
#define VENTANA_PACIENTE_H

#include <QWidget>

namespace Ui {
class Ventana_paciente;
}

class Ventana_paciente : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_paciente(QWidget *parent = nullptr);
    ~Ventana_paciente();

private:
    Ui::Ventana_paciente *ui;
};

#endif // VENTANA_PACIENTE_H
