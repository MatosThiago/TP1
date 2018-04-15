#include "dominios.h"
#include <stdexcept>
#include <string>

using namespace std;

void Nome::valid_nome(string nome) {

    if(nome.size() > LIMITE) {
        throw invalid_argument("O tamanho do nome nao deve exceder 20 caracteres");
    }

    for(int i = 1; i < nome.size(); i++) {
        if(nome[i] < 'a' || nome[i] > 'z') {
            throw invalid_argument("O nome so deve conter caracteres entre 'a' e 'z'");
        }
    }

    if(nome[0] < 'A' || nome[0] > 'Z') {
        throw invalid_argument("O primeiro caracter do nome deve ser maiusculo");
    }
}

void Nome::set_nome(string nome) {

    valid_nome(nome);
    this->nome = nome;
}

void Sobrenome::valid_sobrenome(string sobrenome) {

    if(sobrenome.size() > LIMITE) {
        throw invalid_argument("O tamanho do sobrenome nao deve exceder 20 caracteres");
    }

    for(int i = 1; i < sobrenome.size(); i++) {
        if(sobrenome[i] < 'a' || sobrenome[i] > 'z') {
            throw invalid_argument("O sobrenome so deve conter caracteres entre 'a' e 'z'");
        }
    }

    if(sobrenome[0] < 'A' || sobrenome[0] > 'Z') {
        throw invalid_argument("O primeiro caracter do sobrenome deve ser maiusculo");
    }
}

void Sobrenome::set_sobrenome(string sobrenome) {

    valid_sobrenome(sobrenome);
    this->sobrenome = sobrenome;
}

void Telefone::valid_telefone(string telefone) {

    if(telefone.size() != TAMANHO) {
        throw invalid_argument("O telefone deve conter 13 caracteres");
    }

    for(int i = 0; i < telefone.size(); i++) {
        if(i == 2) {
            if(telefone[i] != ' ')
                throw invalid_argument("O DDD deve ser separado do numero por espaco");
            i++;
        }
        if(i == 8) {
            if(telefone[i] != '-')
                throw invalid_argument("Os primeiros 5 digitos do numero devem ser separados por hifen dos 4 restantes");
            i++;
        }
        if(telefone[i] < '0' || telefone[i] > '9') {
            throw invalid_argument("O telefone so deve conter numeros");
        }
    }
}

void Telefone::set_telefone(string telefone) {

    valid_telefone(telefone);
    this->telefone = telefone;
}

void Endereco::valid_endereco(string endereco) {

    if(endereco.size() > LIMITE) {
        throw invalid_argument("O tamanho do endereco nao deve exceder 20 caracteres");
    }

    if(endereco[0] == ' ' || endereco[endereco.size() - 1] == ' ') {
        throw invalid_argument("O primeiro e o ultimo caracter do endereco nao podem ser espaco");
    }

    for(int i = 1; i < endereco.size() - 1; i++) {
        if(endereco[i] == ' ' && endereco[i + 1] == ' ') {
            throw invalid_argument("O endereco nao deve conter dois espacos em sequencia");
        }
    }

    for(int i = 0; i < endereco.size(); i++) {
        if(endereco[i] != ' ' && (endereco[i] < 'A' || endereco[i] > 'Z') && (endereco[i] < 'a' || endereco[i] > 'z')) {
            throw invalid_argument("O endereco so deve conter caracteres entre 'A' e 'z' ou espacos");
        }
    }
}

void Endereco::set_endereco(string endereco) {

    valid_endereco(endereco);
    this->endereco = endereco;
}

void Data::valid_data(string data) {

    if(data.size() != TAMANHO) {
        throw invalid_argument("A data deve conter 10 caracteres");
    }

    for(int i = 0; i < data.size(); i++) {
        if(i == 2 || i == 5) {
            if(data[i] != '/')
                throw invalid_argument("O dia deve ser separado do mes e o mes deve ser separado do ano por '/'");
            i++;
        }
        if(data[i] < '0' || data[i] > '9') {
            throw invalid_argument("A data so deve conter numeros e o separador '/'");
        }
    }

    dia = stoi(data);
    mes = stoi(&data[3]);
    ano = stoi(&data[6]);

    if(ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
        BISSEXTO = true;
    }

    if(dia < DIAMIN || dia > DIAMAX) {
        throw invalid_argument("A data deve conter um dia entre 01 e 31");
    }
    if(mes < MESMIN || mes > MESMAX) {
        throw invalid_argument("A data deve conter um mes entre 01 e 12");
    }
    if(ano < ANOMIN || ano > ANOMAX) {
        throw invalid_argument("A data deve conter um ano entre 1900 e 2099");
    }

    if(mes == FERVEREIRO) {
        if(!BISSEXTO && dia > DIAMAXF) {
            throw invalid_argument ("Dia invalido em relacao ao mes");
        }
        if(BISSEXTO && dia > DIAMAXF + 1) {
            throw invalid_argument ("Dia invalido em relacao ao mes");
        }
    }
    if((mes == ABRIL || mes == JUNHO || mes == SETEMBRO || mes == NOVEMBRO) && dia > DIAMAX - 1) {
        throw invalid_argument("Dia invalido em relacao ao mes");
    }
}

