public class SuperTest {
    protected int a;
    
    SuperTest(){
        a = 5;
        System.out.println("I am super class");
    }
    
    SuperTest(String message){
        System.out.println(message + "from Super Class");
    }

    public void method(){
        System.out.println("I am from superclass");
    }

    public void greeting(){
        System.out.println("Hello from superclass");
    }
}
