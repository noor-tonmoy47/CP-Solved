class A {
    void meth(){
        System.out.println("Hola from A");
    }
}

class B{
    void meth(){
        System.out.println("Hola from B");
    }
}


class C extends A , B{
    C(){
        System.out.println("Cdi");
    }
}

public class Test{
    public static void main(String[] args){
        // SuperTest subtest = new SubTest("Hello");

        // System.out.println(subtest.a);
        // subtest.method();
        // // subtest.parse();
        // subtest.greeting();
        C obj = new C();
        obj.meth();
    }
}
