#ifndef EMPRESA_H
#define EMPRESA_H

#include <vector>
#include "empleado.h"

class Empresa {
private:
    std::vector<Empleado*> empleados;

public:
    ~Empresa();
    void agregarEmpleado(Empleado* empleado);
    void eliminarEmpleado(int index);
    void guardarDatos(const QString& filename);
    void cargarDatos(const QString& filename);
    const std::vector<Empleado*>& getEmpleados() const;
};

#endif // EMPRESA_H
