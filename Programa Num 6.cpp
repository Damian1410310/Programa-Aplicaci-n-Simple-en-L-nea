public class Main {
    public static void main(String[] args) {
        Circle circle = new Circle("azul", 5.0);
        circle.display();
        System.out.println("El área del círculo es " + circle.getArea());

        Rectangle rectangle = new Rectangle("rojo", 4.0, 6.0);
        rectangle.display();
        System.out.println("El perímetro del rectángulo es " + rectangle.getPerimeter());
    }
}

