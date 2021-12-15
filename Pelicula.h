#include <iostream>
using namespace std;

class Pelicula:public Video{
    public:
    Pelicula(int nominaciones, string tipoVideo, string nombreVideo, string genero, int calificacion, int anioLanzamiento, int duracion);
    void muestraDatos();
    private:
    int Nominaciones;
    int Calificacion;
};