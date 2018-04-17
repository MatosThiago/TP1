#ifndef VOC_ENTIDADES_H_
#define VOC_ENTIDADES_H_

/**
 * @brief Contém todas as classes Entidade
 * 
 * Este arquivo contém todas as classes entidade utilizadas.
 * 
 * @file entidades.h
 * @author Thiago Santos Matos
 * @date 14 de abril de 2018
 */

#include "dominios.h"

using namespace std;

/**
 * @brief Responsável por armazenar informações do leitor
 * 
 * Os seguintes serviços estão disponíveis ao leitor: 
 * apresentar dados do usuário, editar dados do usuário, 
 * excluir conta, listar nomes dos vocabulários controlados, 
 * apresentar dados de vocabulário controlado, consultar termo, 
 * consultar definição de termo.
 */
class Leitor {

    public:

        /**
         * @brief Constrói um novo objeto da classe Leitor
         */
        Leitor() {};
        /**
         * @brief Constrói um novo objeto da classe Leitor armazenando os atributos passados se válidos
         */
        Leitor(const Nome&, const Sobrenome&, const Email&, const Senha&);

        /**
         * @brief Armazena nome
         * 
         * @param nome 
         */
        void set_nome(const Nome& nome) {
            this->nome = nome;
        }
        /**
         * @brief Armazena sobrenome
         * 
         * @param sobrenome
         */
        void set_sobrenome(const Sobrenome& sobrenome) {
            this->sobrenome = sobrenome;
        }
        /**
         * @brief Armazena email
         * 
         * @param email 
         */
        void set_email(const Email& email) {
            this->email = email;
        }
        /**
         * @brief Armazena senha se válida
         * 
         * @param senha 
         */
        void set_senha(const Senha& senha) {
            valid_senha(senha);
            this->senha = senha;
        }
        /**
         * @brief Retorna nome
         * 
         * @return Nome 
         */
        Nome get_nome() {
            return nome;
        }
        /**
         * @brief Retorna sobrenome
         * 
         * @return Sobrenome 
         */
        Sobrenome get_sobrenome() {
            return sobrenome;
        }
        /**
         * @brief Retorna email
         * 
         * @return Email 
         */
        Email get_email() {
            return email;
        }
        /**
         * @brief Retorna senha
         * 
         * @return Senha 
         */
        Senha get_senha() {
            return senha;
        }
        /**
         * @brief Exibe as informações do Leitor
         */
        void show_leitor();

    protected:

        Nome nome;
        Sobrenome sobrenome;
        Email email;
        Senha senha;

        void valid_senha(Senha);

};

/**
 * @brief Responsável por armazenar informações do desenvolvedor
 * 
 * Os seguintes serviços estão disponíveis ao Desenvolvedor: 
 * os serviços disponíveis ao leitor, 
 * cadastrar como desenvolvedor de vocabulário controlado, 
 * criar, excluir, editar termo e definição de termo.
 */
class Desenvolvedor : public Leitor {

    public:

        /**
         * @brief Constrói um novo objeto da classe Desenvolvedor
         */
        Desenvolvedor() {};
        /**
         * @brief Constrói um novo objeto da classe Desenvolvedor armazenando os atributos passados se válidos
         */
        Desenvolvedor(const Nome&, const Sobrenome&, const Email&, const Senha&, const Data&);

        /**
         * @brief Armazena nascimento
         * 
         * @param nascimento 
         */
        void set_data(const Data& nascimento) {
            this->nascimento = nascimento;
        }
        /**
         * @brief Retorna data
         * 
         * @return Data 
         */
        Data get_data() {
            return nascimento;
        }
        /**
         * @brief Exibe as informações do Desenvolvedor
         */
        void show_desenvolvedor();

    protected:

        Data nascimento;
};

/**
 * @brief Responsável por armazenar informações do administrador
 * 
 * Os seguintes serviços estão disponíveis ao Administrador: 
 * os serviços disponíveis ao desenvolvedor, 
 * criar vocabulário controlado, editar definição de vocabulário controlado, 
 * alterar idioma de vocabulário controlado, excluir vocabulário controlado.
 */
class Administrador : public Desenvolvedor {

    public:

        /**
         * @brief Constrói um novo objeto da classe Administrador
         */
        Administrador() {};
        /**
         * @brief Constrói um novo objeto da classe Administrador armazenando os atributos passados se válidos
         */
        Administrador(const Nome&, const Sobrenome&, const Email&, const Senha&, const Data&, const Telefone&, const Endereco&);

