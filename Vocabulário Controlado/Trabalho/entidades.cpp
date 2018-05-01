#include "entidades.h"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

Leitor::Leitor(const Nome& nome, const Sobrenome& sobrenome, const Email& email, const Senha& senha) {
    set_nome(nome);
    set_sobrenome(sobrenome);
    set_email(email);
    set_senha(senha);
}

void Leitor::valid_senha(Senha senha) {

    const static int PREFIXO = 32;

    string _nome = nome.get_nome();
    string _senha = senha.get_senha();

    _nome[0] += PREFIXO;

    for(int i = 0; i < _senha.size(); i++) {
        if(_senha[i] >= 'A' && _senha[i] <= 'Z') {
            _senha[i] += PREFIXO;
        }
    }

    if(_senha.find(_nome) < _senha.size()) {
        throw invalid_argument("A senha nao pode conter o nome do usuario");
    }
}

void Leitor::show_leitor() {

    cout << nome.get_nome() << " " << sobrenome.get_sobrenome() << endl;
    cout << email.get_email() << endl;
    cout << senha.get_senha() << endl;
}

Desenvolvedor::Desenvolvedor(const Nome& nome, const Sobrenome& sobrenome, const Email& email, const Senha& senha, const Data& nascimento) {
    set_nome(nome);
    set_sobrenome(sobrenome);
    set_email(email);
    set_senha(senha);
    set_data(nascimento);
}

void Desenvolvedor::show_desenvolvedor() {

    cout << nome.get_nome() << " " << sobrenome.get_sobrenome() << endl;
    cout << email.get_email() << endl;
    cout << senha.get_senha() << endl;
    cout << nascimento.get_data() << endl;
}

Administrador::Administrador(const Nome& nome, const Sobrenome& sobrenome, const Email& email, const Senha& senha, const Data& nascimento, const Telefone& telefone, const Endereco& endereco) {
    set_nome(nome);
    set_sobrenome(sobrenome);
    set_email(email);
    set_senha(senha);
    set_data(nascimento);
    set_telefone(telefone);
    set_endereco(endereco);
}

void Administrador::show_administrador() {

    cout << nome.get_nome() << " " << sobrenome.get_sobrenome() << endl;
    cout << email.get_email() << endl;
    cout << senha.get_senha() << endl;
    cout << nascimento.get_data() << endl;
    cout << telefone.get_telefone() << endl;
    cout << endereco.get_endereco() << endl;
}

Vocabulario::Vocabulario(const Nome& nome, const Idioma& idioma, const Data& data) {
    set_nome(nome);
    set_idioma(idioma);
    set_data(data);
}

void Vocabulario::show_vocabulario() {

    cout << nome.get_nome() << endl;
    cout << idioma.get_idioma() << endl;
    cout << data.get_data() << endl;
}

Termo::Termo(const Nome& nome, const Classe& classe, const Data& data) {
    set_nome(nome);
    set_classe(classe);
    set_data(data);
}

void Termo::show_termo() {

    cout << nome.get_nome() << endl;
    cout << classe.get_classe() << endl;
    cout << data.get_data() << endl;
}

Definicao::Definicao(const Texto& texto, const Data& data) {
    set_texto(texto);
    set_data(data);
}

void Definicao::show_definicao() {

    cout << texto.get_texto() << endl;
    cout << data.get_data() << endl;
}
