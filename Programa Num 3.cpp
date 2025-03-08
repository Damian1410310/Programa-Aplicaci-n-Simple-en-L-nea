public class Main {
    public static void main(String[] args) {
        Circle circle = new Circle("azul", 5.0);
        circle.display();
        System.out.println("El área del círculo es " + circle.getArea());

        Shape shape = new Shape("verde");
        shape.display();
    }
}

