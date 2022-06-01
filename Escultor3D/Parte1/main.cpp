#include <iostream>
#include "Sculptor.h"

using namespace std;

int main()
{

    Sculptor escultura(100,100,100);

    escultura.setColor(0,0,0,0);
    escultura.putBox(50,50,50,50,50,50);
    escultura.cutBox(49,49,49,49,1,1);

    escultura.setColor(0,0,0,0);
    escultura.putSphere(25,25,50,12);


    escultura.writeOFF((char*)"escultura.off"); 

    cout << "Arquivo gravado com sucesso!" << endl;
    return 0;

}