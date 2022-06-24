#include "../include/CutBox.h"

CutBox::CutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_)
{
    x0 = x0_;
    x1 = x1_;
    y0 = y0_;
    y1 = y1_;
    z0 = z0_;
    z1 = z1_;
}

void CutBox::draw(Sculptor &s)
{
    for(int i = x0; i <= x1; i++){
        for(int j = y0; j <= y1; j++){
            for(int k = z0; k <= z1; k++){
                s.cutVoxel(i,j,k);
            }
        }
    }
}
