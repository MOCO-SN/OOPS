#include<iostream>
using namespace std;

class Car{
    private:
    string brand;
    string model;
    int year;

    public:
    void drive(){
        cout<<"Driving Car "<<endl;
    }

    void stop(){
        cout<<"Stopping Car "<<endl;    
    }
    void start(){
        cout<<"Starting Car "<<endl;
    }
    void accelerate(){
        cout<<"Accelerating Car "<<endl;
    }
    void brake(){
        cout<<"Braking Car "<<endl; 
    }

    void honk(){
        cout<<"Honking Car "<<endl; 
    }
    void park(){
        cout<<"Parking Car "<<endl; 
    }
    void turn(){
        cout<<"Turning Car "<<endl; 
    }
    void reverse(){
        cout<<"Reversing Car "<<endl;
    }
    void wash(){
        cout<<"Washing Car "<<endl;
    }
    void maintain(){
        cout<<"Maintaining Car "<<endl;
    }
    void repair(){
        cout<<"Repairing Car "<<endl;
    }
    void refuel(){
        cout<<"Refueling Car "<<endl;
    }
    void UpdateDetails(string b, string m, int y){
        cout<<"Updating Car Details "<<endl;
        
        brand = b;
        model = m;  
        year = y;
    }

    void displayDetails(){
        cout<<"Car Details: "<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
};

int main(){


    // it is a process of hiding the implementation details and showing only functionality to the user.

    // example of abstraction is car, we know how to drive a car but we don't know how it works.

    Car c;
    c.drive();

    c.UpdateDetails("Toyota", "Camry", 2020);

    c.displayDetails();

}