void Data::set_data(string data) {

    valid_data(data);
    this->data = data;
}

void Email::valid_email(string email) {

    string local   = email.substr(0, email.find('@'));
    string dominio = email.substr(email.find('@') + 1, email.size() - 1);

    int numero = 0;

    if(local[0] == '.' || local[local.size() - 1] == '.') {
        throw invalid_argument("O primeiro e o ultimo caracter da parte local do email nao podem ser '.'");
    }
    
    if(dominio[0] == '-' || dominio[0] == '.' || dominio[dominio.size() - 1] == '-' || dominio[dominio.size() - 1] == '.') {
        throw invalid_argument("O primeiro e o ultimo caracter da parte dominio do email nao podem ser '-' ou '.'");
    }
    
    for(int i = 0; i < local.size(); i++) {
        if(!((local[i] >= 'A' && local[i] <= 'Z') ||
             (local[i] >= 'a' && local[i] <= 'z') ||
             (local[i] >= '0' && local[i] <= '9'))) {
            if(!(local[i] == '!' || local[i] == '#' || local[i] == '$' ||
                 local[i] == '%' || local[i] == '&' || local[i] == '\''||
                 local[i] == '*' || local[i] == '+' || local[i] == '-' ||
                 local[i] == '/' || local[i] == '=' || local[i] == '?' ||
                 local[i] == '^' || local[i] == '_' || local[i] == '`' ||
                 local[i] == '{' || local[i] == '|' || local[i] == '}' ||
                 local[i] == '~' || local[i] == ';' || local[i] == '.')) {
                throw invalid_argument("A parte local do email pode conter letras, numeros ou os caracteres '!' '#' '$' '%' '&' ''' '*' '+' '-' '/' '=' '?' '^' '_' '`' '{' '|' '}' '~' ';'");
            }
        }
    }

    for(int i = 0; i < dominio.size(); i++) {
        if(dominio[i] >= '0' && dominio[i] <= '9') {
            numero++;
        } else {
            if(!((dominio[i] >= 'A' && dominio[i] <= 'Z') ||
                 (dominio[i] >= 'a' && dominio[i] <= 'z'))) {
                if(!(dominio[i] == '-' || dominio[i] == '.')) {
                    throw invalid_argument("A parte dominio do email pode conter letras, numeros ou os caracteres '-' '.'");
                }
            }
        }
    }

    if(numero == dominio.size()) {
        throw invalid_argument("A parte dominio do email nao pode conter somente numeros");
    }
}

void Email::set_email(string email) {

    valid_email(email);
    this->email = email;
}

void Senha::valid_senha(string senha) {

    int maiusculo = 0;
    int minusculo = 0;
    int numero = 0;

    if(senha.size() != TAMANHO) {
        throw invalid_argument("A senha deve conter 8 caracteres");
    }

    for(int i = 0; i < senha.size(); i++) {
        if(senha[i] >= 'A' && senha[i] <= 'Z') {
            maiusculo++;
        } else {
            if(senha[i] >= 'a' && senha[i] <= 'z') {
                minusculo++;
            } else {
                if(senha[i] >= '0' && senha[i] <= '9') {
                    numero++;
                } else {
                    throw invalid_argument("A senha deve conter apenas numeros e caracteres entre 'A' e 'z'");
                }
            }
        }
    }

    if(maiusculo < MAIUSCULOMIN || minusculo < MINUSCULOMIN || numero < NUMEROMIN) {
        throw invalid_argument("A senha deve conter pelo menos uma letra maiucula, uma letra minuscula e um numero");
    }
}

void Senha::set_senha(string senha) {

    valid_senha(senha);
    this->senha = senha;
}

void Texto::valid_texto(string texto) {

    if(texto.size() < LIMITEMIN || texto.size() > LIMITEMAX) {
        throw invalid_argument("O texto de definicao deve conter entre 1 e 30 caracteres");
    }
}

void Texto::set_texto(string texto) {

    valid_texto(texto);
    this->texto = texto;
}

void Idioma::valid_idioma(string idioma) {

    if(idioma.size() != TAMANHO) {
        throw invalid_argument("O idioma deve conter 3 caracteres");
    }

    if(idioma != "ENG" && idioma != "FRA" && idioma != "GER" && idioma != "ITA" && idioma != "POR" && idioma != "SPA") {
        throw invalid_argument("Idioma invalido");
    }
}

void Idioma::set_idioma(string idioma) {

    valid_idioma(idioma);
    this->idioma = idioma;
}

void Classe::valid_classe(string classe) {

    if(classe.size() != TAMANHO) {
        throw invalid_argument("A classe deve conter 2 caracteres");
    }

    if(classe != "PT" && classe != "NP") {
        throw invalid_argument("Classe de termo invalida");
    }
}

void Classe::set_classe(string classe) {

    valid_classe(classe);
    this->classe = classe;
}
