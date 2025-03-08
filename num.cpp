#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int numeroAleatorio, palpite, tentativas;
    char jogarNovamente;

    // Inicia o gerador de os numeros aleatorios
    srand(time(0));

    do
    {
        numeroAleatorio = rand() % 100 + 1; // gera numeros de 1 - 100
        tentativas = 0;

        cout << "Bem vindo ao jogo de adivinhacao!" << endl
             << "Tente adivinhar um numero entre 1 e 100" << endl;

        do
        {
            cout << "Diga-me o numero que acha que irei sortiar: ";
            cin >> palpite;
            tentativas++;

            if (palpite < numeroAleatorio)
            {
                cout << "Muito baixo! Tente novamente."<<endl;
            }
            else if (palpite > numeroAleatorio)
            {
                cout << "Muito alto! Tente novamente."<<endl;
            }
            else
            {
                cout << "Parabens vc acertou em " << tentativas << " tentativas." << endl;
            }

        } while (palpite != numeroAleatorio);

        cout
            << "Deseja jogar novamente? [s/n]: ";
        cin >> jogarNovamente;

    } while (jogarNovamente == 's' || jogarNovamente == 'S');

    cout << "Obrigado por jogar!";
    return 0;
}