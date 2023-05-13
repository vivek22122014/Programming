#include<iostream>
#include <string.h>
using namespace std;

// Product (Shopping Website)

class Product{
    
    private:
        int id;
        char name[100];
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
            this->mrp=mrp;
            this->selling_price=selling_price;
            strcpy(name,n);
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

};


int main(){

    Product camera(101,"GoProHero9",28000,26000);
    //selling_price<=mrp
    // camera.setMrp(100);
    // camera.setSellingPrice(190);

    cout<<"MRP "<<camera.getMrp()<<endl;
    cout<<"Selling price "<<camera.getSellingPrice()<<endl;



    return 0;
}
