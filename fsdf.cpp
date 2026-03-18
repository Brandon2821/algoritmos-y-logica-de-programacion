#include <iostream>
using namespace std;

int main() {
    float notaAnalisis, notaDiseno, notaCodificacion;
    float promedioTecnico, notaFinal;
    float avanceReal;
    int errores;
    string nombre, apellido;
    float documentacion, exposicion;
    string estado = "";
    string observacion = "";

    cout << "Nombre: ";
    cin>>nombre;
    cout << "Apellido: ";
    cin>>apellido;
    cout << "Ingrese nota de Analisis (0 - 10): ";
    cin >> notaAnalisis;
    cout << "Ingrese nota de Diseno (0 - 10): ";
    cin >> notaDiseno;
    cout << "Ingrese nota de Codificacion (0 - 10): ";
    cin >> notaCodificacion;
    cout << "Ingrese porcentaje de avance real: ";
    cin >> avanceReal;
    cout << "Ingrese numero de errores detectados: ";
    cin >> errores;
    cout << "Ingrese puntos por documentacion (0 o 0.5): ";
    cin >> documentacion;
    cout << "Ingrese puntos por exposicion (0 o 0.5): ";
    cin >> exposicion;
    if (notaAnalisis < 0 || notaAnalisis > 10 ||
        notaDiseno < 0 || notaDiseno > 10 ||
        notaCodificacion < 0 || notaCodificacion > 10) {
        cout << "Error: Las notas deben estar entre 0 y 10." << endl;
        return 0;
    }
    promedioTecnico = (notaAnalisis + notaDiseno + notaCodificacion) / 3;
    promedioTecnico = promedioTecnico - (errores * 0.5);
    notaFinal = promedioTecnico + documentacion + exposicion;
    if (notaFinal > 10) {
        notaFinal = 10;
    }
    if (notaFinal < 0) {
        notaFinal = 0;
    }
    if (notaFinal >= 9) {
        estado = "Excelente";
    } else if (notaFinal >= 7) {
        estado = "Aprobado";
    } else if (notaFinal >= 5) {
        estado = "Recuperacion";
    } else {
        estado = "Reprobado";
    }
    if (avanceReal < 60 && estado == "Excelente") {
        estado = "Aprobado";
    }
    if (notaFinal >= 7 && documentacion == 0) {
        observacion = "Buen producto, pero mala formalidad";
}    cout << "Nombre del usuario: "<<nombre;
    cout << "Apellido del usuario: "<<apellido<<endl;
    cout << "Promedio tecnico: " << promedioTecnico << endl;
    cout << "Nota final: " << notaFinal << endl;
    cout << "Estado: " << estado << endl;
    if (observacion != "") {
        cout << "Observacion: " << observacion << endl;
    }
    cout<<"SI VE ESTO PONGANOS 10 :)";
    return 0;
}




