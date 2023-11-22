#include <iostream>
#include <string>
#include <vector>
#include <locale.h>

using namespace std;

class Pessoa {
public:
    Pessoa() {
        nome = "";
        data_nascimento = "";
        cidade = "";
        estado = "";
        cfisicas = "";
        cmentais = "";
    }

    Pessoa(string name, string nasc, string city, string state, string phyCond, string menCond) {
        nome = name;
        data_nascimento = nasc;
        cidade = city;
        estado = state;
        cfisicas = phyCond;
        cmentais = menCond;
    }

    void setNome() {
        cout << "Nome: ";
        cin >> nome;
    }

    string getNome() {
        return nome;
    }

    void setDataNascimento() {
        cout << "Data de nascimento: ";
        cin >> data_nascimento;
    }

    string getDataNascimento() {
        return data_nascimento;
    }

    void setCidade() {
        cout << "Cidade: ";
        cin >> cidade;
    }

    string getCidade() {
        return cidade;
    }

    void setEstado() {
        cout << "Estado: ";
        cin >> estado;
    }

    string getEstado() {
        return estado;
    }

    void setCondicoesFisicas() {
        cout << "Condições físicas: ";
        cin >> cfisicas;
    }

    string getCondicoesFisicas() {
        return cfisicas;
    }

    void setCondicoesMentais() {
        cout << "Condições mentais: ";
        cin >> cmentais;
    }

    string getCondicoesMentais() {
        return cmentais;
    }

private:
    string nome;
    string data_nascimento;
    string cidade;
    string estado;
    string cfisicas;
    string cmentais;
};

int main() {
    vector<Pessoa> pessoas;
setlocale(LC_ALL,"");

    while (true) {
        cout << "MENU:" << endl;
        cout << "1. Cadastrar nova pessoa" << endl;
        cout << "2. Mostrar todas as pessoas cadastradas" << endl;
        cout << "3. Sair" << endl;
        cout << "Escolha uma opcao: ";

        int opcao;
        cin >> opcao;
        cout << endl;

        if (opcao == 1) {
            Pessoa p;
            p.setNome();
            p.setDataNascimento();
            p.setCidade();
            p.setEstado();
            p.setCondicoesFisicas();
            p.setCondicoesMentais();

            pessoas.push_back(p);

            cout << "Pessoa cadastrada com sucesso!" << endl;
            cout << endl;
        }
        else if (opcao == 2) {
            if (pessoas.empty()) {
                cout << "Nenhuma pessoa cadastrada." << endl;
                cout << endl;
            }
            else {
                cout << "PESSOAS CADASTRADAS:" << endl;
                for (Pessoa pessoa : pessoas) {
                    cout << "Nome: " << pessoa.getNome() << endl;
                    cout << "Data de nascimento: " << pessoa.getDataNascimento() << endl;
                    cout << "Cidade: " << pessoa.getCidade() << endl;
                    cout << "Estado: " << pessoa.getEstado() << endl;
                    cout << "Condicoes fisicas: " << pessoa.getCondicoesFisicas() << endl;
                    cout << "Condicoes mentais: " << pessoa.getCondicoesMentais() << endl;
                    cout << endl;
                }
            }
        }
        else if (opcao == 3) {
            break;
        }
        else {
            cout << "Opcao inválida. Por favor, escolha uma opção válida." << endl;
            cout << endl;
        }
    }

    return 0;
}