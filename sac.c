
#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int respUsu, nomeComp, valorIrrelevante;
    
    printf("Bem vindo ao Servico de Atentdimento ao Cliente ATIM!\n");
    printf("Para iniciar seu atendimento digite uma um número referente ao motivo do atendimento: \n");
    printf("\nDigite [1] para solicitar suporte tecnico\n");
    printf("\nDigite [2] para cancelamento do servico\n");
    printf("\nDigite [3] para problemas com a fatura\n");
    printf("\nDigite [4] para encerrar\n");
    scanf("%d",&respUsu);
    
    //condicao visita tecnica
    if (respUsu == 1){
    
    	printf("Maravilha! O servico de suporte tecnico 24 horas da ATIM atende todo o pais\n");
    	printf("\nMuito bem, primeiro precisamos que responda algumas perguntas :)\n");
    	printf("Qual o motivo da solicitacao do suporte tecnico: ");
    	printf("\nDigite [1] danos fisicos no rotador\n");
    	printf("\nDigite [2] lentidao na intenet\n");
    	printf("\nDigite [3] instalacao do moden\n");
    	printf("\nDigite [4] para encerrar\n");
    	scanf("%d",&respUsu);
    	
    	//primeira condicao visita
    	if (respUsu == 1){  //se danos fisicos
    		
			printf("\nHmmm... aparentemente seu aparelho sofreu danos fisicos :o");
			printf("\nConte um pouco mais para entendermos melhor...");
			printf("\nDigite [1] para aparelho queimou\n");
    		printf("\nDigite [2] para antena quebrou\n");
    		printf("\nDigite [3] para outro dano fisico\n");
    		printf("\nDigite [4] para encerrar\n");
    		scanf("%d",&respUsu);
    		
    		if (respUsu == 1 || respUsu == 2 || respUsu == 3){ //se for alguma das repostas válidas
    			printf("\nPerfeito, o valor do reparo do roteador pode variar entre R$ 87,90 ate R$312,76 ");
    			printf("\nAgora responda algumas perguntas para validarmos seus dados: ");
    			printf("\nDigite seu e-mail: ");
    			scanf("%d",&valorIrrelevante);
    			printf("\nDigite [1] para continuar\n");
    			printf("\nDigite [2] para encerrar\n");
    			scanf("%d",&respUsu);
    			
    			if(respUsu == 1) { // verificacao nome da mae
    				printf("\nMuito bem agora digite o nome da sua mae:  ");
    				scanf("%d",&valorIrrelevante);
    				printf("\nDigite [1] para continuar\n");
    				printf("\nDigite [2] para encerrar\n");
    				scanf("%d",&respUsu);
    				
    				if(respUsu == 1){ // verificaçao do estado
    					printf("\nMuito bem agora digite o nome do estado em que mora:  ");
	    				scanf("%d",&valorIrrelevante);
	    				printf("\nDigite [1] para continuar\n");
	    				printf("\nDigite [2] para encerrar\n");
	    				scanf("%d",&respUsu);
	    				
	    				if(respUsu == 1){ // verificaçao do cidade
	    					printf("\nMuito bem agora digite o nome da sua cidade:  ");	
		    				scanf("%d",&valorIrrelevante);
		    				printf("\nDigite [1] para continuar\n");
		    				printf("\nDigite [2] para encerrar\n");
		    				scanf("%d",&respUsu); 
		    				
		    				if(respUsu == 1){ // verificacao nome rua
		    					printf("\nMuito bem agora digite o nome da sua rua:  ");	
		    					scanf("%d",&valorIrrelevante);
		    					printf("\nDigite [1] para continuar\n");
		    					printf("\nDigite [2] para encerrar\n");
		    					scanf("%d",&respUsu); 
		    					
		    					if(respUsu == 1){ // verificacao nuemro
		    					printf("\nMuito bem agora digite o nuemro da sua residencia:  ");	
		    					scanf("%d",&valorIrrelevante);
		    					printf("\nDigite [1] para continuar\n");
		    					printf("\nDigite [2] para encerrar\n");
		    					scanf("%d",&respUsu);  
		    					
		    					} else if (respUsu == 4){ // se encerrar 
							
									printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
									printf("\nEsperamos que voce tenha um otimo dia!");
									return 1;
						
								} else { // se valor invalido
										
										printf("Ops... Parece que voce digitou um valor invalido :(");
										printf("Sendo assim, o esse atendimento esta sendo encerrado !");
										printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
										printf("\nEsperamos que voce tenha um otimo dia!");
										return 1;
								}	
		    					
							} else if (respUsu == 4){ // se encerrar 
					
							printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
							printf("\nEsperamos que voce tenha um otimo dia!");
							return 1;
				
							} else { // se valor invalido
								
								printf("Ops... Parece que voce digitou um valor invalido :(");
								printf("Sendo assim, o esse atendimento esta sendo encerrado !");
								printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
								printf("\nEsperamos que voce tenha um otimo dia!");
								return 1;
							}	
							
	    					
						} else if (respUsu == 4){ // se encerrar 
					
							printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
							printf("\nEsperamos que voce tenha um otimo dia!");
							return 1;
				
						} else { // se valor invalido
							
							printf("Ops... Parece que voce digitou um valor invalido :(");
							printf("Sendo assim, o esse atendimento esta sendo encerrado !");
							printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
							printf("\nEsperamos que voce tenha um otimo dia!");
							return 1;
						}	
	    				
    					
					} else if (respUsu == 4){ // se encerrar 
					
					printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
					printf("\nEsperamos que voce tenha um otimo dia!");
					return 1;
			
					} else { // se valor invalido
						
						printf("Ops... Parece que voce digitou um valor invalido :(");
						printf("Sendo assim, o esse atendimento esta sendo encerrado !");
						printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
						printf("\nEsperamos que voce tenha um otimo dia!");
						return 1;
					}	
    				
				} else if (respUsu == 4){ // se encerrar 
					
					printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
					printf("\nEsperamos que voce tenha um otimo dia!");
					return 1;
			
				} else { // se valor invalido
					
					printf("Ops... Parece que voce digitou um valor invalido :(");
					printf("Sendo assim, o esse atendimento esta sendo encerrado !");
					printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
					printf("\nEsperamos que voce tenha um otimo dia!");
					return 1;
				}			
				  			
			} else if (respUsu == 4) { // se quiser encerrar
				printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
				printf("\nEsperamos que voce tenha um otimo dia!");
				
			} else { // se valor invalido
				
				printf("Ops... Parece que voce digitou um valor invalido :(");
				printf("Sendo assim, o esse atendimento esta sendo encerrado !");
				printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
				printf("\nEsperamos que voce tenha um otimo dia!");
				return 1;
			}
    		
    			
		
		} else if (respUsu == 2){ // se lendidao
		
		} else if (respUsu == 3){ // se instalacao
			
		} else if (respUsu == 4){ // se encerrar 
			
			printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
			printf("\nEsperamos que voce tenha um otimo dia!");
			return 1;
			
		} else { // se valor invalido
			
			printf("Ops... Parece que voce digitou um valor invalido :(");
			printf("Sendo assim, o esse atendimento esta sendo encerrado !");
			printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
			printf("\nEsperamos que voce tenha um otimo dia!");
			return 1;
		}
    // fim visita tecnica	
	} else if (respUsu == 2){

	} else if (respUsu == 3) {
		
	} else {
		
		printf("\nMuito obrigado por ultilizar o SAC da ATIM :)");
		printf("\nEsperamos que voce tenha um otimo dia!");
		return 1;
	}
  
  system("pause");
  
  // for ( int contador = 1, contador == var.length, contador ++){}
  
	return 0;
}
