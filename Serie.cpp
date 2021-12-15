#include <iostream>
#include "Video.h"
#include "Serie.h"
using namespace std;

extern int global_contador;

Serie::Serie(int cantEpisodios, string tipoVideo, string nombreVideo, string genero, int calificacion, int anioLanzamiento, int duracion):Video(tipoVideo,nombreVideo,genero,calificacion,anioLanzamiento,duracion){
    Cant_Episodios = cantEpisodios;
    Calificacion = calificacion;
}

void Serie::muestraDatos(){
    Video::muestraDatos();
    cout << " La cantidad de episodios es: " << Cant_Episodios << endl;
}
