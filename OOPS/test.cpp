#include<iostream>
#include<string.h>
using namespace std;

// Product (Shopping Website)

class Teacher{
    
    private:
        // int id;
        // char name[100];
        int slaray;

    public:

        Teacher(int salary){
            // this->id=id;
            this->slaray=slaray;
            // strcpy(name,n);
        }
    

        //setters

        void setSalary(int price){
            if(price>0){
                slaray=price;
            }
        }


        //Getters

        int getSalary(){
            return slaray;
        }

};

class Professor: public Teacher{
    
    
};

class Associate_Professor: public Teacher{

    
};

class Assistance_Professor: public Teacher{

    
};

int main(){

    Teacher obj;
    Associate_Professor obj1;
    //selling_price<=mrp
    // camera.setSalary(100);
    // camera.getSalary(190);

    // cout<<"MRP "<<camera.getMrp()<<endl;
    // cout<<"Selling price "<<camera.getSellingPrice()<<endl;



    return 0;
}
