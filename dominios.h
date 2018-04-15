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
 * @brief Responsável por armazenar nome
 */
class Nome {

    private:

        string nome;

        const static int LIMITE = 20;
        
        void   valid_nome(string);

    public:

        /**
         * @brief Constrói um novo objeto da classe Nome
         */
        Nome() {};
        /**
         * @brief Constrói um novo objeto da classe Nome armazenando nome se válido
         * 
         * @param nome
         */
        Nome(string nome) {
            set_nome(nome);
        };

        /**
         * @brief Armazena se o nome é válido
         * 
         * Nome contém de uma a vinte letras (A – Z a – z), 
         * sendo a primeira maiúscula.
         */
        void   set_nome(string);
        /**
         * @brief Retorna o nome
         * 
         * @return string
         */
        string get_nome() {
            return nome;
        };
};

/**
 * @brief Responsável por armazenar sobrenome
 */
class Sobrenome {

    private:

        string sobrenome;

        const static int LIMITE = 20;

        void   valid_sobrenome(string);

    public:

        /**
         * @brief Constrói um novo objeto da classe Sobrenome
         */
        Sobrenome() {};
        /**
         * @brief Constrói um novo objeto da classe Sobrenome armazenando sobrenome se válido
         * 
         * @param sobrenome 
         */
        Sobrenome(string sobrenome) {
            set_sobrenome(sobrenome);
        };

        /**
         * @brief Armazena se o sobrenome é válido
         * 
         * Sobrenome contém de uma a vinte letras (A – Z a – z), 
         * sendo a primeira maiúscula.
         */
        void   set_sobrenome(string);
        /**
         * @brief Retorna o sobrenome
         * 
         * @return string
         */
        string get_sobrenome() {
            return sobrenome;
        };
};

/**
 * @brief Responsável por armazenar telefone
 */
class Telefone {

    private:

        string telefone;

        const static int TAMANHO = 13;

        void   valid_telefone(string);

    public:

        /**
         * @brief Constrói um novo objeto da classe Telefone
         */
        Telefone() {};
        /**
         * @brief Constrói um novo objeto da classe Telefone armazenando telefone se válido
         * 
         * @param telefone 
         */
        Telefone(string telefone) {
            set_telefone(telefone);
        };

        
        /**
         * @brief Armazena se o telefone é válido
         * 
         * Telefone deve estar no formato AA NNNNN–NNNN, onde 
         * A e N são dígitos (0 – 9).
         */
        void   set_telefone(string);
        /**
         * @brief Retorna o telefone
         * 
         * @return string
         */
        string get_telefone() {
            return telefone;
        };
};

/**
 * @brief Responsável por armazenar endereço
 */
class Endereco {

    private:

        string endereco;

        const static int LIMITE = 20;

        void   valid_endereco(string);

    public:

        /**
         * @brief Constrói um novo objeto da classe Endereco
         */
        Endereco() {};
        /**
         * @brief Constrói um novo objeto da classe Endereco armazenando endereco se válido
         * 
         * @param endereco 
         */
        Endereco(string endereco) {
            set_endereco(endereco);
        };

        /**
         * @brief Armazena se o endereco é válido
         * 
         * Endereco contém de uma a vinte letras (A – Z a – z). 
         * Pode conter espaços em branco. O primeiro e o último caracter 
         * não podem ser espaços em branco. 
         * Não podem haver espaços em branco em sequência (dois ou mais).
         */
        void   set_endereco(string);
        /**
         * @brief Retorna o endereco
         * 
         * @return string
         */
        string get_endereco() {
            return endereco;
        };
};

/**
 * @brief Responsável por armazenar data
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

        /**
         * @brief Constrói um novo objeto da classe Data
         */
        Data() {};
        /**
         * @brief Constrói um novo objeto da classe Data armazenando data se válido
         * 
         * @param data 
         */
        Data(string data) {
            set_data(data);
        };

        /**
         * @brief Armazena se a data é válida
         * 
         * Data deve estar no formato DD/MM/AAAA onde DD consiste de 
         * número de 01 e 31, MM consiste de número de 01 e 12, 
         * AAAA consiste de número  de 1900 a 2099, considerando anos que sejam bissextos.
         */
        void   set_data(string);
        /**
         * @brief Retorna a data
         * 
         * @return string
         */
        string get_data() {
            return data;
        };
};

/**
 * @brief Responsável por armazenar email
 */
class Email {

    private:

        string email;

        void   valid_email(string);

    public:

