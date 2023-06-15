/********************************************************************************
** Form generated from reading UI file 'ventana_paciente.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA_PACIENTE_H
#define UI_VENTANA_PACIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ventana_paciente
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QListWidget *listWidget;

    void setupUi(QWidget *Ventana_paciente)
    {
        if (Ventana_paciente->objectName().isEmpty())
            Ventana_paciente->setObjectName("Ventana_paciente");
        Ventana_paciente->resize(905, 365);
        pushButton = new QPushButton(Ventana_paciente);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(780, 320, 83, 29));
        textEdit = new QTextEdit(Ventana_paciente);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(530, 160, 131, 31));
        listWidget = new QListWidget(Ventana_paciente);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 40, 256, 192));

        retranslateUi(Ventana_paciente);

        QMetaObject::connectSlotsByName(Ventana_paciente);
    } // setupUi

    void retranslateUi(QWidget *Ventana_paciente)
    {
        Ventana_paciente->setWindowTitle(QCoreApplication::translate("Ventana_paciente", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Ventana_paciente", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ventana_paciente: public Ui_Ventana_paciente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_PACIENTE_H