        /**
         * @brief Armazena telefone
         * 
         * @param telefone 
         */
        void set_telefone(const Telefone& telefone) {
            this->telefone = telefone;
        }
        /**
         * @brief Armazena endereco
         * 
         * @param endereco 
         */
        void set_endereco(const Endereco& endereco) {
            this->endereco = endereco;
        }
        /**
         * @brief Retorna telefone
         * 
         * @return Telefone 
         */
        Telefone get_telefone() {
            return telefone;
        }
        /**
         * @brief Retorna endereco
         * 
         * @return Endereco 
         */
        Endereco get_endereco() {
            return endereco;
        }
        /**
         * @brief Exibe as informações do Administrador
         */
        void show_administrador();

    private:

        Telefone telefone;
        Endereco endereco;
};

/**
 * @brief Responsável por armazenar informações do vocabulário controlado
 * 
 * Contém termo(s) e definição.
 */
class Vocabulario {

    public:

        /**
         * @brief Constrói um novo objeto da classe Vocabulario
         */
        Vocabulario() {};
        /**
         * @brief Constrói um novo objeto da classe Vocabulario armazenando os atributos passados
         */
        Vocabulario(const Nome&, const Idioma&, const Data&);

        /**
         * @brief Armazena nome
         * 
         * @param nome
         */
        void set_nome(const Nome& nome) {
            this->nome = nome;
        }
        /**
         * @brief Armazena idioma
         * 
         * @param idioma 
         */
        void set_idioma(const Idioma& idioma) {
            this->idioma = idioma;
        }
        /**
         * @brief Armazena data
         * 
         * @param data 
         */
        void set_data(const Data& data) {
            this->data = data;
        }
        /**
         * @brief Retorna nome
         * 
         * @return Nome 
         */
        Nome get_nome() {
            return nome;
        }
        /**
         * @brief Retorna idioma
         * 
         * @return Idioma 
         */
        Idioma get_idioma() {
            return idioma;
        }
        /**
         * @brief Retorna data
         * 
         * @return Data 
         */
        Data get_data() {
            return data;
        }
        /**
         * @brief Exibe as informações do Vocabulario
         */
        void show_vocabulario();

    private:

        Nome nome;
        Idioma idioma;
        Data data;
};

/**
 * @brief Responsável por armazenar informações do termo
 * 
 * Pertence ao vocabulário e contém definição.
 */
class Termo {

    public:

        /**
         * @brief Constrói um novo objeto da classe Termo
         */
        Termo() {};
        /**
         * @brief Constrói um novo objeto da classe Termo armazenando os atributos passados
         */
        Termo(const Nome&, const Classe&, const Data&);

        /**
         * @brief Armazena nome
         * 
         * @param nome 
         */
        void set_nome(const Nome& nome) {
            this->nome = nome;
        }
        /**
         * @brief Armazena classe
         * 
         * @param classe 
         */
        void set_classe(const Classe& classe) {
            this->classe = classe;
        }
        /**
         * @brief Armazena data
         * 
         * @param data 
         */
        void set_data(const Data& data) {
            this->data = data;
        }
        /**
         * @brief Retorna nome
         * 
         * @return Nome 
         */
        Nome get_nome() {
            return nome;
        }
        /**
         * @brief Retorna classe
         * 
         * @return Classe 
         */
        Classe get_classe() {
            return classe;
        }
        /**
         * @brief Retorna data
         * 
         * @return Data 
         */
        Data get_data() {
            return data;
        }
        /**
         * @brief Exibe as informações do Termo
         */
        void show_termo();

    private:

        Nome nome;
        Classe classe;
        Data data;
};

/**
 * @brief Responsável por armazenar informações da definição
 * 
 * Define o vocabulário ou termo.
 */
class Definicao {

    public:

        /**
         * @brief Constrói um novo objeto da classe Definicao
         */
        Definicao() {};
        /**
         * @brief Constrói um novo objeto da classe Definicao armazenando os atributos passados se válidos
         */
        Definicao(const Texto&, const Data&);
        
        /**
         * @brief Armazena texto
         * 
         * @param texto 
         */
        void set_texto(const Texto& texto) {
            this->texto = texto;
        }
        /**
         * @brief Armazena data
         * 
         * @param data 
         */
        void set_data(const Data& data) {
            this->data = data;
        }
        /**
         * @brief Retorna texto
         * 
         * @return Texto 
         */
        Texto get_texto() {
            return texto;
        }
        /**
         * @brief Retorna data
         * 
         * @return Data 
         */
        Data get_data() {
            return data;
        }
        /**
         * @brief Exibe as informações da Definicao
         */
        void show_definicao();

    private:

        Texto texto;
        Data data;
};

#endif // VOC_ENTIDADES_H_
