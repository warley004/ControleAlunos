#include "Aluno.hpp"
using namespace std;

Aluno::Aluno(string nomeAluno, int matricula){
    _nomeAluno=nomeAluno;
    _matricula=matricula;
}

float Aluno::calculaMedia(){
    int somaDasNotas{0};
    for(size_t i=0;i<notasDoAluno.size();i++){
        somaDasNotas = somaDasNotas + notasDoAluno[i];
    }
    return somaDasNotas/static_cast<float>(notasDoAluno.size());
}

void Aluno::setNotas(vector <int> atribuiNotas){
    notasDoAluno=atribuiNotas;
}

void Aluno::imprimeNotas(){
    for(size_t i=0;i<notasDoAluno.size();i++){
        cout<<notasDoAluno[i]<<" ";
    }
}

void Aluno::imprimeMaiorNota(){
    
    if(!notasDoAluno.empty()){
       int maiorNota=*max_element(notasDoAluno.begin(),notasDoAluno.end());
       cout<<maiorNota;
    }
}

void Aluno::imprimeMenorNota(){
    
    if(!notasDoAluno.empty()){
       int menorNota=*min_element(notasDoAluno.begin(),notasDoAluno.end());
       cout<<menorNota;
    }
}


