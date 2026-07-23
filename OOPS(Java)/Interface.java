interface Animal{
    void bark();
    // static void sleep(){ 
    //     System.out.println("Sleeping...");

    // }
    default void sleep(){
        System.out.println("Sleeping...");

    }
}

interface Pet  {
    void ownerName();

    
}
class Dog implements Animal,Pet{
    public void bark(){
        System.out.println("Bark!!!");
    }
    //@Override
    public void sleep(){
        System.out.println("Dog is sleeping!!!");
        //super.sleep();
    }
    public void ownerName(){
        System.out.println("XYZ");
    }
}

class Cat implements Animal{
    public void bark(){
        System.out.println("Meoooooooooooo");
    }
}
class Interface{
    public static void main(String[] args) {
         Dog dog=new Dog();
         dog.bark();
         dog.sleep();
         dog.ownerName();
         Cat c=new Cat();
         c.bark();
         c.sleep();
    }
}