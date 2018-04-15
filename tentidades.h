#ifndef TENTIDADES_H
#define TENTIDADES_H

/**
 * @brief Contém todas as classes Teste de Entidades
 * 
 * Este arquivo contém todas as classes responsáveis por testar as classes Entidade.
 * 
 * @file tentidades.h
 * @author Thiago Santos Matos
 * @date 14 de abril de 2018
 */

#include "dominios.h"
#include "entidades.h"

using namespace std;

/**
 * @brief Responsável por armazenar atributos
 * 
 * Armazena atributos que serão utilizados nos testes para as classes Entidade.
 * 
 */
class TUsuario {

    protected:

        int ESTADO;
        const string NOME_VALIDO      = "Thiago";
        const string SOBRENOME_VALIDO = "Matos";
        const string EMAIL_VALIDO     = "thiago.matos882@gmail.com";
        const string SENHA_VALIDA     = "Pass1234";
        const string SENHA_INVALIDA   = "Othiago1";
        const string DATA_VALIDA      = "13/06/1999";
        const string TELEFONE_VALIDO  = "61 99803-7458";
        const string ENDERECO_VALIDO  = "Rua Augusta";

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

};

/**
 * @brief Responsável por testar o funcionamento da classe Leitor
 * 
 * Realiza um teste com atributos válidos e um teste com atributos inválidos
 * verificando lançamento de exceções.
 * 
 */
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

/**
 * @brief Responsável por testar o funcionamento da classe Desenvolvedor
 * 
 * Realiza um teste com atributos válidos e um teste com atributos inválidos
 * verificando lançamento de exceções.
 * 
 */
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

/**
 * @brief Responsável por testar o funcionamento da classe Administrador
 * 
 * Realiza um teste com atributos válidos e um teste com atributos inválidos
 * verificando lançamento de exceções.
 * 
 */
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

/**
 * @brief Responsável por testar o funcionamento da classe Vocabulario
 * 
 * Realiza um teste com atributos válidos verificando armazenamento dos atributos.
 * 
 */
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

/**
 * @brief Responsável por testar o funcionamento da classe Termo
 * 
 * Realiza um teste com atributos válidos verificando armazenamento dos atributos.
 * 
 */
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

/**
 * @brief Responsável por testar o funcionamento da classe Definicao
 * 
 * Realiza um teste com atributos válidos verificando armazenamento dos atributos.
 * 
 */
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

/**
 * @brief Responsável por retornar o resultado de todos os testes para as classes Entidade
 * 
 */
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
