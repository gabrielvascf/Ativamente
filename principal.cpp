#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Atividade {
private:
    vector<string, string> res;

public:
    string data;
    string descricao;
};

struct Paciente {


public:
    Paciente(string name, string nasc, string cidade, string estado, string cfisicas, string cmentais) {
        nome = name;
        data_nascimento = nasc;
        cidade = cidade;
        estado = estado;
        cfisicas = cfisicas;
        cmentais = cmentais;
    }

    void setnome (){
        cout << "Nome: "<<endl;
        cin>> nome;
    }
     string getnome(){
       return nome;
     }
    string nome;
    string data_nascimento;
    string cidade;
    string estado;
    string cfisicas;
    string cmentais;

private:

      //  Atividade historico[30];

};


int main() {
    Paciente p = Paciente("luis", "hoje", "aqui", "aqui tambem", "ok", "maluco");
    cout << p.nome << endl;

    return 0;
}
