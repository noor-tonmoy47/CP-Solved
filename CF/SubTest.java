public class SubTest extends SuperTest{
    protected int a = 7;
    SubTest(){
        // a = 7;
        System.out.println("This is subclass");
    }
    SubTest(String message){
        System.out.println(message);
    }

    @Override
    public void method(){

        System.out.println("I am method from subclass");
    }

    public void parse(){
        System.out.println("I am parsing some data");
    }

}
