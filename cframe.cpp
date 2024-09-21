#include "cframe.h"
#include "auto.h"
#include "camion.h"
#include "ui_cframe.h"

#include <QMessageBox>
#include <QFileDialog>
#include <fstream>

cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{
    ui->setupUi(this);

    ui->comboBoxTipoEstudiante->addItem("Licenciatura");
    ui->comboBoxTipoEstudiante->addItem("Maestría");
}

cframe::~cframe()
{
    delete ui;

    for (Estudiante* estudiante : estudiantes) {
        delete estudiante;
    }
}


void cframe::on_btnAgregarEstudiante_clicked()
{
    QString nombre = ui->lineEditNombre->text();
    int edad = ui->spinBoxEdad->value();
    QString tipoEstudiante = ui->comboBoxTipoEstudiante->currentText();

    // Suponiendo que agregas QLineEdit o QSpinBox para UV
    QString materia = ui->lineEditMateria->text();
    int calificacion = ui->spinBoxCalificacion->value();
    int unidadesValorativas = ui->spinBoxUV->value(); // Campo para UV

    Estudiante* nuevoEstudiante = nullptr;

    if (tipoEstudiante == "Licenciatura") {
        nuevoEstudiante = new EstudianteLicenciatura(nombre, edad);
    } else if (tipoEstudiante == "Maestría") {
        nuevoEstudiante = new EstudianteMaestria(nombre, edad);
    }

    if (nuevoEstudiante) {
        nuevoEstudiante->agregarMateria(materia, calificacion, unidadesValorativas);
        estudiantes.push_back(nuevoEstudiante);
        QMessageBox::information(this, "Estudiante agregado", "El estudiante ha sido agregado correctamente.");
    }
}

void cframe::on_btnGuardar_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Guardar Estudiantes", "", "Archivos de Texto (*.txt)");

    if (fileName.isEmpty()) {
        return;  // Si el usuario cancela
    }

    std::ofstream outFile(fileName.toStdString());
    if (!outFile) {
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para guardar.");
        return;
    }

    for (Estudiante* estudiante : estudiantes) {
        estudiante->guardarArchivo(outFile);
    }

    outFile.close();
    QMessageBox::information(this, "Éxito", "Estudiantes guardados con éxito.");
}

void cframe::on_btnCargar_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Cargar Estudiantes", "", "Archivos de Texto (*.txt)");

    if (fileName.isEmpty()) {
        return;  // Si el usuario cancela
    }

    std::ifstream inFile(fileName.toStdString());
    if (!inFile) {
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para cargar.");
        return;
    }

    // Limpiar la lista actual de estudiantes
    for (Estudiante* estudiante : estudiantes) {
        delete estudiante;
    }
    estudiantes.clear();

    while (inFile) {
        std::string tipo;
        inFile >> tipo;

        if (tipo == "Licenciatura") {
            EstudianteLicenciatura* estLic = new EstudianteLicenciatura("", 0);
            estLic->cargarArchivo(inFile);
            estudiantes.push_back(estLic);
        } else if (tipo == "Maestria") {
            EstudianteMaestria* estMae = new EstudianteMaestria("", 0);
            estMae->cargarArchivo(inFile);
            estudiantes.push_back(estMae);
        }
    }

    inFile.close();
    QMessageBox::information(this, "Éxito", "Estudiantes cargados con éxito.");
}

void cframe::on_btnMostrarPromedios_clicked()
{
    QString resultados;

    if (estudiantes.empty()) {
        resultados = "No hay estudiantes registrados.";
    } else {
        for (Estudiante* estudiante : estudiantes) {
            if (estudiante) {
                // Agrega el nombre del estudiante
                resultados += estudiante->getNombre() + ":\n";

                const auto& materias = estudiante->getMaterias();
                const auto& calificaciones = estudiante->getCalificaciones();

                // Verifica que las materias y calificaciones tengan el mismo tamaño
                if (materias.size() != calificaciones.size()) {
                    resultados += "  Error: Las materias y calificaciones no coinciden.\n";
                    continue; // Salta al siguiente estudiante
                }

                // Mostrar materias y calificaciones
                for (size_t i = 0; i < materias.size(); ++i) {
                    resultados += "  " + materias[i] + " (Calificación: " + QString::number(calificaciones[i]) + ")\n";
                }

                // Calcular y mostrar el promedio
                resultados += "  Promedio: " + QString::number(estudiante->promedio()) + "\n\n";
            }
        }
    }

    QMessageBox::information(this, "Promedios", resultados);
}

