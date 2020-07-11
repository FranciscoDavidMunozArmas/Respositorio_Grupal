#ifndef REGIONES_H
#define REGIONES_H


class Regiones
{
    public:
        Regiones();
        Regiones(int**);
        int** llenar(int, int);
        void mostrar(int, int);
        int **get_Region();
        void set_Region(int**);
        void iniciar();
    protected:

    private:
        int** cuadrado;
};

#endif // REGIONES_H
