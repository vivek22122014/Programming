#include<iostream>
#include <string.h>
using namespace std;

// Product (Shopping Website)

class Product{
    
    private:
        int id;
        char *name;
        int mrp;
        int selling_price;

    public:

        //constructors
        Product(){
            cout<<"Inside constructor "<<endl;
        }

        //Parameterised constructor
        Product(int id,char *n,int mrp,int selling_price){
            this->id=id;
            name=new char[strlen(n)+1]; //Allocating
            strcpy(name,n);
            this->mrp=mrp;
            this->selling_price=selling_price;
            strcpy(name,n);
        }

        //copy constructor
        Product(Product &X){
            //create a copy
            id=X.id;
            name=new char[strlen(X.name)+1]; //Allocating
            strcpy(name,X.name);
            mrp=X.mrp;
            selling_price=X.selling_price;
        }

        void operator=(Product &X){
            id=X.id;
            name=new char[strlen(X.name)+1]; //Allocating
            strcpy(name,X.name);
            mrp=X.mrp;
            selling_price=X.selling_price;
        }
        //setters
        void setMrp(int price){
            if(price>0){
                mrp=price;
            }
        }

        void setSellingPrice(int price){
            if(price>mrp){
                selling_price=mrp;
            }
            else{
                selling_price=price;
            }
        }

        //Getters

        int getMrp(){
            return mrp;
        }

        int getSellingPrice(){
            return selling_price;
        }

        void showDetails(){
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Selling price: "<<selling_price<<endl;
            cout<<"MRP: "<<mrp<<endl;
        }

        //setter for name

        void SetName(char *name){
            strcpy(this->name,name);
        }

        ~ Product(){
            cout<<"Deleting "<<name<<endl;
            if(name!=NULL){
                delete [] name;
                name=NULL;
            }
        }
};


int main(){

    Product camera(101,"GoProHero9",28000,26000);

    Product old_camera;

    old_camera=camera;

   old_camera.SetName("GoPro8");
    old_camera.setSellingPrice(1000);
    
    old_camera.showDetails();
    camera.showDetails();


    //Product webcam(camera);
    //Product handycam=camera;

    // camera.showDetails();
    // webcam.showDetails();
    // handycam.showDetails();

    //selling_price<=mrp
    // camera.setMrp(100);
    // camera.setSellingPrice(190);

    // cout<<"MRP "<<camera.getMrp()<<endl;
    // cout<<"Selling price "<<camera.getSellingPrice()<<endl;



    return 0;
}
