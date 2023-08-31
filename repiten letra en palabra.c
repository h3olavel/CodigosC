//contar cuantas veces se repiten las letras y cantidad de letras
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Ppalabra(), Cpalabra(), MostrarP();
char cad[50];
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0; /*letras*/
int main(int argc, char *argv[])
{
    Ppalabra();
	Cpalabra();
	MostrarP();
}

void Ppalabra()
{
	printf("Introduce la palabra: ");
	scanf("%s",cad); 
} 

void Cpalabra(){
	
	int i=0;
	
        while(cad[i]!='\0'){

        if(cad[i]=='a'){
            a++;
        }

        if(cad[i]=='b'){
            b++;
        }

        if(cad[i]=='c'){
            c++;
        }


        if(cad[i]=='d'){
            d++;
        }

        if(cad[i]=='e'){
            e++;
        }

        if(cad[i]=='f'){
            f++;
        }

        if(cad[i]=='g'){
            g++;
        }

        if(cad[i]=='h'){
            h++;
        }

        if(cad[i]=='i'){
            i++;
        }

        if(cad[i]=='j'){
            j++;
        }

        if(cad[i]=='k'){
            k++;
        }

        if(cad[i]=='l'){
            l++;
        }

        if(cad[i]=='m'){
            m++;
        }

        if(cad[i]=='n'){
            n++;
        }

        if(cad[i]=='o'){
            o++;
        }

        if(cad[i]=='p'){
            p++;
        }

        if(cad[i]=='q'){
            q++;
        }

        if(cad[i]=='r'){
            r++;
        }

        if(cad[i]=='s'){
            s++;
        }

        if(cad[i]=='t'){
            t++;
        }

        if(cad[i]=='u'){
            u++;
        }

        if(cad[i]=='v'){
            v++;
        }

        if(cad[i]=='w'){
            w++;
        }

        if(cad[i]=='x'){
            x++;
        }

        if(cad[i]=='y'){
            y++;
        }

        if(cad[i]=='z'){
            z++;
        }

            i++;
    }
}

void MostrarP(){
	
	if(a!=0 || a==0 ){
    printf("La letra A se uso %i ", a);
	}	
    if(b!=0 || b==0){
    printf("\nLa letra B se uso %i ", b);
	}	
    if(c!=0 || c==0){
    printf("\nLa letra C se uso %i ", c);
	}
    if(d!=0 || d==0){
    printf("\nLa letra D se uso %i ", d);
	}
    if(e!=0 || e==0){
    printf("\nLa letra E se uso %i ", e);
	}
    if(f!=0 || f==0){
    printf("\nLa letra F se uso %i ", f);
	}
    if(g!=0 || g==0){
    printf("\nLa letra G se uso %i ", g);
	}
    if(h!=0|| h==0){
    printf("\nLa letra H se uso %i ", h);
	}
    if(i!=0 || i==0){
    printf("\nLa letra I se uso %i ", i);
	}
    if(j!=0 || j==0){
    printf("\nLa letra J se uso %i ", j);
	}
    if(k!=0 || k==0){
    printf("\nLa letra K se uso %i ", k);
	}
    if(l!=0 || l==0){
    printf("\nLa letra L se uso %i ", l);
	}
    if(m!=0 || m==0){
    printf("\nLa letra M se uso %i ", m);
	}
    if(n!=0 || n==0){
    printf("\nLa letra N se uso %i ", n);
	}
    if(o!=0 || o==0){
    printf("\nLa letra O se uso %i ", o);
	}
    if(p!=0 || p==0){
    printf("\nLa letra P se uso %i ", p);
	}
    if(q!=0 || q==0){
    printf("\nLa letra Q se uso %i ", q);
	}
    if(r!=0 || r==0){
    printf("\nLa letra R se uso %i ", r);
	}
    if(s!=0 || s==0){
    printf("\nLa letra S se uso %i ", s);
	}
    if(t!=0 || t==0){
    printf("\nLa letra T se uso %i ", t);
	}
    if(u!=0 || u==0){
    printf("\nLa letra U se uso %i ", u);
	}
    if(v!=0 || v==0){
    printf("\nLa letra V se uso %i ", v);
	}
    if(w!=0 || w==0){
    printf("\nLa letra W se uso %i ", w);
	}
    if(x!=0 || x==0){
    printf("\nLa letra X se uso %i ", x);
	}
    if(y!=0 || y==0){
    printf("\nLa letra Y se uso %i ", y);
	}
    if(z!=0 || z==0){
    printf("\nLa letra Z se uso %i ", z);
	}
}

