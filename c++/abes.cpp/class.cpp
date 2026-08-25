//define a class
class Car{
    public:
    //Data members
    string brand;
    string model;
    int year;
    //Member function
    void displayInfo(){
        cout<<"Brand: "<<brand<<",Model:"<<model<<",Year:"<<year<<endl;
    }
};
int main(){
    //Create objects of the class
    Car car1;
    Car car2;
    //Set values for car1
    car1.brand="Toyota";
    car1.model="Corolla";
    car1.year=2020;
    //Set values for car2
    car1.brand="Honda";
    car1.model="civic";
    car1.year=2022;
    // Call member function to display info
    car1.displayInfo();
    car2.displayInfo();
    return 0;
}