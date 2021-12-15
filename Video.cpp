#include <iostream>
#include "Video.h"
using namespace std;

extern int global_contador;

Video::Video(string tipoVideo, string nombreVideo, string genero, int calificacion, int anioLanzamiento, int duracion){
    Tipo_Video = tipoVideo;
    Nombre_Video = nombreVideo;
    Genero = genero;
    Calificacion = calificacion;
    Anio_Lanzamiento = anioLanzamiento;
    Duracion = duracion;
}
void Video::calificaVideo(){
    i = 0;
    while (i == 0){
        cout << " Cual es la calificacion que le das al video: " << endl;
        cin >> Calificacion;
        if (Calificacion < 0 || Calificacion > 10){
            cout << " Inserta una calificacion valida \n" << endl;
        }
        else{
            i = 1;
        } 
    }
}

void Video::muestraNombre(){
    cout << " El nombre del video es: " << Nombre_Video << endl;
}

void Video::buscarCalificacion(int op01){
    if (op01 == Calificacion){
        cout << " \n " << endl;
        muestraDatos();
        global_contador = 0;
    }
    else{
        global_contador++;
    }
}

void Video::muestraDatos(){

    cout << " El tipo de video es: " << Tipo_Video << endl;
    cout << " El nombre del video es: " << Nombre_Video << endl;
    cout << " El genero del video es: " << Genero << endl;
    cout << " La calificacion del video es: " << Calificacion << endl;
    cout << " El anio de lanzamiento es: " << Anio_Lanzamiento << endl;
    cout << " La duracion del video es: " << Duracion << endl;
}