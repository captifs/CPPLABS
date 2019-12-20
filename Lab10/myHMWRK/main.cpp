#include <iostream>
#include "Piesa.h"
#include "Piesa_Gaurita.h"
#include "Piesa_Vopsita.h"
#include "Ansamblu.h"
using namespace std;

    int main() {
        int n;
        cout<<"Dati nr. de elem. din vector:";
        cin>>n;
        Auxiliar **vec=new Auxiliar*[n];
        for(int i=0;i<n;i++){
            int t;
            cout<<"Pentru tipuri piese apasati 0, pentru ansamblu apasati 1."<<endl;
            cin>>t;
            if(t==0){
                int x;
                cout<<"Pentru piesa cu gauri apasati 1, pentru piesa vopsita apasati 2."<<endl;
                cin>>x;
                if(x==1){
                    int pret,ng;
                    cout<<"Dati pretul: ";
                    cin>>pret;
                    char cod[6];
                    cout<<"Dati codul: ";
                    cin>>cod;
                    cout<<"Dati nr. de gauri: ";
                    cin>>ng;
                    vec[i]=new Piesa_Gaurita(pret,cod,ng);
                }else{
                    if(x==2){
                        int pret;
                        char *c=new char[25];
                        cout<<"Dati pretul: ";
                        cin>>pret;
                        cout<<"Dati culoarea: ";
                        fflush(stdin);
                        cin>>c;
                        fflush(stdin);
                        char cod[6];
                        cout<<"Dati cod-ul";
                        cin>>cod;
                        cout<<"Dati boolu: ";
                        bool t_t;
                        cin>>t_t;
                        vec[i]=new Piesa_Vopsita(pret,cod,c,t_t);
                    }else{
                        i--;
                    }
                }
            }
            else{
                if (t==1){
                    int pret,ng;
                    char cd[6];
                    cout<<"Dati pretul: ";
                    cin>>pret;
                    cout<<"Dati cod-ul";
                    cin>>cd;
                    cout<<"Dati nr. de gauri: ";
                    cin>>ng;

                    Piesa_Vopsita **buf=new Piesa_Vopsita*[ng];
                    for (int j=0;j<ng;j++){
                        int p;
                        char *c=new char[25];
                        cout<<"Piesa vopsita: "<<endl;
                        fflush(stdin);
                        cout<<"Dati pretul: ";
                        cin>>p;
                        char cod[6];
                        cout<<"Dati codul: ";
                        cin>>cod;
                        cout<<"Dati culoarea: ";
                        fflush(stdin);
                        cin>>c;
                        fflush(stdin);
                        cout<<"Introduceti booleanu: ";
                        bool t_t;
                        cin>>t_t;
                        buf[j] = new Piesa_Vopsita(p,cod,c,t_t);
                    }

                    vec[i]=new Ansamblu(pret,cd,ng,buf);
                }else{
                    i--;
                }
            }
            system("PAUSE");
            system("CLS");
        }

        for(int i=0;i<n;i++)
        {
            cout<<"Piesa nr."<<i<<": "<<endl;
            vec[i]->afisare();
        }

        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(vec[i]->get_pret()>vec[j]->get_pret()){
                    Piesa* aux;
                    aux=vec[i];
                    vec[i]=vec[j];
                    vec[j]=aux;
                }
        return 0;
    }
