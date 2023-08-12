#include "ventana_consulta.h"
#include "ui_ventana_consulta.h"
#include <iostream>
#include <ostream>

Ventana_consulta::Ventana_consulta(QStringList *lo_lunes, QStringList *lo_miercoles, QStringList *lo_viernes, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_consulta)


{
    ui->setupUi(this);

    //ui->label->setText("¡Hola, mundo!");
    ui->Listas_Dias->addItem("Lunes");
    //ui->Listas_Dias->addItem("Martes");
    ui->Listas_Dias->addItem("Miercoles");
    //ui->Listas_Dias->addItem("Jueves");
    ui->Listas_Dias->addItem("Viernes");
    ui->Lista_Horarios->addItem("1-2");
    ui->Lista_Horarios->addItem("3-4");
    ui->Lista_Horarios->addItem("5-6");
    ui->Lista_Horarios->addItem("7-8");
    ui->Lista_Horarios->addItem("9-10");
    ui->Lista_Horarios->addItem("11-12");
    ui->Lista_Horarios->addItem("13-14");
    ui->Lista_Horarios->addItem("15-16");
    ui->Lista_Horarios->addItem("17-18");
    ui->Lista_Horarios->addItem("19-20");

    lista_ocupadosLunes = lo_lunes;
    //lista_ocupadosMartes = lo_martes;
    lista_ocupadosMiercoles = lo_miercoles;
    //lista_ocupadosJueves = lo_jueves;
    lista_ocupadosViernes = lo_viernes;

    //lista_ocupadosLunes = {"Libre", "Libre", "Libre", "Libre","Libre","Libre","Libre","Libre","Libre","Libre"};
    //lista_ocupadosMartes = lista_ocupadosMiercoles = lista_ocupadosJueves = lista_ocupadosViernes = lista_ocupadosLunes;
    connect(ui->Listas_Dias, SIGNAL(itemClicked(QListWidgetItem*)),this, SLOT(mostrarTextos(QListWidgetItem*)));
    connect(ui->BotonEnviar, SIGNAL(clicked()),this, SLOT(enviarDatos()));



}

Ventana_consulta::~Ventana_consulta()
{
    delete ui;
}
void Ventana_consulta::mostrarTextos(QListWidgetItem *item){
    // Borra todos los elementos existentes en el QListWidget
    ui->Lista_Estados->clear();

    // Verifica el día seleccionado y muestra los textos correspondientes
    if (item == ui->Listas_Dias->item(0)){
        std::cout << "Lunes"<<std::endl;
        ui->Lista_Estados->addItems(*lista_ocupadosLunes);}

    if (item == ui->Listas_Dias->item(2)){
        std::cout << "Miercoles" <<std::endl;
        ui->Lista_Estados->addItems(*lista_ocupadosMiercoles);}

    if (item == ui->Listas_Dias->item(4)){
        std::cout << "Viernes" <<std::endl;
        ui->Lista_Estados->addItems(*lista_ocupadosViernes);}
}
void Ventana_consulta::enviarDatos(){
    QListWidgetItem *item = ui->Listas_Dias->currentItem();
    QString name = ui->RellenoNombre->text();
    QString rut = ui->RellenoRut->text();
    if (item == ui->Listas_Dias->item(0)){  //ui->Listas_Dias->item(0) corresponde a lunes
        std::cout << "Lunes " << name.toStdString() << " " << rut.toStdString() <<std::endl;

        //Escojer horario seleccionado ej.: 1-2
        QListWidgetItem *itemSeleccionado = ui->Lista_Horarios->currentItem();
        if(itemSeleccionado){
            QString valor = itemSeleccionado->text();
            if(valor == "1-2"){
                (*lista_ocupadosLunes)[0] = name.append(" ").append(rut);
                mostrarTextos(item);
            }
            else if(valor == "3-4"){
                (*lista_ocupadosLunes)[1] = name.append(" ").append(rut);
                mostrarTextos(item);
            }
            else if(valor == "5-6"){
                (*lista_ocupadosLunes)[2] = name.append(" ").append(rut);
                mostrarTextos(item);
            }
            else if(valor == "7-8"){
                (*lista_ocupadosLunes)[3] = name.append(" ").append(rut);
                mostrarTextos(item);
            }
            else if(valor == "9-10"){
                (*lista_ocupadosLunes)[4] = name.append(" ").append(rut);
                mostrarTextos(item);
            }
            else if(valor == "11-12"){
                (*lista_ocupadosLunes)[5] = name.append(" ").append(rut);
                mostrarTextos(item);
            }
            else if(valor == "13-14"){
                (*lista_ocupadosLunes)[6] = name.append(" ").append(rut);
                mostrarTextos(item);
            }

        }

    }

    if (item == ui->Listas_Dias->item(2)){
        std::cout << "Miercoles" << name.toStdString() << rut.toStdString() <<std::endl;
        //lista_ocupadosLunes[2] = name.append(" ").append(rut);
        mostrarTextos(item);
    }

    if (item == ui->Listas_Dias->item(4)){
        std::cout << "Viernes"<< name.toStdString() << rut.toStdString()  <<std::endl;
        //lista_ocupadosLunes[4] = name.append(" ").append(rut);
        mostrarTextos(item);
    }

}
