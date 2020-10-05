package my;

public class Demo {

    // 生成头文件 \JNIDemo\src>javah my.DoSomething 

    public static void main(String[] args) {
        System.out.println("java.library.path -> " + System.getenv("java.library.path"));
        DoSomething ds = new DoSomething();
        String name = "Bruce";
        String msg = ds.sayHelloTo(name);
        System.out.println("sayHelloTo(\"" + name + "\") -> " + msg);
    }

}
