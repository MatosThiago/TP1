#include "tentidades.h"
#include <stdexcept>

using namespace std;

void TLeitor::test_sucesso() {

    try {
        Nome NOME(NOME_VALIDO);
        Sobrenome SOBRENOME(SOBRENOME_VALIDO);
        Email EMAIL(EMAIL_VALIDO);
        Senha SENHA(SENHA_VALIDA);
        leitor->set_nome(NOME);
        leitor->set_sobrenome(SOBRENOME);
        leitor->set_email(EMAIL);
        leitor->set_senha(SENHA);
        if(leitor->get_nome().get_nome() != NOME_VALIDO || leitor->get_sobrenome().get_sobrenome() != SOBRENOME_VALIDO ||
           leitor->get_email().get_email() != EMAIL_VALIDO || leitor->get_senha().get_senha() != SENHA_VALIDA) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

void TLeitor::test_falha() {

    try {
        Nome NOME(NOME_VALIDO);
        Sobrenome SOBRENOME(SOBRENOME_VALIDO);
        Email EMAIL(EMAIL_VALIDO);
        Senha SENHA(SENHA_INVALIDA);
        leitor->set_nome(NOME);
        leitor->set_sobrenome(SOBRENOME);
        leitor->set_email(EMAIL);
        leitor->set_senha(SENHA);
        ESTADO = FALHA;
    }
    catch(exception& e) {
        return;
    }
}

int TLeitor::run() {

    setup();
    test_sucesso();
    test_falha();
    teardown();

    return ESTADO;
}

void TDesenvolvedor::test_sucesso() {

    try {
        Nome NOME(NOME_VALIDO);
        Sobrenome SOBRENOME(SOBRENOME_VALIDO);
        Email EMAIL(EMAIL_VALIDO);
        Senha SENHA(SENHA_VALIDA);
        Data DATA(DATA_VALIDA);
        desenvolvedor->set_nome(NOME);
        desenvolvedor->set_sobrenome(SOBRENOME);
        desenvolvedor->set_email(EMAIL);
        desenvolvedor->set_senha(SENHA);
        desenvolvedor->set_data(DATA);
        if(desenvolvedor->get_nome().get_nome() != NOME_VALIDO || desenvolvedor->get_sobrenome().get_sobrenome() != SOBRENOME_VALIDO ||
           desenvolvedor->get_email().get_email() != EMAIL_VALIDO || desenvolvedor->get_senha().get_senha() != SENHA_VALIDA ||
           desenvolvedor->get_data().get_data() != DATA_VALIDA) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

void TDesenvolvedor::test_falha() {

    try {
        Nome NOME(NOME_VALIDO);
        Sobrenome SOBRENOME(SOBRENOME_VALIDO);
        Email EMAIL(EMAIL_VALIDO);
        Senha SENHA(SENHA_INVALIDA);
        Data DATA(DATA_VALIDA);
        desenvolvedor->set_nome(NOME);
        desenvolvedor->set_sobrenome(SOBRENOME);
        desenvolvedor->set_email(EMAIL);
        desenvolvedor->set_senha(SENHA);
        desenvolvedor->set_data(DATA);
        ESTADO = FALHA;
    }
    catch(exception& e) {
        return;
    }
}

int TDesenvolvedor::run() {

    setup();
    test_sucesso();
    test_falha();
    teardown();

    return ESTADO;
}

void TAdministrador::test_sucesso() {

    try {
        Nome NOME(NOME_VALIDO);
        Sobrenome SOBRENOME(SOBRENOME_VALIDO);
        Email EMAIL(EMAIL_VALIDO);
        Senha SENHA(SENHA_VALIDA);
        Data DATA(DATA_VALIDA);
        Telefone TELEFONE(TELEFONE_VALIDO);
        Endereco ENDERECO(ENDERECO_VALIDO);
        administrador->set_nome(NOME);
        administrador->set_sobrenome(SOBRENOME);
        administrador->set_email(EMAIL);
        administrador->set_senha(SENHA);
        administrador->set_data(DATA);
        administrador->set_telefone(TELEFONE);
        administrador->set_endereco(ENDERECO);
        if(administrador->get_nome().get_nome() != NOME_VALIDO || administrador->get_sobrenome().get_sobrenome() != SOBRENOME_VALIDO ||
           administrador->get_email().get_email() != EMAIL_VALIDO || administrador->get_senha().get_senha() != SENHA_VALIDA ||
           administrador->get_data().get_data() != DATA_VALIDA || administrador->get_telefone().get_telefone() != TELEFONE_VALIDO ||
           administrador->get_endereco().get_endereco() != ENDERECO_VALIDO) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

void TAdministrador::test_falha() {

    try {
        Nome NOME(NOME_VALIDO);
        Sobrenome SOBRENOME(SOBRENOME_VALIDO);
        Email EMAIL(EMAIL_VALIDO);
        Senha SENHA(SENHA_INVALIDA);
        Data DATA(DATA_VALIDA);
        Telefone TELEFONE(TELEFONE_VALIDO);
        Endereco ENDERECO(ENDERECO_VALIDO);
        administrador->set_nome(NOME);
        administrador->set_sobrenome(SOBRENOME);
        administrador->set_email(EMAIL);
        administrador->set_senha(SENHA);
        administrador->set_data(DATA);
        administrador->set_telefone(TELEFONE);
        administrador->set_endereco(ENDERECO);
        ESTADO = FALHA;
    }
    catch(exception& e) {
        return;
    }
}

int TAdministrador::run() {

    setup();
    test_sucesso();
    test_falha();
    teardown();

    return ESTADO;
}

void TVocabulario::test_sucesso() {

    try {
        Nome NOME(NOME_VALIDO);
        Idioma IDIOMA(IDIOMA_VALIDO);
        Data DATA(DATA_VALIDA);
        vocabulario->set_nome(NOME);
        vocabulario->set_idioma(IDIOMA);
        vocabulario->set_data(DATA);
        if(vocabulario->get_nome().get_nome() != NOME_VALIDO || vocabulario->get_idioma().get_idioma() != IDIOMA_VALIDO ||
           vocabulario->get_data().get_data() != DATA_VALIDA) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

int TVocabulario::run() {

    setup();
    test_sucesso();
    teardown();

    return ESTADO;
}

void TTermo::test_sucesso() {

    try {
        Nome NOME(NOME_VALIDO);
        Classe CLASSE(CLASSE_VALIDA);
        Data DATA(DATA_VALIDA);
        termo->set_nome(NOME);
        termo->set_classe(CLASSE);
        termo->set_data(DATA);
        if(termo->get_nome().get_nome() != NOME_VALIDO || termo->get_classe().get_classe() != CLASSE_VALIDA ||
           termo->get_data().get_data() != DATA_VALIDA) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

int TTermo::run() {

    setup();
    test_sucesso();
    teardown();

    return ESTADO;
}

void TDefinicao::test_sucesso() {

    try {
        Texto TEXTO(TEXTO_VALIDO);
        Data DATA(DATA_VALIDA);
        definicao->set_texto(TEXTO);
        definicao->set_data(DATA);
        if(definicao->get_texto().get_texto() != TEXTO_VALIDO || definicao->get_data().get_data() != DATA_VALIDA) {
            ESTADO = FALHA;
        }
    }
    catch(exception& e) {
        cout << e.what();
        ESTADO = FALHA;
    }
}

int TDefinicao::run() {

    setup();
    test_sucesso();
    teardown();

    return ESTADO;
}

void TEntidades::test() {

    cout << "\n\tENTIDADES:\n\n";

    switch(leitor->run()) {
        case TUsuario::SUCESSO: cout << "LEITOR:        SUCESSO";
                                break;
        case TUsuario::FALHA:   cout << "LEITOR:        FALHA";
                                break;
    }
    cout << endl;
    switch(desenvolvedor->run()) {
        case TUsuario::SUCESSO: cout << "DESENVOLVEDOR: SUCESSO";
                                break;
        case TUsuario::FALHA:   cout << "DESENVOLVEDOR: FALHA";
                                break;
    }
    cout << endl;
    switch(administrador->run()) {
        case TUsuario::SUCESSO: cout << "ADMINISTRADOR: SUCESSO";
                                break;
        case TUsuario::FALHA:   cout << "ADMINISTRADOR: FALHA";
                                break;
    }
    cout << endl;
    switch(vocabulario->run()) {
        case TVocabulario::SUCESSO: cout << "VOCABULARIO:   SUCESSO";
                                    break;
        case TVocabulario::FALHA:   cout << "VOCABULARIO:   FALHA";
                                    break;
    }
    cout << endl;
    switch(termo->run()) {
        case TTermo::SUCESSO: cout << "TERMO:         SUCESSO";
                              break;
        case TTermo::FALHA:   cout << "TERMO:         FALHA";
                              break;
    }
    cout << endl;
    switch(definicao->run()) {
        case TDefinicao::SUCESSO: cout << "DEFINICAO:     SUCESSO";
                                  break;
        case TDefinicao::FALHA:   cout << "DEFINICAO:     FALHA";
                                  break;
    }
    cout << endl;
}

void TEntidades::run() {

    setup();
    test();
    teardown();
}
