#include <iostream>
#include "Video.h"
#include "Pelicula.h"
using namespace std;

extern int global_contador;

Pelicula::Pelicula(int nominaciones, string tipoVideo, string nombreVideo, string genero, int calificacion, int anioLanzamiento, int duracion):Video(tipoVideo,nombreVideo,genero,calificacion,anioLanzamiento,duracion){
    Nominaciones = nominaciones;
    Calificacion = calificacion;
}

void Pelicula::muestraDatos(){
    Video::muestraDatos();
    cout << " La cantidad de nominaciones es: " << Nominaciones << endl;
}


