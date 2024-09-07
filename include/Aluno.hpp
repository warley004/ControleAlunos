#ifndef ALUNO_H
#define ALUNO_H
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

struct Aluno {

    string _nomeAluno;
    int _matricula;
    vector <int> notasDoAluno;

    Aluno(string nomeAluno, int matricula);
    
    float calculaMedia ();
    void setNotas (vector <int>);
    void imprimeNotas ();
    void imprimeMaiorNota ();
    void imprimeMenorNota ();


};

#endif