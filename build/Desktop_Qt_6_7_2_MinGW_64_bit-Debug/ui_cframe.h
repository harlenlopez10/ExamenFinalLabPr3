/********************************************************************************
** Form generated from reading UI file 'cframe.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAME_H
#define UI_CFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_5;
    QSpinBox *spinBoxUV;
    QPushButton *btnCargar;
    QDoubleSpinBox *spinBoxCalificacion;
    QLineEdit *lineEditMateria;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *btnGuardar;
    QComboBox *comboBoxTipoEstudiante;
    QLineEdit *lineEditNombre;
    QSpinBox *spinBoxEdad;
    QLabel *label_6;
    QPushButton *btnMostrarPromedios;
    QLabel *label_7;
    QLabel *label_3;
    QPushButton *btnAgregarEstudiante;
    QWidget *tab_2;
    QPushButton *anadir;
    QPushButton *remover;
    QPushButton *guardar;
    QLineEdit *modeloEdit;
    QSpinBox *anospinBox;
    QDoubleSpinBox *kilometrajedoubleSpinBox;
    QDoubleSpinBox *capacidadCargaDoubleSpinBox;
    QSpinBox *viajesSpinBox;
    QTableWidget *tableWidget;
    QComboBox *tipocomboBox;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *tab_3;
    QLineEdit *nombrelineEdit;
    QSpinBox *edadspinBox;
    QDoubleSpinBox *salariodoubleSpinBox;
    QComboBox *TipocomboBox2;
    QSpinBox *horasspinBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableWidget *empleadosTableWidget;
    QLabel *label_12;
    QPushButton *pushButton_4;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName("cframe");
        cframe->resize(1269, 758);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 0, 1231, 711));
        tab = new QWidget();
        tab->setObjectName("tab");
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(380, 50, 221, 20));
        spinBoxUV = new QSpinBox(tab);
        spinBoxUV->setObjectName("spinBoxUV");
        spinBoxUV->setGeometry(QRect(380, 190, 101, 29));
        btnCargar = new QPushButton(tab);
        btnCargar->setObjectName("btnCargar");
        btnCargar->setGeometry(QRect(30, 490, 121, 41));
        spinBoxCalificacion = new QDoubleSpinBox(tab);
        spinBoxCalificacion->setObjectName("spinBoxCalificacion");
        spinBoxCalificacion->setGeometry(QRect(380, 130, 141, 29));
        lineEditMateria = new QLineEdit(tab);
        lineEditMateria->setObjectName("lineEditMateria");
        lineEditMateria->setGeometry(QRect(380, 70, 271, 28));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 20, 231, 31));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 210, 231, 41));
        btnGuardar = new QPushButton(tab);
        btnGuardar->setObjectName("btnGuardar");
        btnGuardar->setGeometry(QRect(30, 540, 161, 41));
        comboBoxTipoEstudiante = new QComboBox(tab);
        comboBoxTipoEstudiante->setObjectName("comboBoxTipoEstudiante");
        comboBoxTipoEstudiante->setGeometry(QRect(30, 250, 141, 31));
        lineEditNombre = new QLineEdit(tab);
        lineEditNombre->setObjectName("lineEditNombre");
        lineEditNombre->setGeometry(QRect(20, 60, 201, 31));
        spinBoxEdad = new QSpinBox(tab);
        spinBoxEdad->setObjectName("spinBoxEdad");
        spinBoxEdad->setGeometry(QRect(30, 160, 91, 31));
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(380, 170, 171, 20));
        btnMostrarPromedios = new QPushButton(tab);
        btnMostrarPromedios->setObjectName("btnMostrarPromedios");
        btnMostrarPromedios->setGeometry(QRect(30, 440, 161, 41));
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(380, 110, 191, 20));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 120, 131, 41));
        btnAgregarEstudiante = new QPushButton(tab);
        btnAgregarEstudiante->setObjectName("btnAgregarEstudiante");
        btnAgregarEstudiante->setGeometry(QRect(30, 390, 171, 41));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        anadir = new QPushButton(tab_2);
        anadir->setObjectName("anadir");
        anadir->setGeometry(QRect(30, 70, 111, 41));
        remover = new QPushButton(tab_2);
        remover->setObjectName("remover");
        remover->setGeometry(QRect(30, 120, 121, 41));
        guardar = new QPushButton(tab_2);
        guardar->setObjectName("guardar");
        guardar->setGeometry(QRect(30, 180, 111, 41));
        modeloEdit = new QLineEdit(tab_2);
        modeloEdit->setObjectName("modeloEdit");
        modeloEdit->setGeometry(QRect(200, 50, 113, 24));
        anospinBox = new QSpinBox(tab_2);
        anospinBox->setObjectName("anospinBox");
        anospinBox->setGeometry(QRect(200, 120, 61, 31));
        anospinBox->setMaximum(2030);
        kilometrajedoubleSpinBox = new QDoubleSpinBox(tab_2);
        kilometrajedoubleSpinBox->setObjectName("kilometrajedoubleSpinBox");
        kilometrajedoubleSpinBox->setGeometry(QRect(200, 190, 71, 31));
        kilometrajedoubleSpinBox->setMaximum(1000000000.990000009536743);
        capacidadCargaDoubleSpinBox = new QDoubleSpinBox(tab_2);
        capacidadCargaDoubleSpinBox->setObjectName("capacidadCargaDoubleSpinBox");
        capacidadCargaDoubleSpinBox->setGeometry(QRect(360, 120, 61, 31));
        capacidadCargaDoubleSpinBox->setMaximum(100000.990000000005239);
        viajesSpinBox = new QSpinBox(tab_2);
        viajesSpinBox->setObjectName("viajesSpinBox");
        viajesSpinBox->setGeometry(QRect(360, 190, 61, 31));
        tableWidget = new QTableWidget(tab_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(670, 250, 331, 281));
        tipocomboBox = new QComboBox(tab_2);
        tipocomboBox->addItem(QString());
        tipocomboBox->addItem(QString());
        tipocomboBox->setObjectName("tipocomboBox");
        tipocomboBox->setGeometry(QRect(330, 50, 111, 24));
        label = new QLabel(tab_2);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 20, 91, 31));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(200, 90, 91, 31));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(200, 160, 91, 31));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(360, 90, 151, 31));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(360, 160, 91, 31));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        nombrelineEdit = new QLineEdit(tab_3);
        nombrelineEdit->setObjectName("nombrelineEdit");
        nombrelineEdit->setGeometry(QRect(40, 40, 113, 24));
        edadspinBox = new QSpinBox(tab_3);
        edadspinBox->setObjectName("edadspinBox");
        edadspinBox->setGeometry(QRect(40, 100, 91, 41));
        salariodoubleSpinBox = new QDoubleSpinBox(tab_3);
        salariodoubleSpinBox->setObjectName("salariodoubleSpinBox");
        salariodoubleSpinBox->setGeometry(QRect(40, 190, 141, 41));
        salariodoubleSpinBox->setMaximum(200000.989999999990687);
        TipocomboBox2 = new QComboBox(tab_3);
        TipocomboBox2->addItem(QString());
        TipocomboBox2->addItem(QString());
        TipocomboBox2->setObjectName("TipocomboBox2");
        TipocomboBox2->setGeometry(QRect(40, 260, 101, 31));
        horasspinBox = new QSpinBox(tab_3);
        horasspinBox->setObjectName("horasspinBox");
        horasspinBox->setGeometry(QRect(40, 340, 91, 41));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 80, 121, 51));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 140, 121, 51));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 200, 121, 51));
        empleadosTableWidget = new QTableWidget(tab_3);
        empleadosTableWidget->setObjectName("empleadosTableWidget");
        empleadosTableWidget->setGeometry(QRect(600, 80, 511, 281));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(110, 440, 371, 81));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(260, 260, 121, 51));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(40, 10, 111, 31));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(40, 70, 111, 31));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(40, 150, 111, 31));
        label_16 = new QLabel(tab_3);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(40, 300, 111, 31));
        tabWidget->addTab(tab_3, QString());
        cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cframe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1269, 21));
        cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(cframe);
        statusbar->setObjectName("statusbar");
        cframe->setStatusBar(statusbar);

        retranslateUi(cframe);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QCoreApplication::translate("cframe", "cframe", nullptr));
        label_5->setText(QCoreApplication::translate("cframe", "Ingrese nombre de la clase:", nullptr));
        btnCargar->setText(QCoreApplication::translate("cframe", "Cargar", nullptr));
        label_2->setText(QCoreApplication::translate("cframe", "Ingrese el Nombre del estudiante:", nullptr));
        label_4->setText(QCoreApplication::translate("cframe", "Seleccione El tipo de estudiante: ", nullptr));
        btnGuardar->setText(QCoreApplication::translate("cframe", "Guardar", nullptr));
        label_6->setText(QCoreApplication::translate("cframe", "Ingrese U.V de la clase:", nullptr));
        btnMostrarPromedios->setText(QCoreApplication::translate("cframe", "Mostrar Promedios", nullptr));
        label_7->setText(QCoreApplication::translate("cframe", "Ingrese la nota de la clase:", nullptr));
        label_3->setText(QCoreApplication::translate("cframe", "Digite la edad: ", nullptr));
        btnAgregarEstudiante->setText(QCoreApplication::translate("cframe", "Agregar Estudiante", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("cframe", "Ejercicio 1", nullptr));
        anadir->setText(QCoreApplication::translate("cframe", "A\303\261adir", nullptr));
        remover->setText(QCoreApplication::translate("cframe", "Eliminar", nullptr));
        guardar->setText(QCoreApplication::translate("cframe", "Guardar", nullptr));
        tipocomboBox->setItemText(0, QCoreApplication::translate("cframe", "Auto", nullptr));
        tipocomboBox->setItemText(1, QCoreApplication::translate("cframe", "Camion", nullptr));

        label->setText(QCoreApplication::translate("cframe", "Modelo:", nullptr));
        label_8->setText(QCoreApplication::translate("cframe", "A\303\261o:", nullptr));
        label_9->setText(QCoreApplication::translate("cframe", "Kilometraje", nullptr));
        label_10->setText(QCoreApplication::translate("cframe", "Capacidad de Carga", nullptr));
        label_11->setText(QCoreApplication::translate("cframe", "Vaijes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("cframe", "Ejercicio 2", nullptr));
        TipocomboBox2->setItemText(0, QCoreApplication::translate("cframe", "Empleado Fijo", nullptr));
        TipocomboBox2->setItemText(1, QCoreApplication::translate("cframe", "Empleado Contratado", nullptr));

        pushButton->setText(QCoreApplication::translate("cframe", "Agregar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cframe", "Eliminar", nullptr));
        pushButton_3->setText(QCoreApplication::translate("cframe", "Guardar", nullptr));
        label_12->setText(QCoreApplication::translate("cframe", "TextLabel", nullptr));
        pushButton_4->setText(QCoreApplication::translate("cframe", "Cargar", nullptr));
        label_13->setText(QCoreApplication::translate("cframe", "Nombre", nullptr));
        label_14->setText(QCoreApplication::translate("cframe", "Edad", nullptr));
        label_15->setText(QCoreApplication::translate("cframe", "Salario", nullptr));
        label_16->setText(QCoreApplication::translate("cframe", "Horas trabajdas", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("cframe", "Ejercicio 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
