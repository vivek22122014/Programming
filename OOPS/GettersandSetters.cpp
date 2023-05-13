#include<iostream>
using namespace std;

// Product (Shopping Website)

class Product{
    
    private:
        int id;
        char name[100];
        int mrp;
        int selling_price;

    public:

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

    Product camera;
    //selling_price<=mrp
    camera.setMrp(100);
    camera.setSellingPrice(190);

    cout<<"MRP "<<camera.getMrp()<<endl;
    cout<<"Selling price "<<camera.getSellingPrice()<<endl;



    return 0;
}
