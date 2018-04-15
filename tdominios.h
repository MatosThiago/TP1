#ifndef TDOMINIOS_H
#define TDOMINIOS_H

/**
 * @brief Contém todas as classes Teste de Domínios
 * 
 * Este arquivo contém todas as classes responsáveis por testar as classes Domínio.
 * 
 * @file tdominios.h
 * @author Thiago Santos Matos
 * @date 14 de abril de 2018
 */

#include "dominios.h"

using namespace std;

/**
 * @brief Classe responsável por testar o funcionamento da classe Nome
 * 
 * Realiza um teste com nome válido e um teste com nome inválido
 * verificando lançamento de exceções.
 * 
 */
class TNome {

    private:

        Nome* nome;

        int ESTADO;
        const string VALIDO   = "Thiago";
        const string INVALIDO = "thiago";


        void setup() {
            nome = new Nome();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete nome;
        };
        void test_sucesso();
        void test_falha();

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        int run();

};

/**
 * @brief Classe responsável por testar o funcionamento da classe Sobrenome
 * 
 * Realiza um teste com sobrenome válido e um teste com sobrenome inválido
 * verificando lançamento de exceções.
 * 
 */
class TSobrenome {

    private:

        Sobrenome* sobrenome;

        int ESTADO;
        const string VALIDO   = "Matos";
        const string INVALIDO = "matos";


        void setup() {
            sobrenome = new Sobrenome();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete sobrenome;
        };
        void test_sucesso();
        void test_falha();

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        int run();

};

/**
 * @brief Classe responsável por testar o funcionamento da classe Telefone
 * 
 * Realiza um teste com telefone válido e um teste com telefone inválido
 * verificando lançamento de exceções.
 * 
 */
class TTelefone {

    private:

        Telefone* telefone;

        int ESTADO;
        const string VALIDO   = "61 99803-7458";
        const string INVALIDO = "61998037458";


        void setup() {
            telefone = new Telefone();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete telefone;
        };
        void test_sucesso();
        void test_falha();

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        int run();

};

/**
 * @brief Classe responsável por testar o funcionamento da classe Endereco
 * 
 * Realiza um teste com endereço válido e um teste com endereço inválido
 * verificando lançamento de exceções.
 * 
 */
class TEndereco {

    private:

        Endereco* endereco;

        int ESTADO;
        const string VALIDO   = "Rua Augusta";
        const string INVALIDO = "Rua 7";


        void setup() {
            endereco = new Endereco();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete endereco;
        };
        void test_sucesso();
        void test_falha();

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        int run();

};

/**
 * @brief Classe responsável por testar o funcionamento da classe Data
 * 
 * Realiza um teste com data válida e um teste com data inválida
 * verificando lançamento de exceções.
 * 
 */
class TData {

    private:

        Data* data;

        int ESTADO;
        const string VALIDO   = "13/06/1999";
        const string INVALIDO = "01-06-1999";


        void setup() {
            data = new Data();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete data;
        };
        void test_sucesso();
        void test_falha();

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        int run();

};

/**
 * @brief Classe responsável por testar o funcionamento da classe Email
 * 
 * Realiza um teste com email válido e um teste com email inválido
 * verificando lançamento de exceções.
 * 
 */
class TEmail {

    private:

        Email* email;

        int ESTADO;
        const string VALIDO   = "thiago.matos882@gmail.com";
        const string INVALIDO = "thiago.matos882@12345";


        void setup() {
            email = new Email();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete email;
        };
        void test_sucesso();
        void test_falha();

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        int run();

};

/**
 * @brief Classe responsável por testar o funcionamento da classe Senha
 * 
 * Realiza um teste com senha válida e um teste com senha inválida
 * verificando lançamento de exceções.
 * 
 */
class TSenha {

    private:

        Senha* senha;

        int ESTADO;
        const string VALIDO   = "Pass1234";
        const string INVALIDO = "password";


        void setup() {
            senha = new Senha();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete senha;
        };
        void test_sucesso();
        void test_falha();

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        int run();

};

/**
 * @brief Classe responsável por testar o funcionamento da classe Texto
 * 
 * Realiza um teste com texto válido e um teste com texto inválido
 * verificando lançamento de exceções.
 * 
 */
class TTexto {

    private:

        Texto* texto;

        int ESTADO;
        const string VALIDO   = "Texto de Definicao.";
        const string INVALIDO = "Texto de Definicao com mais de 30 caracteres.";


        void setup() {
            texto = new Texto();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete texto;
        };
        void test_sucesso();
        void test_falha();

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        int run();

};

/**
 * @brief Classe responsável por testar o funcionamento da classe Idioma
 * 
 * Realiza um teste com idioma válido e um teste com idioma inválido
 * verificando lançamento de exceções.
 * 
 */
class TIdioma {

    private:

        Idioma* idioma;

        int ESTADO;
        const string VALIDO   = "ENG";
        const string INVALIDO = "AFR";


        void setup() {
            idioma = new Idioma();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete idioma;
        };
        void test_sucesso();
        void test_falha();

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        int run();

};

/**
 * @brief Classe responsável por testar o funcionamento da classe Classe
 * 
 * Realiza um teste com classe válida e um teste com classe inválida
 * verificando lançamento de exceções.
 * 
 */
class TClasse {

    private:

        Classe* classe;

        int ESTADO;
        const string VALIDO   = "PT";
        const string INVALIDO = "NT";


        void setup() {
            classe = new Classe();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete classe;
        };
        void test_sucesso();
        void test_falha();

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        int run();

};

/**
 * @brief Classe responsável por retornar o resultado de todos os testes para as classes Domínio
 * 
 */
class TDominios {

    private:

        TNome*      nome;
        TSobrenome* sobrenome;
        TTelefone*  telefone;
        TEndereco*  endereco;
        TData*      data;
        TEmail*     email;
        TSenha*     senha;
        TTexto*     texto;
        TIdioma*    idioma;
        TClasse*    classe;

        void setup() {
            nome = new TNome();
            sobrenome = new TSobrenome();
            telefone = new TTelefone();
            endereco = new TEndereco();
            data = new TData();
            email = new TEmail();
            senha = new TSenha();
            texto = new TTexto();
            idioma = new TIdioma();
            classe = new TClasse();
        };
        void teardown() {
            delete nome;
            delete sobrenome;
            delete telefone;
            delete endereco;
            delete data;
            delete email;
            delete senha;
            delete texto;
            delete idioma;
            delete classe;
        };
        void test();

    public:

        void run();

};

#endif