//asdfasdjhsdgajsgdjhgashdgd

void cframe::actualizarTabla() {
    ui->tableWidget->clear(); // Limpiar la tabla
    ui->tableWidget->setRowCount(0); // Asegurarse de que no haya filas previas

    // Definir encabezados de la tabla
    ui->tableWidget->setColumnCount(4);
    QStringList encabezados = {"Modelo", "Año", "Kilometraje", "Mantenimiento"};
    ui->tableWidget->setHorizontalHeaderLabels(encabezados);

    // Agregar los vehículos a la tabla
    for (const auto& vehiculo : flota.getVehiculos()) {
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(vehiculo->getModelo()));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(vehiculo->getAño())));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(vehiculo->getKilometraje())));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(vehiculo->calcularMantenimiento())));
    }
}


void cframe::on_anadir_clicked()
{
    QString modelo = ui->modeloEdit->text();
    int año = ui->anospinBox->value();
    float kilometraje = ui->kilometrajedoubleSpinBox->value();

    if (ui->tipocomboBox->currentText() == "Auto") {
        flota.agregarVehiculo(new Auto(modelo, año, kilometraje));
    } else if (ui->tipocomboBox->currentText() == "Camion") {
        float capacidadCarga = ui->capacidadCargaDoubleSpinBox->value();
        int viajes = ui->viajesSpinBox->value();
        flota.agregarVehiculo(new Camion(modelo, año, kilometraje, capacidadCarga, viajes));
    }

    actualizarTabla(); // Llamar a actualizar la tabla
}


void cframe::on_remover_clicked()
{
    int row = ui->tableWidget->currentRow();
    flota.eliminarVehiculo(row);
    actualizarTabla(); // Llamar a actualizar la tabla
}


void cframe::on_guardar_clicked()
{
    flota.guardarDatos("flota.txt");
}


void cframe::on_pushButton_clicked()
{
    QString nombre = ui->nombrelineEdit->text();
    int edad = ui->edadspinBox->value();
    double salario = ui->salariodoubleSpinBox->value();
    QString tipo = ui->tipocomboBox->currentText();
    Empleado* nuevoEmpleado;

    if (tipo == "Empleado Fijo") {
        nuevoEmpleado = new EmpleadoFijo(nombre, edad, salario);
    } else {
        float horasTrabajadas = ui->horasspinBox->value();
        nuevoEmpleado = new EmpleadoContratado(nombre, edad, salario, horasTrabajadas);
    }

    empresa.agregarEmpleado(nuevoEmpleado);
    actualizarTabla();
    QMessageBox::information(this, "Agregar Empleado", "Empleado agregado exitosamente.");
}


void cframe::on_pushButton_2_clicked()
{
    int fila = ui->empleadosTableWidget->currentRow();
    if (fila >= 0) {
        empresa.eliminarEmpleado(fila);
        actualizarTabla();
        QMessageBox::information(this, "Eliminar Empleado", "Empleado eliminado exitosamente.");
    }
}


void cframe::on_pushButton_3_clicked()
{
    empresa.guardarDatos("empleados.txt");
    QMessageBox::information(this, "Guardar Empleados", "Empleados guardados exitosamente.");
}

void cframe::actualizarTabla2() {
    ui->empleadosTableWidget->setRowCount(0);
    for (const auto& empleado : empresa.getEmpleados()) {
        int row = ui->empleadosTableWidget->rowCount();
        ui->empleadosTableWidget->insertRow(row);
        ui->empleadosTableWidget->setItem(row, 0, new QTableWidgetItem(empleado->getNombre()));
        ui->empleadosTableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(empleado->getEdad())));
        ui->empleadosTableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(empleado->calcularSalario())));
        ui->empleadosTableWidget->setItem(row, 3, new QTableWidgetItem(empleado->getTipo()));
    }
}


void cframe::on_pushButton_4_clicked()
{
    empresa.cargarDatos("empleados.txt");
    actualizarTabla();
    QMessageBox::information(this, "Cargar Empleados", "Empleados cargados exitosamente.");

}

