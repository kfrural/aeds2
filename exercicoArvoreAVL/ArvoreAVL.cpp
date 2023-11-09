
#include "ArvoreAVL.h"
#include<iostream>
#include<fstream>
#include<ostream>

using namespace std;

ArvoreAVL::ArvoreAVL() {
    quant = 0;
    root = NULL;
}

ArvoreAVL::ArvoreAVL(const ArvoreAVL& outra) {
    this->quant = outra.getQuant();
    this->root = outra.getRoot();
}

ArvoreAVL::~ArvoreAVL() {
    //será chamado quando o objeto for destruido
}

Nodo * ArvoreAVL::buscar(Nodo * subArvore, const Produto& p) {
    if (subArvore != NULL) {
        Produto item = subArvore->getItem();
        if (p.getId() < item.getId())
            return buscar(subArvore->getEsq(), p);
        else if (p.getId() > item.getId())
            return buscar(subArvore->getDir(), p);
        else {
            return subArvore; //cout << "--- Achou ! ---";

        }
    } else {
        cout << " Elemento não encontrado.";
        return NULL;
    }
}

Nodo* ArvoreAVL::localEntrada(Nodo* no, const Produto &p) {
    Produto item = no->getItem();

    if (p.getId() < item.getId()) {
        if (no->getEsq() != NULL)
            return localEntrada(no->getEsq(), p);
    } else {
        if (no->getDir() != NULL)
            return localEntrada(no->getDir(), p);
    }

    return no;
}

void ArvoreAVL::insert(Produto &p) {
    Nodo *novo;
    novo = new Nodo(p);

    if (root == NULL) {
        root = new Nodo();
        root->setItem(p);
        quant++;
    } else {
        Nodo *pai = localEntrada(root, p);

        Produto itemPai = pai->getItem();
        if (p.getId() < itemPai.getId()) {
            pai->setEsq(novo);
            novo->setPai(pai);
            quant++;
        } else if (p.getId() > itemPai.getId()) {
            pai->setDir(novo);
            novo->setPai(pai);
            quant++;
        } else {
            cout << "Elemento ja existe!\n";
        }

    }
}

void ArvoreAVL::remove(Produto &p) {
    Nodo* sair = buscar(root, p);

    if (sair != NULL) {
        int numeroFilhos = sair->getNumeroFilhos();
        if (numeroFilhos == 0) {
            this->removerZeroFilhos(sair);
        } else if (numeroFilhos == 1) {
            this->removerUmFilho(sair);
        } else {
            this->removerNFilhos(sair);
        }
        quant--;
    }
    Nodo* p2 = this->getP(sair);
    if (p2 != NULL) {
        cout << "Desbalanceou:";
        p2->getItem().imprimirResumido();
        cout << endl;
        executaBalanceamento(sair);
    }

}

void ArvoreAVL::removerZeroFilhos(Nodo *sair) {
    Nodo * pai = sair->getPai();
    if (pai == NULL) { //estamos removendo o root
        root = NULL;
    } else {
        Produto itemPai = pai->getItem();
        Produto itemSair = sair->getItem();

        if (itemSair.getId() < itemPai.getId())
            pai->setEsq(NULL);
        else
            pai->setDir(NULL);
    }
}

void ArvoreAVL::removerUmFilho(Nodo *sair) {
    Nodo * pai = sair->getPai();
    Nodo * filho = sair->getFilhoUnico();

    if (pai == NULL) {//o pai é o root e basta apontar pra o filho
        root = filho;
    } else {
        if (filho != NULL) {
            filho->setPai(pai);
            if (filho->getItem().getId() > pai->getItem().getId())
                pai->setDir(filho);
            else
                pai->setEsq(filho);
        }
    }
}

void ArvoreAVL::removerNFilhos(Nodo *sair) {
    Nodo * antecessor = this->getAntecessor(sair);

    Produto p = antecessor->getItem();
    this->remove(p);

    sair->setItem(antecessor->getItem());

}

/**
 * O Algoritmo desce SEMPRE para ESQUERDA procurando o 
 * MENOR elemento dentre os MAIORES que o NO
 * 
 * O algoritmo para quando um determinado NO descendente não tiver mais
 * filho a esquerda.
 * @param no
 * @return 
 */
Nodo* ArvoreAVL::menorDescendente(Nodo *no) {
    if (no != NULL) {
        if (no->getEsq() == NULL)
            return no;
        else
            return menorDescendente(no->getEsq());
    }
    return NULL;
}

