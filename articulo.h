#ifndef ARTICULO_H
#define ARTICULO_H
#include <string>
#include "Profesor.h"
#include "Estudiante.h"
using namespace std;

class Articulo
{
private:
    int idetnificador;
    bool estado;
    string nombre;
    int valor;
    Profesor profesor;
    int fechaPrestamo;
    Estudiante estudiante;
    int fechaDevolucion;

public:
    Articulo(int identificador, bool estado, string nombre, int valor, Profesor profesor,
             int fechaprestamo, Estudiante estudiante, int fechaDevolucion);
    Articulo();
    ~Articulo();
    void daridenificador (int identificador);
    int obteneridentificador();
    void darestado(bool estado);
    bool obtenerestado();
    void darnombre(string nombre);
    string obtenernombre();
    void darvalor (int valor);
    int obtenervalor;
    void darprofesor(Profesor profesor);
    Profesor obtenerprofesor();
    int darfechaprestamo(int  fechaprestamo);
    void darestudiante(Estudiante estudiante);
    Estudiante obtenerestudiante();
    void  darfechadevolucion(int fechadevolucion);
    int obtenerfechadevolucion();
    void depreciarmuebles(int identificadorTiempo);
    void depreciarcomputo(int identificadorTiempo);
    void depreciarprestamos(int identificadorTiempo);


};

#endif // ARTICULO_H
