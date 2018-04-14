#ifndef ENTIDADES_H
#define ENTIDADES_H

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
 * @brief Classe responsável por armazenar informações do leitor
 * 
 * Os seguintes serviços estão disponíveis ao leitor: 
 * apresentar dados do usuário, editar dados do usuário, 
 * excluir conta, listar nomes dos vocabulários controlados, 
 * apresentar dados de vocabulário controlado, consultar termo, 
 * consultar definição de termo.
 * 
 */
class Leitor {

    protected:

        Nome nome;
        Sobrenome sobrenome;
        Email email;
        Senha senha;

        void valid_senha(Senha);

    public:

        Leitor() {};
        Leitor(const Nome&, const Sobrenome&, const Email&, const Senha&);

        void set_nome(const Nome& nome) {
            this->nome = nome;
        }
        void set_sobrenome(const Sobrenome& sobrenome) {
            this->sobrenome = sobrenome;
        }
        void set_email(const Email& email) {
            this->email = email;
        }
        void set_senha(const Senha& senha) {
            valid_senha(senha);
            this->senha = senha;
        }
        Nome get_nome() {
            return nome;
        }
        Sobrenome get_sobrenome() {
            return sobrenome;
        }
        Email get_email() {
            return email;
        }
        Senha get_senha() {
            return senha;
        }
        void show_leitor();
};

/**
 * @brief Classe responsável por armazenar informações do desenvolvedor
 * 
 * Os seguintes serviços estão disponíveis ao Desenvolvedor: 
 * os serviços disponíveis ao leitor, 
 * cadastrar como desenvolvedor de vocabulário controlado, 
 * criar, excluir, editar termo e definição de termo.
 * 
 */
class Desenvolvedor : public Leitor {

    protected:

        Data nascimento;

    public:

        Desenvolvedor() {};
        Desenvolvedor(const Nome&, const Sobrenome&, const Email&, const Senha&, const Data&);
        void set_data(const Data& nascimento) {
            this->nascimento = nascimento;
        }
        Data get_data() {
            return nascimento;
        }
        void show_desenvolvedor();
};

/**
 * @brief Classe responsável por armazenar informações do administrador
 * 
 * Os seguintes serviços estão disponíveis ao Administrador: 
 * os serviços disponíveis ao desenvolvedor, 
 * criar vocabulário controlado, editar definição de vocabulário controlado, 
 * alterar idioma de vocabulário controlado, excluir vocabulário controlado.
 * 
 */
class Administrador : public Desenvolvedor {

    private:

        Telefone telefone;
        Endereco endereco;

    public:

        Administrador() {};
        Administrador(const Nome&, const Sobrenome&, const Email&, const Senha&, const Data&, const Telefone&, const Endereco&);
        void set_telefone(const Telefone& telefone) {
            this->telefone = telefone;
        }
        void set_endereco(const Endereco& endereco) {
            this->endereco = endereco;
        }
        Telefone get_telefone() {
            return telefone;
        }
        Endereco get_endereco() {
            return endereco;
        }
        void show_administrador();
};

/**
 * @brief Classe responsável por armazenar informações do vocabulário controlado
 * 
 * Contém termo(s) e definição.
 * 
 */
class Vocabulario {

    private:

        Nome nome;
        Idioma idioma;
        Data data;

    public:

        Vocabulario() {};
        Vocabulario(const Nome&, const Idioma&, const Data&);
        void set_nome(const Nome& nome) {
            this->nome = nome;
        }
        void set_idioma(const Idioma& idioma) {
            this->idioma = idioma;
        }
        void set_data(const Data& data) {
            this->data = data;
        }
        Nome get_nome() {
            return nome;
        }
        Idioma get_idioma() {
            return idioma;
        }
        Data get_data() {
            return data;
        }
        void show_vocabulario();
};

/**
 * @brief Classe responsável por armazenar informações do termo
 * 
 * Pertence ao vocabulário e contém definição.
 * 
 */
class Termo {

    private:

        Nome nome;
        Classe classe;
        Data data;

    public:

        Termo() {};
        Termo(const Nome&, const Classe&, const Data&);
        void set_nome(const Nome& nome) {
            this->nome = nome;
        }
        void set_classe(const Classe& classe) {
            this->classe = classe;
        }
        void set_data(const Data& data) {
            this->data = data;
        }
        Nome get_nome() {
            return nome;
        }
        Classe get_classe() {
            return classe;
        }
        Data get_data() {
            return data;
        }
        void show_termo();
};

/**
 * @brief Classe responsável por armazenar informações da definição
 * 
 * Define o vocabulário ou termo.
 * 
 */
class Definicao {

    private:

        Texto texto;
        Data data;

    public:

        Definicao() {};
        Definicao(const Texto&, const Data&);
        void set_texto(const Texto& texto) {
            this->texto = texto;
        }
        void set_data(const Data& data) {
            this->data = data;
        }
        Texto get_texto() {
            return texto;
        }
        Data get_data() {
            return data;
        }
        void show_definicao();
};

#endif