Nodo* ArvoreAVL::getSucessor(Nodo* no) {
    if (no != NULL) {
        return menorDescendente(no->getDir());
    } else {
        cout << "Esse nó não possui antecessor";
        return NULL;
    }
}

/**
 * O Algoritmo desce SEMPRE para Direita procurando o 
 * Maior elemento dentre os menores que o NO
 * 
 * O algoritmo para quando um determinado NO descendente não tiver mais
 * filho a direita.
 * @param no
 * @return 
 */
Nodo* ArvoreAVL::maiorDescendente(Nodo *no) {
    if (no != NULL) {
        if (no->getDir() == NULL)
            return no;
        else
            return maiorDescendente(no->getDir());
    }
    return NULL;
}

Nodo* ArvoreAVL::getAntecessor(Nodo* no) {
    if (no != NULL) {
        return maiorDescendente(no->getEsq());
    } else {
        cout << "Esse nó não possui antecessor";
        return NULL;
    }
}

void ArvoreAVL::emOrdem(Nodo *no) {
    if (no != NULL) {
        emOrdem(no->getEsq());
        cout << "(" << no->getItem().getId() << "," << no->getItem().getNome() <<
                "," << getFatorBalanceamento(no) << "), ";
        emOrdem(no->getDir());
    }
}

void ArvoreAVL::preOrdem(Nodo *no) {
    if (no != NULL) {
        cout << "(" << no->getItem().getId() << "," << no->getItem().getPreco() << "), ";
        preOrdem(no->getEsq());
        preOrdem(no->getDir());
    }
}

void ArvoreAVL::posOrdem(Nodo *no) {
    if (no != NULL) {
        posOrdem(no->getEsq());
        posOrdem(no->getDir());
        cout << "(" << no->getItem().getId() << "," << no->getItem().getPreco() << "), ";
    }
}

/**
 * Vai verificar se tem algum no desbalanceado
 * Se tiver algum, verificaQual caso estamos e chama a rotação correta!
 */
void ArvoreAVL::executaBalanceamento(Nodo* entrou) {
    Nodo * p = getP(entrou);

    if (p != NULL) { //Tem alguem desbalanceado
        Nodo * q = getQ(p);

        if (p->getFator() > 0 && q->getFator() >= 0) {//++, uma rotacao
           rotacaoUnica_DirDir(p, q);
        } else if (p->getFator() < 0 && q->getFator() <= 0) { //--, uma rotacao
            rotacaoUnica_EsqEsq(p, q);
        } else if (p->getFator() > 0 && q->getFator() < 0) {//+-, duas rotacoes
            Nodo * R = getQ(q);
            duplaRotacaoPosNeg(p, q);
        }else if (p->getFator() < 0 && q->getFator() > 0) {//-+, duas rotacoes
            Nodo * R = getQ(q);
            duplaRotacaoNegPos(p, q);
            //agora temos o r e podemos fazer as duas rotacoes
            // R->Q e R->P
        }

    }
}

void ArvoreAVL::duplaRotacaoPosNeg(Nodo *P, Nodo* Q){
    Nodo *paiP = P->getPai();
    Nodo *A = Q->getEsq();
    Nodo *B = A->getDir();

    A->setDir(P);
    P->setEsq(B);

    Q->setEsq(A);
    A->setPai(Q);
    if(B != NULL){
        B->setPai(A);
    }
    P->setPai(A);
    Q->setPai(paiP);
    if(Q->getItem().getId() > paiP->getItem().getId()){
        paiP->setDir(Q);
    }else{
        paiP->setEsq(Q);
    }
}

void ArvoreAVL::duplaRotacaoNegPos(Nodo *P, Nodo* Q){
    Nodo *paiP = P->getPai();
    Nodo *A = Q->getDir();
    Nodo *B = A->getEsq();

    A->setEsq(P);
    P->setDir(B);

    Q->setDir(A);
    A->setPai(Q);
    if(B != NULL){
        B->setPai(P);
    }
    P->setPai(A);
    Q->setPai(paiP);
    if(Q->getItem().getId() > paiP->getItem().getId()){
        paiP->setDir(Q);
    }else{
        paiP->setEsq(Q);
    }
}

void ArvoreAVL::rotacaoUnica_EsqEsq(Nodo *P, Nodo* Q) {
    Nodo* paiP = P->getPai();
    Nodo* A = Q->getDir();
    
    Q->setDir(P);
    P->setEsq(A);

    Q->setPai(paiP);
    if (Q->getItem().getId() > paiP->getItem().getId())
        paiP->setDir(Q);
    else
        paiP->setEsq(Q);
}

