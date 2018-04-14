#ifndef TENTIDADES_H
#define TENTIDADES_H

#include "dominios.h"
#include "entidades.h"

using namespace std;

class TUsuario {

    protected:

        int ESTADO;
        const string NOME_VALIDO      = "Thiago";
        const string SOBRENOME_VALIDO = "Matos";
        const string EMAIL_VALIDO     = "thiago.matos882@gmail";
        const string SENHA_VALIDA     = "Pass1234";
        const string SENHA_INVALIDA   = "Othiago1";
        const string DATA_VALIDA      = "13/06/1999";
        const string TELEFONE_VALIDO  = "61 99803-7458";
        const string ENDERECO_VALIDO  = "Rua Augusta";

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;
        
};

class TLeitor : public TUsuario {
    
    private:

        Leitor* leitor;

        void setup() {
            leitor = new Leitor();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete leitor;
        };
        void test_sucesso();
        void test_falha();

    public:

        int run();

};

class TDesenvolvedor : public TUsuario {
    
    private:

        Desenvolvedor* desenvolvedor;

        void setup() {
            desenvolvedor = new Desenvolvedor();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete desenvolvedor;
        };
        void test_sucesso();
        void test_falha();

    public:

        int run();

};

class TAdministrador : public TUsuario {
    
    private:

        Administrador* administrador;

        void setup() {
            administrador = new Administrador();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete administrador;
        };
        void test_sucesso();
        void test_falha();

    public:

        int run();

};

class TVocabulario {
    
    private:

        Vocabulario* vocabulario;

        int ESTADO;
        const string NOME_VALIDO   = "Vocabulario";
        const string IDIOMA_VALIDO = "POR";
        const string DATA_VALIDA   = "14/04/2018";

        void setup() {
            vocabulario = new Vocabulario();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete vocabulario;
        };
        void test_sucesso();

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        int run();

};

class TTermo {
    
    private:

        Termo* termo;

        int ESTADO;
        const string NOME_VALIDO   = "Termo";
        const string CLASSE_VALIDA = "PT";
        const string DATA_VALIDA   = "14/04/2018";

        void setup() {
            termo = new Termo();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete termo;
        };
        void test_sucesso();

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        int run();

};

class TDefinicao {
    
    private:

        Definicao* definicao;

        int ESTADO;
        const string TEXTO_VALIDO  = "Texto de Definicao.";
        const string DATA_VALIDA   = "14/04/2018";

        void setup() {
            definicao = new Definicao();
            ESTADO = SUCESSO;
        };
        void teardown() {
            delete definicao;
        };
        void test_sucesso();

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        int run();

};

class TEntidades {
    
    private:

        TLeitor*        leitor;
        TDesenvolvedor* desenvolvedor;
        TAdministrador* administrador;
        TVocabulario*   vocabulario;
        TTermo*         termo;
        TDefinicao*     definicao;

        void setup() {
            leitor = new TLeitor();
            desenvolvedor = new TDesenvolvedor();
            administrador = new TAdministrador();
            vocabulario = new TVocabulario();
            termo = new TTermo();
            definicao = new TDefinicao();
        };
        void teardown() {
            delete leitor;
            delete desenvolvedor;
            delete administrador;
            delete vocabulario;
            delete termo;
            delete definicao;
        };
        void test();

    public:

        void run();
    
};

#endif