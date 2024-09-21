#include "empleado.h"

Empleado::Empleado(QString nombre, int edad, float salario)
    : nombre(nombre), edad(edad), salario(salario) {}

QString Empleado::getNombre() const { return nombre; }
int Empleado::getEdad() const { return edad; }

EmpleadoFijo::EmpleadoFijo(QString nombre, int edad, float salario)
    : Empleado(nombre, edad, salario) {}

float EmpleadoFijo::calcularSalario() const {
    return salario;
}

QString EmpleadoFijo::getTipo() const {
    return "Empleado Fijo";
}

EmpleadoContratado::EmpleadoContratado(QString nombre, int edad, float salario, float horasTrabajadas)
    : Empleado(nombre, edad, salario), horasTrabajadas(horasTrabajadas) {}

float EmpleadoContratado::calcularSalario() const {
    return salario * horasTrabajadas;
}

QString EmpleadoContratado::getTipo() const {
    return "Empleado Contratado";
}
