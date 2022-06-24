#include "../include/PutEllipsoid.h"
#include <cmath>

PutEllipsoid::PutEllipsoid(int xc_, int yc_, int zc_, int rx_, int ry_, int rz_, float r_, float g_, float b_, float a_)
{
    xcenter = xc_;
    ycenter = yc_;
    zcenter = zc_;
    rx = rx_;
    ry = ry_;
    rz = rz_;
    r = r_;
    g = g_;
    b = b_;
    a = a_;
}

void PutEllipsoid::draw(Sculptor &s)
{
    s.setColor(r,g,b,a);
    double dist;
    if(rx == 0){
        for(int j = ycenter - ry; j <= ycenter + ry; j++){
            for(int k = zcenter - rz; k <= zcenter + rz; k++){
                dist = pow(j - ycenter, 2)/pow(ry, 2) + pow(k - zcenter, 2)/pow(rz, 2);
                if(dist <= 1){
                    s.putVoxel(xcenter,j,k);
                }
             }
         }
    }else if(ry == 0){
        for(int i = xcenter - rx; i <= xcenter + rx; i++){
            for(int k = zcenter - rz; k <= zcenter + rz; k++){
                dist = pow(i - xcenter, 2)/pow(rx, 2) + pow(k - zcenter, 2)/pow(rz, 2);
                if(dist <= 1){
                    s.putVoxel(i,ycenter,k);
                }
            }
         }

    }else if(rz == 0){
        for(int i = xcenter - rx; i <= xcenter + rx; i++){
            for(int j = ycenter - ry; j <= ycenter + ry; j++){
                dist = pow(i - xcenter, 2)/pow(rx, 2) + pow(j - ycenter, 2)/pow(ry, 2);
                if(dist <= 1){
                    s.putVoxel(i,j,zcenter);
                }
            }
         }
    }else{
        for(int i = xcenter - rx; i < xcenter + rx; i++){
            for(int j = ycenter - ry; j < ycenter + ry; j++){
                for(int k = zcenter - rz; k < zcenter + rz; k++){
                    dist = pow(i - xcenter,2)/pow(rx, 2) + pow(j - ycenter,2)/pow(ry, 2) + pow(k - zcenter,2)/pow(rz, 2);
                    if (dist <= 1){
                        s.putVoxel(i,j,k);
                    }
                }
            }
        }
    }
}
