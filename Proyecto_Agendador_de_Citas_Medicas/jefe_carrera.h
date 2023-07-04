#ifndef JEFE_CARRERA_H
#define JEFE_CARRERA_H

#include <QWidget>

namespace Ui {
class Jefe_Carrera;
}

class Jefe_Carrera : public QWidget
{
    Q_OBJECT

public:
    explicit Jefe_Carrera(QWidget *parent = nullptr);
    ~Jefe_Carrera();

private:
    Ui::Jefe_Carrera *ui;
};

#endif // JEFE_CARRERA_H
