public class JogoCartasAvancado {
    public static void main(String[] args) {
        // Cadastro das cartas (semelhante ao Nível Novato)

        // Menu interativo
        Scanner scanner = new Scanner(System.in);
        int escolha;
        do {
            System.out.println("\nEscolha o atributo para comparação:");
            System.out.println("1. População");
            System.out.println("2. Área");
            System.out.println("3. PIB");
            System.out.println("4. Pontos Turísticos");
            System.out.println("5. Comparar Densidade Populacional");
            System.out.println("6. Sair");
            escolha = scanner.nextInt();

            switch (escolha) {
                case 1:
                    // Comparação de População
                    break;
                case 2:
                    // Comparação de Área
                    break;
                case 3:
                    // Comparação de PIB
                    break;
                case 4:
                    // Comparação de Pontos Turísticos
                    break;
                case 5:
                    // Comparação de Densidade Populacional
                    break;
                case 6:
                    System.out.println("Saindo...");
                    break;
                default:
                    System.out.println("Opção inválida!");
            }
        } while (escolha != 6);

        scanner.close();
    }
}
