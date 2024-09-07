#include "Aluno.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int matricula;
    string nomeAluno;
    int notas;
    vector<int> atribuiNotas;
    vector<Aluno> alunos;

    while (true) {
        cin >> nomeAluno;

        if (nomeAluno == "END") {
            break;
        }

        cin >> matricula;

        Aluno novoAluno = Aluno(nomeAluno, matricula);
        notas = 0; 

        while (true) {
            cin >> notas;

            if (notas == -1) {
                break;
            }

            atribuiNotas.push_back(notas);
        }

        novoAluno.setNotas(atribuiNotas);
        alunos.push_back(novoAluno);
        atribuiNotas.clear();
    }

    sort(alunos.begin(), alunos.end(), [](const Aluno &a, const Aluno &b) {
        return a._nomeAluno < b._nomeAluno;
    });

    for (size_t i = 0; i < alunos.size(); i++) {
        cout << alunos[i]._matricula << " " << alunos[i]._nomeAluno << " ";
        alunos[i].imprimeNotas();
        cout << "\n";
        cout << fixed << setprecision(2) << alunos[i].calculaMedia();
        cout << " ";
        alunos[i].imprimeMaiorNota();
        cout << " ";
        alunos[i].imprimeMenorNota();
        cout << "\n";
    }

    return 0;
}
