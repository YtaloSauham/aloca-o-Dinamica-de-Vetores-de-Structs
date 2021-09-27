#include <stdio.h>
#include <stdlib.h>



int main(void) {

  struct fabrica{
    int tarefas;
  };

struct fabrica *p;
  FILE *file;
  file=fopen("C:\\solucao.txt","w");
  if(file==NULL){
      printf("Nao foi possivel abrir o arquivo.\n");
      exit(0);
  }
  
  int total =0;
  int i,quant_maquinas;

  printf("Digite a quantidade de maquinas: ");

  scanf("%d",&quant_maquinas);

  p=(struct fabrica*)(malloc(quant_maquinas * sizeof(int)));
 
  if(p==NULL){
    printf("\n Erro na alocao de memoria");
    system("pause");
    exit(1);
  }
  printf("\n");

  for(i=0;i <quant_maquinas;i++){
    printf("Digite o custo da tarefa para maquina %d:",i+1);
    scanf("%d",&p[i].tarefas);
  }
printf("Tabelana Maquina x Custo Tarefa\n");
  for(i=0;i <quant_maquinas;i++){
    fprintf(file,"\nMaquina[%d] executando a tarefa de custo:%d",i,p[i].tarefas);
    printf("\nMaquina[%d]:%d",i,p[i].tarefas);
    total+=p[i].tarefas;
  }
  printf("\nCusto total %d",total);

  fclose(file);
  printf("\n");
  free(p);
  system("pause");
  return 0;


}