#include<iostream>
using namespace std;

//Product (Shopping Website)
class Product {

    private:
        int id;
        char name[100];
    
    public:
        int mrp;
        int selling_price;

};


int main(){
    Product camera;
    //selling price<=mrp

    camera.mrp=100;
    camera.selling_price=200;

    cout<<sizeof(camera)<<endl;
    cout<<"MRP "<<camera.mrp<<endl;
    cout<<"Selling Price "<<camera.selling_price<<endl;
}