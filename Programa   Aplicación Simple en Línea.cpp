* Clase Estudiante que representa la información de un estudiante.

 */

public class Estudiante {

    private String nombre;

    private String matricula;

    private double promedio;

    /**

     * Constructor de la clase Estudiante.

     * @param nombre Nombre del estudiante.

     * @param matricula Matricula del estudiante.

     * @param promedio Promedio del estudiante.

     */

    public Estudiante(String nombre, String matricula, double promedio) {

        this.nombre = nombre;

        this.matricula = matricula;

        this.promedio = promedio;

    }

    /**

     * Método para obtener el nombre del estudiante.

     * @return Nombre del estudiante.

     */

    public String getNombre() {

        return nombre;

    }

    /**

     * Método para obtener la matricula del estudiante.

     * @return Matricula del estudiante.

     */

    public String getMatricula() {

        return matricula;

    }

    /**

     * Método para obtener el promedio del estudiante.

     * @return Promedio del estudiante.

     */

    public double getPromedio() {

        return promedio;

    }

    /**

     * Método para mostrar la información del estudiante.

     */

    public void mostrarInformacion() {

        System.out.println("Nombre: " + nombre);

        System.out.println("Matricula: " + matricula);

        System.out.println("Promedio: " + promedio);

    }

}
