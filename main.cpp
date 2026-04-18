#include <iostream>
#define max 5

using namespace std;

class Ordenamiento
{
private:
    int datos[max];
public:
    void llenado();
    void mostrar(string);
    void burbuja();
    Ordenamiento();
    ~Ordenamiento();
};

Ordenamiento::Ordenamiento()
{

}

Ordenamiento::~Ordenamiento()
{

}
void Ordenamiento::llenado()
{
    int i, dato;
    for (i=0;i<=max;i++)
    {
        cout<<"Ingresa el numero ("<<i+1<<"): ";
        cin>>dato;
        datos[i]=dato;
    }
}
void Ordenamiento::mostrar(string _estado)
{
    int i;
    cout<<"Los valores "<<_estado<<" del arreglo son : {";
    for (i=0;i<max;i++)
    {
        cout<<datos[i]<<", ";
    }
    cout<<datos[max]<<"}"<<endl;
}
void Ordenamiento::burbuja()
{
    int aux;
    for (int i=0;i<max;i++)
    {
        for (int j=0;j<max;j++)
        {
            if(datos[j]>datos[j+1])
            {
                aux=datos[j+1];
                datos[j+1]=datos[j];
                datos[j]=aux;
            }
        }
    }
}

int main()
{
    Ordenamiento objeto1;
    objeto1.llenado();
    objeto1.mostrar("desordenados");
    objeto1.burbuja();
    objeto1.mostrar("ordenados");
    return 0;
}
