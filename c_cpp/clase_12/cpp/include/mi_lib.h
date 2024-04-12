#include <string>

struct Humano {
    private:
        std::string nombre;
        int edad;
    public:
        // Constructor
        Humano(std::string _nombre,int _edad);
        void mostrarDatos();
        //Funciones/Procedimientos  setter
        void setEdad(int e);
        //Funciones/procedimientos getter
        int getEdad();
};