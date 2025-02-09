public class Main {

    public static void main(String[] args) {

        // Instanciación de objetos Estudiante

        Estudiante estudiante1 = new Estudiante("Juan Pérez", "A1234567", 8.5);

        Estudiante estudiante2 = new Estudiante("Maria Garcia", "B7654321", 9.2);

        // Uso de métodos

        estudiante1.mostrarInformacion();

        System.out.println();

        estudiante2.mostrarInformacion();

    }

}
