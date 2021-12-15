#include <iostream>
using namespace std;

class Video{
    public:
        Video(string tipoVideo, string nombreVideo, string genero, int calificacion, int anioLanzamiento, int duracion);
        void calificaVideo();
        void muestraNombre();
        void buscarCalificacion(int);
        virtual void muestraDatos();
    private:
        string Tipo_Video;
        string Nombre_Video;
        string Genero;
        int Calificacion;
        int Anio_Lanzamiento;
        int Duracion;
        int i;
};
