#ifndef TDOMINIOS_H
#define TDOMINIOS_H

#include "dominios.h"

using namespace std;

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

class TEmail {
    
    private:

        Email* email;

        int ESTADO;
        const string VALIDO   = "thiago.matos882@gmail";
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