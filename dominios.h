#ifndef DOMINIOS_H
#define DOMINIOS_H

/**
 * @brief Contém todas as classes Domínio
 * 
 * Este arquivo contém todas as classes domínio utilizadas.
 * 
 * @file dominios.h
 * @author Thiago Santos Matos
 * @date 14 de abril de 2018
 */

#include <iostream>

using namespace std;

/**
 * @brief Classe responsável por armazenar nome
 * 
 */
class Nome {

    private:

        string nome;

        const static int LIMITE = 20;

        void   valid_nome(string);

    public:

        Nome() {};
        Nome(string nome) {
            set_nome(nome);
        };

        void   set_nome(string);
        string get_nome() {
            return nome;
        };
};

/**
 * @brief Classe responsável por armazenar sobrenome
 * 
 */
class Sobrenome {

    private:

        string sobrenome;

        const static int LIMITE = 20;

        void   valid_sobrenome(string);

    public:

        Sobrenome() {};
        Sobrenome(string sobrenome) {
            set_sobrenome(sobrenome);
        };

        void   set_sobrenome(string);
        string get_sobrenome() {
            return sobrenome;
        };
};

/**
 * @brief Classe responsável por armazenar telefone
 * 
 */
class Telefone {

    private:

        string telefone;

        const static int TAMANHO = 13;

        void   valid_telefone(string);

    public:

        Telefone() {};
        Telefone(string telefone) {
            set_telefone(telefone);
        };

        void   set_telefone(string);
        string get_telefone() {
            return telefone;
        };
};

/**
 * @brief Classe responsável por armazenar endereço
 * 
 */
class Endereco {

    private:

        string endereco;

        const static int LIMITE = 20;

        void   valid_endereco(string);

    public:

        Endereco() {};
        Endereco(string endereco) {
            set_endereco(endereco);
        };

        void   set_endereco(string);
        string get_endereco() {
            return endereco;
        };
};

/**
 * @brief Classe responsável por armazenar data
 * 
 */
class Data {

    private:

        string data;
        int dia;
        int mes;
        int ano;

        const static int TAMANHO = 10;
        const static int DIAMIN = 1,    DIAMAX = 31, DIAMAXF = 28;
        const static int MESMIN = 1,    MESMAX = 12;
        const static int ANOMIN = 1900, ANOMAX = 2099;
        bool BISSEXTO = false;
        enum {
            null,
            JANEIRO,
            FERVEREIRO,
            MARCO,
            ABRIL,
            MAIO,
            JUNHO,
            JULHO,
            AGOSTO,
            SETEMBRO,
            OUTUBRO,
            NOVEMBRO,
            DEZEMBRO
        };

        void   valid_data(string);

    public:

        Data() {};
        Data(string data) {
            set_data(data);
        };

        void   set_data(string);
        string get_data() {
            return data;
        };
};

/**
 * @brief Classe responsável por armazenar email
 * 
 */
class Email {

    private:

        string email;

        void   valid_email(string);

    public:

        Email() {};
        Email(string email) {
            set_email(email);
        };

        void   set_email(string);
        string get_email() {
            return email;
        };
};

/**
 * @brief Classe responsável por armazenar senha
 * 
 */
class Senha {

    private:

        string senha;

        const static int TAMANHO = 8;
        const static int MAIUSCULOMIN = 1;
        const static int MINUSCULOMIN = 1;
        const static int NUMEROMIN = 1;

        void   valid_senha(string);

    public:

        Senha() {};
        Senha(string senha) {
            set_senha(senha);
        };

        void   set_senha(string);
        string get_senha() {
            return senha;
        };
};

/**
 * @brief Classe responsável por armazenar texto de definição
 * 
 */
class Texto {

    private:

        string texto;

        const static int LIMITEMIN = 1;
        const static int LIMITEMAX = 30;

        void   valid_texto(string);

    public:

        Texto() {};
        Texto(string texto) {
            set_texto(texto);
        };

        void   set_texto(string);
        string get_texto() {
            return texto;
        };
};

/**
 * @brief Classe responsável por armazenar idioma
 * 
 * Os seguintes idiomas estão disponíveis:  ENG (inglês), FRA (francês), 
 * GER (alemão), ITA (italiano), POR (português) e SPA (espanhol).
 * 
 */
class Idioma {

    private:

        string idioma;

        const static int TAMANHO = 3;

        void   valid_idioma(string);

    public:

        Idioma() {};
        Idioma(string idioma) {
            set_idioma(idioma);
        };

        void   set_idioma(string);
        string get_idioma() {
            return idioma;
        };
};

/**
 * @brief Classe responsável por armazenar classe de termo
 * 
 * Quando só um termo está associado a uma definição, 
 * esse é o termo preferido (preferred term). Quando mais de um termo está 
 * associado a uma definição, um é o preferido e os outros são 
 * não preferidos (non preferred term). 
 * 
 */
class Classe {

    private:

        string classe;

        const static int TAMANHO = 2;

        void   valid_classe(string);

    public:

        Classe() {};
        Classe(string classe) {
            set_classe(classe);
        };

        void   set_classe(string);
        string get_classe() {
            return classe;
        };
};

#endif
