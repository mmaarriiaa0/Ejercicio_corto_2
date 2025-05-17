#include <iostream>

using namespace std;

int main(){
    int edad, cliente, opcion1, opcion, saldo = 7, opcion2;
    double precio, saldoRestante;

    cout << "Ingrese su edad: "<<endl;
    cin >> edad;
    if (edad < 12){
        cout << "No puede continuar con la compra"<<endl;
    }else{
        cout <<"Que tipo de cliente es"<<endl;
        cout << "1.Estudiante"<<endl;
        cout << "2.Adulto mayor"<<endl;
        cout << "3.Ver todo"<<endl;
        cin >> cliente;

        switch (cliente){
            case 1:
            cout << "Menu disponible para estudiantes (Descuento 25%): "<<endl;
            cout << "1. Combo hamburguesa $8 (Con descuento: $2)"<<endl;
            cout << "2. Combo pizza personal $7 (Con descuento: $1.75)"<<endl;
            cout <<"3. Almuerzo ejecutivo $10 (Con descuento: $2.50)"<<endl;
            cin >> opcion;

            switch (opcion){
                case 1: 
                precio = 8 * 0.25;
                saldoRestante = saldo - precio;
                if (precio > saldo){
                    cout << "Saldo insuficiente"<<endl;
                }else{
                cout << "Su compra fue exitosa: "<<endl;
                cout << "Combo hamburguesa: $"<<precio <<endl;
                cout << "Su saldo restante es de: $"<<saldoRestante <<endl;
                }
                break;
                case 2:
                precio = 7 * 0.25;
                saldoRestante = saldo - precio;
                if (precio > saldo){
                    cout << "Saldo insuficiente"<<endl;
                }else{
                    cout << "Su compra fue exitosa: "<<endl;
                    cout << "Combo pizza personal: $"<<precio <<endl;
                    cout << "Su saldo restante es de: $"<<saldoRestante <<endl;
                }
                break;
                case 3:
                precio = 10 * 0.25;
                saldoRestante = saldo - precio;
                if (precio > saldo){
                    cout << "Saldo insuficiente"<<endl;
                }else{
                    cout << "Su compra fue exitosa: "<<endl;
                    cout << "Almuerzo ejecutivo: $"<<precio <<endl;
                    cout << "Su saldo restante es de: $"<<saldoRestante <<endl;
                }
                break;
                default : 
                    cout << "Ingrese una opcion valida"<<endl;
           
            }
            break;
            case 2:
            cout << "Menu disponible para adultos mayores (Descuento 30%):  "<<endl;
            cout << "1. Sopa nutritiva $6 (Con descuento: $1.80)"<<endl;
            cout << "2. Plato casero $9 (Con descuento: $2.70)"<<endl;
            cout << "3. Postre + cafe $5 (Con descuento: $1.50)"<<endl;
            cin >> opcion1;

            switch (opcion1){
                case 1:
                precio = 6 * 0.30;
                saldoRestante = saldo - precio;
                if (precio > saldo){
                    cout << "Saldo insuficiente"<<endl;
                }else{
                    cout << "Su compra fue exitosa: "<<endl;
                    cout << "Sopa nutritiva: $"<<precio <<endl;
                    cout << "Su saldo restante es de: $"<<saldoRestante <<endl;
                }
                break;
                case 2:
                precio = 9 * 0.30;
                saldoRestante = saldo - precio;
                if (precio > saldo){
                    cout << "Saldo insuficiente"<<endl;
                }else{
                    cout << "Su compra fue exitosa: "<<endl;
                    cout << "Plato casero: $"<<precio <<endl;
                    cout << "Su saldo restante es de: $"<<saldoRestante <<endl;
                }
                break;
                case 3: 
                precio = 5 * 0.30;
                saldoRestante = saldo - precio;
                if (precio > saldo){
                    cout << "Saldo insuficiente"<<endl;
                }else{
                    cout << "Su compra fue exitosa: "<<endl;
                    cout << "Postre + cafe: $"<<precio <<endl;
                    cout << "Su saldo restante es de: $"<<saldoRestante <<endl;
                }
                break;
                default : 
                    cout << "Ingrese una opcion valida"<<endl;
                
            }
            break;
            case 3:
                cout << "Bienvenido, ingrese que opcion desea: "<<endl;
                cout << "1. Combo hamburguesa $8"<<endl;
                cout << "2. Combo pizza personal $7"<<endl;
                cout << "3. Almuerzo ejecutivo $10"<<endl;
                cout << "4. Sopa nutritiva $6"<<endl;
                cout << "5. Plato casero $9"<<endl;
                cout << "6. Postre + cafe $5"<<endl;
                cin >> opcion2;

            switch (opcion2){
                case 1: 
                precio = 8;
                saldoRestante = saldo - precio;
                if (precio > saldo){
                    cout << "Saldo insuficiente"<<endl;
                }else{
                cout << "Su compra fue exitosa: "<<endl;
                cout << "Combo hamburguesa: $"<<precio <<endl;
                cout << "Su saldo restante es de: $"<<saldoRestante <<endl;
                }
                break;
                case 2:
                precio = 7;
                saldoRestante = saldo - precio;
                if (precio > saldo){
                    cout << "Saldo insuficiente"<<endl;
                }else{
                    cout << "Su compra fue exitosa: "<<endl;
                    cout << "Combo pizza personal: $"<<precio <<endl;
                    cout << "Su saldo restante es de: $"<<saldoRestante <<endl;
                }
                break;
                case 3:
                precio = 10;
                saldoRestante = saldo - precio;
                if (precio > saldo){
                    cout << "Saldo insuficiente"<<endl;
                }else{
                    cout << "Su compra fue exitosa: "<<endl;
                    cout << "Almuerzo ejecutivo: $"<<precio <<endl;
                    cout << "Su saldo restante es de: $"<<saldoRestante <<endl;
                }
                break;
                case 4:
                precio = 6;
                saldoRestante = saldo - precio;
                if (precio > saldo){
                    cout << "Saldo insuficiente"<<endl;
                }else{
                    cout << "Su compra fue exitosa: "<<endl;
                    cout << "Sopa nutritiva: $"<<precio <<endl;
                    cout << "Su saldo restante es de: $"<<saldoRestante <<endl;
                }
                break;
                case 5:
                precio = 9;
                saldoRestante = saldo - precio;
                if (precio > saldo){
                    cout << "Saldo insuficiente"<<endl;
                }else{
                    cout << "Su compra fue exitosa: "<<endl;
                    cout << "Plato casero: $"<<precio <<endl;
                    cout << "Su saldo restante es de: $"<<saldoRestante <<endl;
                }
                break;
                case 6: 
                precio = 5;
                saldoRestante = saldo - precio;
                if (precio > saldo){
                    cout << "Saldo insuficiente"<<endl;
                }else{
                    cout << "Su compra fue exitosa: "<<endl;
                    cout << "Postre + cafe: $"<<precio <<endl;
                    cout << "Su saldo restante es de: $"<<saldoRestante <<endl;
                }
                break;
                default : 
                    cout << "Ingrese una opcion valida"<<endl;
            }
            break;
            default: 
                cout << "Ingrese una opcion valida"<<endl;
        }
    }
    return 0;
}