        /**
         * @brief Constrói um novo objeto da classe Email
         */
        Email() {};
        /**
         * @brief Constrói um novo objeto da classe Email armazenando email se válido
         * 
         * @param email 
         */
        Email(string email) {
            set_email(email);
        };

        /**
         * @brief Armazena se o email é válido
         * 
         * Email contém parte local e domínio separados por @. 
         * A parte local pode conter letras (A – Z a – z), dígitos (0 – 9) 
         * e caracteres (! # $ % & ' * + - / = ? ^ _ ` { | } ~ ;). 
         * Pode  conter ponto (.) desde que não seja o primeiro ou o último caracter. 
         * O domínio pode conter letras (A – Z a – z); dígitos (0 – 9), 
         * desde que o domínio não seja só numérico; e caracteres (– .), 
         * desde que não sejam o primeiro ou o último caracter.
         */
        void   set_email(string);
        /**
         * @brief Retorna o email
         * 
         * @return string
         */
        string get_email() {
            return email;
        };
};

/**
 * @brief Responsável por armazenar senha
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

        /**
         * @brief Constrói um novo objeto da classe Senha
         */
        Senha() {};
        /**
         * @brief Constrói um novo objeto da classe Senha armazenando senha se válida
         * 
         * @param senha 
         */
        Senha(string senha) {
            set_senha(senha);
        };

        /**
         * @brief Armazena se a senha é válida
         * 
         * Senha contém oito caracteres, que podem ser letras (A – Z a – z) 
         * ou dígitos (0 a 9). Cada senha precisa conter, pelo menos, 
         * uma letra maiúscula, uma letra minúscula e um dígito. 
         * Não pode conter o nome do seu usuário.
         */
        void   set_senha(string);
        /**
         * @brief Retorna a senha
         * 
         * @return string
         */
        string get_senha() {
            return senha;
        };
};

/**
 * @brief Responsável por armazenar texto de definição
 */
class Texto {

    private:
    
        string texto;

        const static int LIMITEMIN = 1;
        const static int LIMITEMAX = 30;

        void   valid_texto(string);

    public:

        /**
         * @brief Constrói um novo objeto da classe Texto
         */
        Texto() {};
        /**
         * @brief Constrói um novo objeto da classe Texto armazenando texto se válido
         * 
         * @param texto 
         */
        Texto(string texto) {
            set_texto(texto);
        };

        /**
         * @brief Armazena se o texto é válido
         * 
         * Texto contém de um a trinta caracteres quaisquer.
         */
        void   set_texto(string);
        /**
         * @brief Retorna o texto
         * 
         * @return string
         */
        string get_texto() {
            return texto;
        };
};

/**
 * @brief Responsável por armazenar idioma
 * 
 * Os seguintes idiomas estão disponíveis:  ENG (inglês), FRA (francês), 
 * GER (alemão), ITA (italiano), POR (português) e SPA (espanhol).
 */
class Idioma {

    private:

        string idioma;

        const static int TAMANHO = 3;

        void   valid_idioma(string);

    public:

        /**
         * @brief Constrói um novo objeto da classe Idioma
         */
        Idioma() {};
        /**
         * @brief Constrói um novo objeto da classe Idioma armazenando idioma se válido
         * 
         * @param idioma 
         */
        Idioma(string idioma) {
            set_idioma(idioma);
        };

        /**
         * @brief Armazena se o idioma é válido
         * 
         * Idioma deve ser ENG (inglês), FRA (francês), 
         * GER (alemão), ITA (italiano), POR (português) ou SPA (espanhol).
         */
        void   set_idioma(string);
        /**
         * @brief Retorna o idioma
         * 
         * @return string 
         */
        string get_idioma() {
            return idioma;
        };
};

/**
 * @brief Responsável por armazenar classe de termo
 * 
 * Quando só um termo está associado a uma definição, 
 * esse é o termo preferido (preferred term). Quando mais de um termo está 
 * associado a uma definição, um é o preferido e os outros são 
 * não preferidos (non preferred term).
 */
class Classe {

    private:

        string classe;

        const static int TAMANHO = 2;

        void   valid_classe(string);

    public:

        /**
         * @brief Constrói um novo objeto da classe Classe
         */
        Classe() {};
        /**
         * @brief Constrói um novo objeto da classe Classe armazenando classe se válido
         * 
         * @param classe 
         */
        Classe(string classe) {
            set_classe(classe);
        };

        /**
         * @brief Armazena se a classe é válida
         * 
         * Classe deve ser PT (preferred term) ou NP (non preferred term).
         */
        void   set_classe(string);
        /**
         * @brief Retorna a classe
         * 
         * @return string
         */
        string get_classe() {
            return classe;
        };
};

#endif
