#include <iostream>

using namespace std;

int main() {
    // Declaração de variáveis
    int N, P, M, pequeno = 0, medio = 0, T;

    // Solicita e lê o número de premiados com validação
    do {
        cout << "Digite o número de premiados (deve ser maior ou igual a 1):" << endl;
        cin >> N;
        if (N < 1) {
            cout << "Número inválido. Por favor, digite um número maior ou igual a 1." << endl;
        }
    } while (N < 1);

    // Solicita e lê os tamanhos solicitados
    for (int i = 0; i < N; i++) {
        do {
            cout << "Digite o tamanho solicitado pelo premiado " << (i + 1) << " (1 para pequeno, 2 para médio):" << endl;
            cin >> T;
            if (T != 1 && T != 2) {
                cout << "Tamanho inválido. Digite 1 para pequeno ou 2 para médio." << endl;
            }
        } while (T != 1 && T != 2); // Repete até que o usuário digite 1 ou 2

        if (T == 1) {
            pequeno++; // Conta o número de camisetas pequenas solicitadas
        } else {
            medio++; // Conta o número de camisetas médias solicitadas
        }
    }

    // Solicita e lê o número de camisetas pequenas produzidas
    cout << "Digite o número de camisetas pequenas produzidas:" << endl;
    cin >> P;

    // Solicita e lê o número de camisetas médias produzidas
    cout << "Digite o número de camisetas médias produzidas:" << endl;
    cin >> M;

    // Verifica se a quantidade produzida atende a demanda
    if (pequeno <= P && medio <= M) {
        cout << "\nS" << endl; // Todos os premiados serão atendidos
    } else {
        cout << "\nN" << endl; // Nem todos os premiados serão atendidos
    }

    return 0;
}
