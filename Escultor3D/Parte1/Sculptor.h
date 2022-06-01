#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <string>

using namespace std;

struct Voxel {
    float r,g,b; // CORES
    float a; // OPACIDADE
    bool isOn; // MOSTRAR OU NÃO
};

class Sculptor
{
    protected:
        Voxel ***v; // MATRIZ 3D
        int nx,ny,nz; // TAMANHO DA MATRIZ
        float r,g,b,a; // CORES DA MATRIZ
    public:
        Sculptor(int nx_, int ny_, int nz_);
     
        void setColor(float r_, float g_, float b_, float a_);
        
        ~Sculptor();
        
        void putVoxel(int x0, int y0, int z0);

        void cutVoxel(int x0, int y0, int z0);

        void putBox(int x0, int x1, int y0, int y1, int z0, int z1);

        void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);

        void putSphere(int xcenter, int ycenter, int zcenter, int radius);

        void cutSphere(int xcenter, int ycenter, int zcenter, int radius);

        void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

        void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
                
        void writeOFF(char *filename);


};

#endif // SCULPTOR_H