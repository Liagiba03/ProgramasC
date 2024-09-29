#include <stdio.h>
int main(){
    int cal=0;
    printf("CALIFICACION DEL EXAMEN\n");
    printf("Escribe la calificación del examen\n");
    scanf("%d",&cal);
    if(cal>=8){
        printf("¡Felicidades aprobaste el curso!\n");
    }
    printf("FIN DEL PROGRAMA\n");
    return 0;
}

