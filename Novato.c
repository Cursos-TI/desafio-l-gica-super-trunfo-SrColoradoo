import java.util.Scanner;

class Carta {
    String estado;
    String codigo;
    String cidade;
    int populacao;
    double area;
    double pib;
    int pontosTuristicos;

    // Construtor e métodos getters/setters
}

public class JogoCartas {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Cadastro da primeira carta
        Carta carta1 = new Carta();
        System.out.println("Cadastro da Carta 1:");
        System.out.print("Estado: ");
        carta1.estado = scanner.nextLine();
        System.out.print("Código: ");
        carta1.codigo = scanner.nextLine();
        System.out.print("Cidade: ");
        carta1.cidade = scanner.nextLine();
        System.out.print("População: ");
        carta1.populacao = scanner.nextInt();
        System.out.print("Área: ");
        carta1.area = scanner.nextDouble();
        System.out.print("PIB: ");
        carta1.pib = scanner.nextDouble();
        System.out.print("Pontos Turísticos: ");
        carta1.pontosTuristicos = scanner.nextInt();
        scanner.nextLine(); // Consumir a nova linha

        // Cadastro da segunda carta
        Carta carta2 = new Carta();
        System.out.println("Cadastro da Carta 2:");
        System.out.print("Estado: ");
        carta2.estado = scanner.nextLine();
        System.out.print("Código: ");
        carta2.codigo = scanner.nextLine();
        System.out.print("Cidade: ");
        carta2.cidade = scanner.nextLine();
        System.out.print("População: ");
        carta2.populacao = scanner.nextInt();
        System.out.print("Área: ");
        carta2.area = scanner.nextDouble();
        System.out.print("PIB: ");
        carta2.pib = scanner.nextDouble();
        System.out.print("Pontos Turísticos: ");
        carta2.pontosTuristicos = scanner.nextInt();

        // Comparação
        System.out.println("\nComparando as Cartas:");
        System.out.println("Escolha o atributo para comparação:");
        System.out.println("1. População");
        System.out.println("2. Área");
        System.out.println("3. PIB");
        System.out.println("4. Pontos Turísticos");
        int escolha = scanner.nextInt();

        switch (escolha) {
            case 1:
                if (carta1.populacao > carta2.populacao) {
                    System.out.println("Carta 1 venceu!");
                } else if (carta1.populacao < carta2.populacao) {
                    System.out.println("Carta 2 venceu!");
                } else {
                    System.out.println("Empate!");
                }
                break;
            case 2:
                if (carta1.area > carta2.area) {
                    System.out.println("Carta 1 venceu!");
                } else if (carta1.area < carta2.area) {
                    System.out.println("Carta 2 venceu!");
                } else {
                    System.out.println("Empate!");
                }
                break;
            case 3:
                if (carta1.pib > carta2.pib) {
                    System.out.println("Carta 1 venceu!");
                } else if (carta1.pib < carta2.pib) {
                    System.out.println("Carta 2 venceu!");
                } else {
                    System.out.println("Empate!");
                }
                break;
            case 4:
                if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                    System.out.println("Carta 1 venceu!");
                } else if (carta1.pontosTuristicos < carta2.pontosTuristicos) {
                    System.out.println("Carta 2 venceu!");
                } else {
                    System.out.println("Empate!");
                }
                break;
            default:
                System.out.println("Opção inválida!");
        }

        scanner.close();
    }
}
