#include <iostream>
#include "Sculptor.h"

using namespace std;

int main()
{

    Sculptor escultura(100,100,100);

    escultura.setColor(0,255,0,1);
    for(int i=1; i <=50; i++){
        for(int j=1; j<=50; j++){
            escultura.putVoxel(i,j,1);
        };
    };

    escultura.setColor(255,255,0,1);
    escultura.putSphere(40,40,40,10);


    escultura.writeOFF((char*)"escultura.off"); 

    cout << "Arquivo gravado com sucesso!" << endl;
    return 0;

}