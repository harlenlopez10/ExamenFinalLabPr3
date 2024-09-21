#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <QString>

class Empleado {
protected:
    QString nombre;
    int edad;
    float salario;

public:
    Empleado(QString nombre, int edad, float salario);
    virtual ~Empleado() = default;
    virtual float calcularSalario() const = 0;
    virtual QString getTipo() const = 0;
    QString getNombre() const;
    int getEdad() const;
};

class EmpleadoFijo : public Empleado {
public:
    EmpleadoFijo(QString nombre, int edad, float salario);
    float calcularSalario() const override;
    QString getTipo() const override;
};

class EmpleadoContratado : public Empleado {
private:
    float horasTrabajadas;

public:
    EmpleadoContratado(QString nombre, int edad, float salario, float horasTrabajadas);
    float calcularSalario() const override;
    QString getTipo() const override;
};

#endif // EMPLEADO_H
