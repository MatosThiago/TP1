#ifndef VOC_TENTIDADES_H_
#define VOC_TENTIDADES_H_

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

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

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
};

/**
 * @brief Responsável por testar o funcionamento da classe Leitor
 */
class TLeitor : public TUsuario {

    public:

        /**
         * @brief Realiza um teste com atributos válidos e um teste com atributos inválidos verificando lançamento de exceções
         * 
         * @return 1 em caso de sucesso
         * @return 0 em caso de falha
         */
        int run();

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
};

/**
 * @brief Responsável por testar o funcionamento da classe Desenvolvedor
 */
class TDesenvolvedor : public TUsuario {

    public:

        /**
         * @brief Realiza um teste com atributos válidos e um teste com atributos inválidos verificando lançamento de exceções
         * 
         * @return 1 em caso de sucesso
         * @return 0 em caso de falha
         */
        int run();

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
};

/**
 * @brief Responsável por testar o funcionamento da classe Administrador
 */
class TAdministrador : public TUsuario {

    public:

        /**
         * @brief Realiza um teste com atributos válidos e um teste com atributos inválidos verificando lançamento de exceções
         * 
         * @return 1 em caso de sucesso
         * @return 0 em caso de falha
         */
        int run();

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
};

/**
 * @brief Responsável por testar o funcionamento da classe Vocabulario
 */
class TVocabulario {

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        /**
         * @brief Realiza um teste com atributos válidos verificando armazenamento dos atributos
         * 
         * @return 1 em caso de sucesso
         * @return 0 em caso de falha
         */
        int run();

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
};

/**
 * @brief Responsável por testar o funcionamento da classe Termo
 */
class TTermo {

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        /**
         * @brief Realiza um teste com atributos válidos verificando armazenamento dos atributos
         * 
         * @return 1 em caso de sucesso
         * @return 0 em caso de falha
         */
        int run();

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
};

/**
 * @brief Responsável por testar o funcionamento da classe Definicao
 */
class TDefinicao {

    public:

        const static int SUCESSO = 1;
        const static int FALHA   = 0;

        /**
         * @brief Realiza um teste com atributos válidos verificando armazenamento dos atributos
         * 
         * @return 1 em caso de sucesso
         * @return 0 em caso de falha
         */
        int run();

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
};

/**
 * @brief Responsável por retornar o resultado de todos os testes para as classes Entidade
 */
class TEntidades {

    public:

        /**
         * @brief Exibe os resultados de todos os testes das classes Entidade
         */
        void run();

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
};

#endif // VOC_TENTIDADES_H_
