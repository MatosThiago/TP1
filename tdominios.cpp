#include "tdominios.h"
#include <iostream>
#include <stdexcept>

using namespace std;

void TNome::test_sucesso() {

    try {
        nome->set_nome(VALIDO);
        if(nome->get_nome() != VALIDO) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

void TNome::test_falha() {

    try {
        nome->set_nome(INVALIDO);
        ESTADO = FALHA;
    }
    catch(exception& e) {
        return;
    }
}

int TNome::run() {

    setup();
    test_sucesso();
    test_falha();
    teardown();

    return ESTADO;
}

void TSobrenome::test_sucesso() {

    try {
        sobrenome->set_sobrenome(VALIDO);
        if(sobrenome->get_sobrenome() != VALIDO) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

void TSobrenome::test_falha() {

    try {
        sobrenome->set_sobrenome(INVALIDO);
        ESTADO = FALHA;
    }
    catch(exception& e) {
        return;
    }
}

int TSobrenome::run() {

    setup();
    test_sucesso();
    test_falha();
    teardown();

    return ESTADO;
}

void TTelefone::test_sucesso() {

    try {
        telefone->set_telefone(VALIDO);
        if(telefone->get_telefone() != VALIDO) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

void TTelefone::test_falha() {

    try {
        telefone->set_telefone(INVALIDO);
        ESTADO = FALHA;
    }
    catch(exception& e) {
        return;
    }
}

int TTelefone::run() {

    setup();
    test_sucesso();
    test_falha();
    teardown();

    return ESTADO;
}

void TEndereco::test_sucesso() {

    try {
        endereco->set_endereco(VALIDO);
        if(endereco->get_endereco() != VALIDO) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

void TEndereco::test_falha() {

    try {
        endereco->set_endereco(INVALIDO);
        ESTADO = FALHA;
    }
    catch(exception& e) {
        return;
    }
}

int TEndereco::run() {

    setup();
    test_sucesso();
    test_falha();
    teardown();

    return ESTADO;
}

void TData::test_sucesso() {

    try {
        data->set_data(VALIDO);
        if(data->get_data() != VALIDO) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

void TData::test_falha() {

    try {
        data->set_data(INVALIDO);
        ESTADO = FALHA;
    }
    catch(exception& e) {
        return;
    }
}

int TData::run() {

    setup();
    test_sucesso();
    test_falha();
    teardown();

    return ESTADO;
}

void TEmail::test_sucesso() {

    try {
        email->set_email(VALIDO);
        if(email->get_email() != VALIDO) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

void TEmail::test_falha() {

    try {
        email->set_email(INVALIDO);
        ESTADO = FALHA;
    }
    catch(exception& e) {
        return;
    }
}

int TEmail::run() {

    setup();
    test_sucesso();
    test_falha();
    teardown();

    return ESTADO;
}

void TSenha::test_sucesso() {

    try {
        senha->set_senha(VALIDO);
        if(senha->get_senha() != VALIDO) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

void TSenha::test_falha() {

    try {
        senha->set_senha(INVALIDO);
        ESTADO = FALHA;
    }
    catch(exception& e) {
        return;
    }
}

int TSenha::run() {

    setup();
    test_sucesso();
    test_falha();
    teardown();

    return ESTADO;
}

void TTexto::test_sucesso() {

    try {
        texto->set_texto(VALIDO);
        if(texto->get_texto() != VALIDO) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

void TTexto::test_falha() {

    try {
        texto->set_texto(INVALIDO);
        ESTADO = FALHA;
    }
    catch(exception& e) {
        return;
    }
}

int TTexto::run() {

    setup();
    test_sucesso();
    test_falha();
    teardown();

    return ESTADO;
}

void TIdioma::test_sucesso() {

    try {
        idioma->set_idioma(VALIDO);
        if(idioma->get_idioma() != VALIDO) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

void TIdioma::test_falha() {

    try {
        idioma->set_idioma(INVALIDO);
        ESTADO = FALHA;
    }
    catch(exception& e) {
        return;
    }
}

int TIdioma::run() {

    setup();
    test_sucesso();
    test_falha();
    teardown();

    return ESTADO;
}

void TClasse::test_sucesso() {

    try {
        classe->set_classe(VALIDO);
        if(classe->get_classe() != VALIDO) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

void TClasse::test_falha() {

    try {
        classe->set_classe(INVALIDO);
        ESTADO = FALHA;
    }
    catch(exception& e) {
        return;
    }
}

int TClasse::run() {

    setup();
    test_sucesso();
    test_falha();
    teardown();

    return ESTADO;
}

void TDominios::test() {

    cout << "\n\tDOMINIOS:\n\n";

    switch(nome->run()) {
        case TNome::SUCESSO: cout << "NOME:          SUCESSO";
                             break;
        case TNome::FALHA:   cout << "NOME:          FALHA";
                             break;
    }
    cout << endl;
    switch(sobrenome->run()) {
        case TSobrenome::SUCESSO: cout << "SOBRENOME:     SUCESSO";
                                  break;
        case TSobrenome::FALHA:   cout << "SOBRENOME:     FALHA";
                                  break;
    }
    cout << endl;
    switch(telefone->run()) {
        case TTelefone::SUCESSO: cout << "TELEFONE:      SUCESSO";
                                 break;
        case TTelefone::FALHA:   cout << "TELEFONE:      FALHA";
                                 break;
    }
    cout << endl;
    switch(endereco->run()) {
        case TEndereco::SUCESSO: cout << "ENDERECO:      SUCESSO";
                                 break;
        case TEndereco::FALHA:   cout << "ENDERECO:      FALHA";
                                 break;
    }
    cout << endl;
    switch(data->run()) {
        case TData::SUCESSO: cout << "DATA:          SUCESSO";
                             break;
        case TData::FALHA:   cout << "DATA:          FALHA";
                             break;
    }
    cout << endl;
    switch(email->run()) {
        case TEmail::SUCESSO: cout << "EMAIL:         SUCESSO";
                              break;
        case TEmail::FALHA:   cout << "EMAIL:         FALHA";
                              break;
    }
    cout << endl;
    switch(senha->run()) {
        case TSenha::SUCESSO: cout << "SENHA:         SUCESSO";
                              break;
        case TSenha::FALHA:   cout << "SENHA:          FALHA";
                              break;
    }
    cout << endl;
    switch(texto->run()) {
        case TTexto::SUCESSO: cout << "TEXTO:         SUCESSO";
                              break;
        case TTexto::FALHA:   cout << "TEXTO:         FALHA";
                              break;
    }
    cout << endl;
    switch(idioma->run()) {
        case TIdioma::SUCESSO: cout << "IDIOMA:        SUCESSO";
                               break;
        case TIdioma::FALHA:   cout << "IDIOMA:        FALHA";
                               break;
    }
    cout << endl;
    switch(classe->run()) {
        case TClasse::SUCESSO: cout << "CLASSE:        SUCESSO";
                               break;
        case TClasse::FALHA:   cout << "CLASSE:        FALHA";
                               break;
    }
    cout << endl;
}

void TDominios::run() {

    setup();
    test();
    teardown();
}
