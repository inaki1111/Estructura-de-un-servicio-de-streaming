#include <iostream>
using namespace std;

class Serie:public Video{
    public:
    Serie(int cantEpisodios, string tipoVideo, string nombreVideo, string genero, int calificacion, int anioLanzamiento, int duracion);
    void muestraDatos();
    private:
    int Cant_Episodios;
    int Calificacion;
};