void ArvoreAVL::rotacaoUnica_DirDir(Nodo *P, Nodo* Q) {
    Nodo* paiP = P->getPai();
    Nodo* A = Q->getEsq();
    
    Q->setEsq(P);
    P->setDir(A);

    Q->setPai(paiP);
    if (Q->getItem().getId() > paiP->getItem().getId())
        paiP->setDir(Q);
    else
        paiP->setEsq(Q);
}

/**
 * Sobe nos ancestrais e vai calculando o fatorDeBalanceamento() deles
 * quando encontrar alguem maior que 2, achou!
 * Como consequencia, ja tem o fatorDeBalanceamento dos ancestrais, assim
 * é possivel saber qual caso estamos ++,--,+- ou -+
 * @param entrou
 * @return 
 */
Nodo* ArvoreAVL::getP(Nodo *entrou) {
    Nodo * pai = entrou->getPai();
    while (pai != NULL) {
        int fator = getFatorBalanceamento(pai);
        if (abs(fator) >= 2) {
            return pai;
        }
        pai = pai->getPai();
    }
    return NULL;
}

//Nodo* ArvoreAVL::getQ(Nodo *p, Nodo*entrou) {
//    if (entrou->getItem().getId() < p->getItem().getId())
//        return p->getEsq();
//    else
//        return p->getDir();
//}

Nodo* ArvoreAVL::getQ(Nodo *P) {
    if (P->getFator() > 0)
        return P->getDir();
    else
        return P->getEsq();
}

/**
 * Recebe um no como parametro e chama o metodo getAltura(SubArvoreEsquerda)
 *  e getAltura(SubArvoreDireita) e faz a diferenca.
 * @param no
 * @return 
 */
int ArvoreAVL::getFatorBalanceamento(Nodo *no) {
    int h_esq = 0;
    int h_dir = 0;
    Nodo* subEsq = no->getEsq();
    Nodo* subDir = no->getDir();

    if (subEsq != NULL)
        h_esq = getAltura(subEsq);

    if (subDir != NULL)
        h_dir = getAltura(subDir);

    int fator = h_dir - h_esq;
    no->setFator(fator);
    return fator;
}

/**
 * 
 * @param no
 * @return 
 */
int ArvoreAVL::getAltura(Nodo *no) {
    if (no == NULL) {
        return 0;
    } else {
        int h_esq = getAltura(no->getEsq());
        int h_dir = getAltura(no->getDir());

        if (h_esq > h_dir)
            return h_esq + 1;
        else
            return h_dir + 1;
    }
}

void ArvoreAVL::preOrdemArquivo(Nodo *no) {
    if (no != NULL) {
        textoSalvo = textoSalvo + no->getItem().imprimirParaArquivo() + "\n";
        preOrdemArquivo(no->getEsq());
        preOrdemArquivo(no->getDir());
    }
}

void ArvoreAVL::loadProdutos() {
    string caminhoPasta = "teste.txt";
    ifstream arquivoLido;

    arquivoLido.open(caminhoPasta.c_str());
    int quant;
    arquivoLido >> quant;

    string nome;
    float id, custo, preco;
    int estoque;

    Produto p;
    for (int i = 0; i < quant; i++) {
        arquivoLido >> id;
        arquivoLido >> nome;
        arquivoLido >> custo;
        arquivoLido >> preco;
        arquivoLido >> estoque;
        p.setId(id);
        p.setNome(nome);
        p.setCusto(custo);
        p.setPreco(preco);
        p.setEstoque(estoque);

        insert(p);
    }

    arquivoLido.close();
}

void ArvoreAVL::saveProdutosArquivo() {
    string caminhoPasta = "teste.txt";
    ofstream arquivoSalvo;
    arquivoSalvo.open(caminhoPasta.c_str());

    preOrdemArquivo(root); //essa funcao monta o texto    
    arquivoSalvo << quant << endl << textoSalvo << endl;

    arquivoSalvo.close();
}


/**
 *  GETTERS E SETTERS 
 */
void ArvoreAVL::setQuant(int quant) {
    this->quant = quant;
}

int ArvoreAVL::getQuant() const {
    return quant;
}

void ArvoreAVL::setRoot(Nodo* root) {
    this->root = root;
}

Nodo* ArvoreAVL::getRoot() const {
    return root;
}