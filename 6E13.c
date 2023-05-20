#include<stdio.h>
#include<string.h>

/*13. Peça ao usuário para digitar seus dados pessoais (Nome, Endereço, Data de Nascimento, 
Cidade, CEP, e-mail), verifique se as informações de Data de Nascimento, CEP e e-mail fazem 
sentido, e mostre ao usuário as informações, se estão todas corretas, ou mostre que alguma 
informação estava errada*/

typedef struct{
    int d, m, a;
}data;

typedef struct{
    char nome[30], end[50], mail[40], cid[20], cep[11];
    data data;
}dados;

int val_dia(int d, int m, int a);
int val_cep(char cep[11]);
int val_mail(char mail[40]);

int main(){
    dados d;
    printf("Insira o seu nome: ");
    fgets(d.nome, 30, stdin);
    d.nome[strlen(d.nome)-1]='\0';
    printf("Insira o seu endereco: ");
    setbuf(stdin, NULL);
    fgets(d.end, 50, stdin);
    d.end[strlen(d.end)-1]='\0';
    do{
        printf("Insira a sua data de nascimento(DD/MM/AA): ");
        scanf("%d %d %d", &d.data.d, &d.data.m, &d.data.a);
        if(val_dia(d.data.d, d.data.m, d.data.a)){
            printf("Data invalida, tente novamente:\n\n");
        }
    }while(val_dia(d.data.d, d.data.m, d.data.a));
    printf("Insira a sua cidade: ");
    setbuf(stdin, NULL);
    fgets(d.cid, 20, stdin);
    d.cid[strlen(d.cid)-1]='\0';
    do{
        printf("Insira o seu CEP: ");
        setbuf(stdin, NULL);
        fgets(d.cep, 11, stdin);
        if(val_cep(d.cep)){
            printf("Cep invalido, tente novamente:\n\n");
        }
    } while(val_cep(d.cep));
    d.cep[strlen(d.cep)-1]='\0';
    do{
        printf("Insira o seu e-mail: ");
        setbuf(stdin, NULL);
        fgets(d.mail, 40, stdin);
        if(val_mail(d.mail)){
            printf("E-mail invalido, tente novamente:\n\n");
        }
    } while(val_mail(d.mail));
    d.mail[strlen(d.mail)-1]='\0';
    printf("%s. Data de nascimento: %d/%d/%d. E-mail:%s \nEndereco: %s. Cidade: %s. CEP: %s", d.nome, d.data.d, d.data.m, d.data.a, d.mail, d.end, d.cid, d.cep);
    return 0;
}

int val_dia(int d, int m, int a){
    if(m<1||m>12){
        return 1;
    } else{
        switch(m){
            case 1:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 2:
                if((a%400==0) || ((a%4==0) && (a%100!=0))){//checa se o ano é bissexto
                    if(d<1||d>29){
                        return 1;
                    }else return 0;
                } else{
                    if(d<1||d>28){
                        return 1;
                    }else return 0;
                }
            case 3:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 4:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 5:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 6:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 7:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 8:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 9:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 10:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 11:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 12:
                if(d<1||d>31){
                    return 1;
                } else return 0;
        }
    }
}

int val_cep(char cep[11]){
    int i;
    i=strlen(cep);
    if(i==10&&cep[5]=='-'){
        for(i=0; i<9; i++){ //Checa se só foram inseridos dígitos como cep
            if((cep[i]<'0'||cep[i]>'9')&&i!=5){
                return 1;
            }
        }
        return 0;
    } else if(i==9){
        for(i=0; i<8; i++){
            if(cep[i]<'0'||cep[i]>'9'){
                return 1;
            }
        }
        return 0;
    }
    return 1;
}

int val_mail(char mail[40]){
    int i;
    for(i=0; mail[i]!='\0'; i++){
        if(mail[i]=='@'){ //Vê se acha um @ na string
            for(; mail[i]!='\0'; i++){
                if(mail[i]=='.'&&mail[i+1]!='\n'){ //vê se após o @ existe o ponto do domínio e também vé se tem algo depois do ponto
                    return 0;
                }
            } 
            return 1; //Entra aqui se ele achou o @, mas não o .
        }
    } //Se nunca achou @, entra aqui
    return 1;
}