#include "empresa.h"
#include <QFile>
#include <QTextStream>

Empresa::~Empresa() {
    for (Empleado* empleado : empleados) {
        delete empleado;
    }
}

void Empresa::agregarEmpleado(Empleado* empleado) {
    empleados.push_back(empleado);
}

void Empresa::eliminarEmpleado(int index) {
    if (index >= 0 && index < empleados.size()) {
        delete empleados[index];
        empleados.erase(empleados.begin() + index);
    }
}

void Empresa::guardarDatos(const QString& filename) {
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return;
    }

    QTextStream out(&file);
    for (const auto& empleado : empleados) {
        out << "Nombre: " << empleado->getNombre()
        << ", Edad: " << empleado->getEdad()
        << ", Salario: " << empleado->calcularSalario()
        << ", Tipo: " << empleado->getTipo()
        << "\n";
    }
    file.close();
}

void Empresa::cargarDatos(const QString& filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return;
    }

    empleados.clear();
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList data = line.split(", ");
        QString nombre = data[0].split(": ")[1];
        int edad = data[1].split(": ")[1].toInt();
        float salario = data[2].split(": ")[1].toFloat();
        QString tipo = data[3].split(": ")[1];

        if (tipo == "Empleado Fijo") {
            empleados.push_back(new EmpleadoFijo(nombre, edad, salario));
        } else if (tipo == "Empleado Contratado") {
            float horasTrabajadas = 0; // Aquí debes implementar la lógica para obtener las horas trabajadas al cargar.
            empleados.push_back(new EmpleadoContratado(nombre, edad, salario, horasTrabajadas));
        }
    }
    file.close();
}

const std::vector<Empleado*>& Empresa::getEmpleados() const {
    return empleados;
}
