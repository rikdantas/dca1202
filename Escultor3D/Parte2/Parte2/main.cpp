#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "./include/Sculptor.h"
#include "./include/Interpretador.h"


using namespace std;

int main()
{
    Sculptor *Escultura;
    Interpretador parser;
    vector<FiguraGeometrica*> figuras;

    figuras = parser.parse("sculptor.txt");

    Escultura = new Sculptor(parser.getDx(), parser.getDy(), parser.getDz());

    for(size_t i = 0; i < figuras.size(); i++){
        figuras[i] -> draw(*Escultura);
    }

    Escultura -> writeOFF((char*)"escultura.off");

    for(size_t i = 0; i < figuras.size(); i++){
        delete figuras[i];
    }

    delete Escultura;
    return 0;

}
