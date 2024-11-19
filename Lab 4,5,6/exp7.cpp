// Write  C++  program  to  calculate  area  of  a  cuboid.  Convert  the  cuboid  into  a  cube  using  a 
// friend class

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Cuboid{
    float h, w, l;
    public:
    Cuboid(float h, float l, float w){
        this->h = h;
        this->l = l;
        this->w = w;
        Area(h,l,w);
    }
    void Area(float h, float l, float w){
        float area = 2*(l*w + w*h + h*l);
        cout<<"Area of Cuboid: "<<area<<endl;
    }
    friend void cubeConversion(Cuboid &cuboid);
};

void cubeConversion(Cuboid &cuboid){
    float side = min(min(cuboid.h, cuboid.l),cuboid.w);
    cout<<"Area of this cube: "<<side*side*6<<endl;
}

int main()
{
    Cuboid cube(3,4,5);
    cubeConversion(cube);
    return 0;
}