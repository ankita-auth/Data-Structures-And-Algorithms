//Base Class
class Vehicle{
    String VehicleNumber;
    public Vehicle(String vehicleNumber){
        this.VehicleNumber=vehicleNumber;
    }
    public void honk(){
        System.out.println("Honk!!!!");
    }
      public void printVehicleNumber(){
        System.out.println(VehicleNumber);
    }
 
 
}
 
 
//Derived Class 
class Car extends Vehicle{
   
    public Car(String numberOfCar){
        super(numberOfCar);
     
    }
 
  
 
}
 
//Derived Class 
class Bus extends Vehicle{
    
    public Bus(String numberOfBus){
        super(numberOfBus);
    }
 
}
 
class Inheritance{
    public static void main(String[] args){
        Car car = new Car("KA01KJ9876");
        car.printVehicleNumber();
        car.honk();
 
 
        Bus bus = new Bus("KA08JU7643");
        bus.printVehicleNumber();
        bus.honk();
 
 
    }
}
 