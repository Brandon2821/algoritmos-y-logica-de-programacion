#include <iostream>
#include <iostream>
#include <string>
using namespace std;

class CuentaBancaria {
private:
    string titular;
    double saldo;

public:
    CuentaBancaria(string t, double s) {
        titular = t;
        saldo = s;
    }

    void depositar(double monto) {
        if (monto <= 0) {
            cout << "Error: deposito invalido." << endl;
            return;
        }
        saldo += monto;
    }

    void retirar(double monto) {
        if (monto <= 0) {
            cout << "Error: retiro invalido." << endl;
            return;
        }
        if (monto > saldo) {
            cout << "Error: saldo insuficiente." << endl;
            return;
        }
        saldo -= monto;
    }

    void mostrar() {
        cout << "Titular: " << titular << endl;
        cout << "Saldo: " << saldo << endl;
    }
};

int main() {
    string nombre;
    double saldo;

    CuentaBancaria* cuentas[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nCuenta " << i + 1 << endl;

        cout << "Ingrese nombre: ";
        cin >> nombre;

        do {
            cout << "Ingrese saldo inicial : ";
            cin >> saldo;
            if (saldo < 0)
                cout << "Error: no se permite saldo negativo.\n";
        } while (saldo < 0);

        cuentas[i] = new CuentaBancaria(nombre, saldo);
    }

    for (int i = 0; i < 3; i++) {
        double dep, ret;

        cout << "\nOperaciones cuenta " << i + 1 << endl;

        do {
            cout << "Deposito : ";
            cin >> dep;
            if (dep <= 0)
                cout << "Error: deposito invalido.\n";
        } while (dep <= 0);

        cuentas[i]->depositar(dep);

        do {
            cout << "Retiro : ";
            cin >> ret;
            if (ret <= 0)
                cout << "Error: retiro invalido.\n";
        } while (ret <= 0);

        cuentas[i]->retirar(ret);
    }

    cout << "\n--- RESULTADOS ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nCuenta " << i + 1 << endl;
        cuentas[i]->mostrar();
    }

    return 0;
}