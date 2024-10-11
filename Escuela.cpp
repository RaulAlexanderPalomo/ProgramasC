/*Raúl Alexander Palomo Pech*/
#include 
#include 
#include 
#include
main(){

setlocale(LC_CTYPE,"Spanish");



char grupo;
float califExam,califTarea;
int i;
float sum1,sum2,sum3,sum4,sum5;
float tar1,tar2,tar3,tar4;
float caliFinal;
i=1;
char nombreAlumn[40];




do{
printf("\nPor favor escribe tu nombre ");
scanf(" %[^\n]",nombreAlumn);
printf("\nDime el grupo al que perteneces: ");
scanf(" %c",&grupo);

grupo = toupper(grupo);

if(grupo == 'A'){
printf("\nHola alumno %d por favor proporciona la calificación de tu examen: ",i);
scanf(" %f",&califExam);
printf("¡Gracias! Ahora por favor proporciona la calificación obtenida en la tarea: ");
scanf(" %f",&califTarea);
caliFinal=(califExam*0.8)+(califTarea*0.2);
printf("\nSu calificaión en este semestre es %g",caliFinal);
}else{
if(grupo=='B'){
printf("\nHola alumno %d por favor, proporciona la calificación de tu examen 1: ",i);
scanf(" %f",&sum1);
printf("\nProporciona la calificación de tu examen 2: ");
scanf(" %f",&sum2);
printf("\nProporciona la calificación de tu examen 3: ");
scanf(" %f",&sum3);
printf("\nProporciona la calificación de tu examen 4: ");
scanf(" %f",&sum4);
printf("\nProporciona la calificación de tu examen 5: ");
scanf(" %f",&sum5);
printf("\n¡Muchas gracias! Ahora por favor proporciona la calificación de tu tarea 1: ");
scanf(" %f",&tar1);
printf("\nAhora proporciona la calificación de la tarea 2: ");
scanf(" %f",&tar2);
printf("\nAhora proporciona la calificación de la tarea 3: ");
scanf(" %f",&tar3);
printf("\nYa casi terminamos \nAhora proporciona la calificación de la tarea 4: ");
scanf(" %f",&tar4);


califExam=(sum1+sum2+sum3+sum4+sum5)/5;
califTarea=(tar1+tar2+tar3+tar4)/4;

caliFinal=(califExam*0.6)+(califTarea*0.4);

printf("\nAlumno %d su calificación final es de: %g",i,caliFinal);

}else{
do{
printf("\nDame la calificación del examen 1: ");
scanf(" %f",&sum1);
}while(sum1<0 || sum1>100);


do{
printf("\nDame la calificación del examen 2: ");
scanf(" %f",&sum2);
}while(sum2<0 || sum2>100);

do{
printf("\nDame la calificación del examen 3: ");
scanf(" %f",&sum3);
}while(sum3<0 || sum3>100);

do{
printf("\nDame la calificación del examen 4: ");
scanf(" %f",&sum4);
}while(sum4<0 || sum4>100);

caliFinal=(sum1+sum2+sum3+sum4)/4;
i=i+1;
printf("\nAlumno %d del grupo %c su calificación final es de %g",i,grupo,caliFinal);
if(caliFinal>=90){
printf("\nFelicidades por el conocimiento adquirido en este semestre");

}
}


}
}while(i<=10);

printf("\nEl proceso de reporte del profesor Victor Martínez está terminado.");
printf("\nPulse cualquier tecla para continuar...");
getch();


return 0;
}
