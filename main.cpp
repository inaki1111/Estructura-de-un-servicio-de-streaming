#include <iostream>
#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"
#include <vector>
using namespace std;

int global_contador = 0;

int main(){
    
    Video *vector[4];
    vector[0] = new Pelicula(10,"Pelicula", "Hola Mundo", "Terror", 10, 2021, 100);
    vector[1] = new Pelicula(5,"Pelicula", "Adios Mundo", "Suspenso", 7, 2022, 150);
    vector[2] = new Pelicula(7,"Pelicula", "Mundo", "Suspenso", 7, 2022, 150);
    vector[3] = new Serie(8,"Serie", "Hola", "Panico", 10, 2021, 100 );
    vector[4] = new Serie(6,"Serie", "Mundo", "Amistad", 10, 2021, 100);

    int opcion, op01, op02, op04; 

    do{
        global_contador = 0;
        cout << "\n **** MENU **** " << endl;
        cout << " 1.- Mostrar Videos en genral \n 2.- Mostrar series con una calificacion \n 3.- Mostrar peliculas con una calificacion \n 4.- Calificar Video \n 0.- Salir " << endl;
        cin >> opcion;
        switch(opcion){
            case 1:
                    cout << "\n *** Mostrar Videos en general *** " << endl;
                    cout << "\n Pelicula uno: " << endl;
                    vector[0] -> muestraNombre();
                    cout << "\n Pelicula dos: " << endl;
                    vector[1] -> muestraNombre();
                    cout << "\n Pelicula tres: " << endl;
                    vector[2] -> muestraNombre();
                    cout << "\n Serie uno: " << endl;
                    vector[3] -> muestraNombre();
                    cout << "\n Serie dos: " << endl;
                    vector[4] -> muestraNombre();
                break;
            case 2:
                cout << "Introduce la calificacion a buscar: " << endl;
                cin >> op01;
                vector[3] -> buscarCalificacion(op01);
                vector[4] -> buscarCalificacion(op01);
                if (global_contador == 2){
                    cout << " No hay un video con esa calificacion " << endl;
                }
                break;
            case 3:
                cout << "Introduce la calificacion a buscar: " << endl;
                cin >> op02;
                vector[0] -> buscarCalificacion(op02);
                vector[1] -> buscarCalificacion(op02);
                vector[2] -> buscarCalificacion(op02);
                if (global_contador == 3){
                    cout << " No hay un video con esa calificacion " << endl;
                }
                break;
            case 4: 
                do{
                    cout << "\n *** Menu de calificacion *** " << endl;
                    cout << " 1.- Pelicula \n 2.- Serie \n 0.- Salir" << endl;
                    cin >> op04;
                    switch(op04){
                        case 1:
                            cout << "\n Pelicula uno: " << endl;
                            vector[0] -> calificaVideo();
                            cout << "\n Pelicula dos: " << endl;
                            vector[1] -> calificaVideo();
                            cout << "\n Pelicula tres: " << endl;
                            vector[2] -> calificaVideo();
                            break;
                        case 2:
                            cout << "\n Serie uno: " << endl;
                            vector[3] -> calificaVideo();
                            cout << "\n Serie dos: " << endl;
                            vector[4] -> calificaVideo();
                            break;
                    }
                }while(op04 != 0);   
            break;
        }
    }while(opcion != 0);
cout << " Gracias por el uso del programa :) \n Regresa pronto " << endl;
return EXIT_SUCCESS;
}
