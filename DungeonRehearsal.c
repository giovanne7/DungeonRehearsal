#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <conio.h>

int op, e, aleagabs ,dano , ca, vida, opct,apri,b, pontt, inf, l,v;
char x;
time_t t;
int a=0;

struct ini1{
	int vida;
	int ca;
};
struct player{
	int vida;
	int ca;
};



void menup(){
system("cls");
pontt = 0;	
	printf("\n                                                                             ,--.");
	printf("\n                                                                            {    }");
	printf("\n                                                                            K,   }");
	printf("\n                                                                           /  `Y`");
	printf("\n                                                                      _   /   /");
	printf("\n                                                                     {_'-K.__/");
	printf("\n          __________________"); printf("                                          `/-.__L._");
	printf("\n          | 1- JOGAR       |"); printf("                                          /  ' /`\\_}");
	printf("\n          | 2- OPÇÕES      |"); printf("                                         /  ' /     ");
	printf("\n          | 3- COMO JOGAR  |"); printf("                                 ____   /  ' /");
	printf("\n          | 4- CRÉDITOS    |"); printf("                          ,-'~~~~    ~~/  ' /_");
	printf("\n          | 5- SAIR        |"); printf("                        ,'             ``~~~%%',");
	printf("\n          ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"); printf("                        (                     %  Y");
	printf("\n                                                   {                      %% I");
	printf("\n                                                  {      -                 %  `.");
	printf("\n                                                  |       ',                %  )");
	printf("\n                                                  |        |   ,..__      __. Y");
	printf("\n                                                  |    .,_./  Y ' / ^Y   J   )|");
	printf("\n                                                  \\           |' /   |   |   ||");
	printf("\n                                                   \\          L_/    . _ (_,.'(");
	printf("\n                                                    \\,   ,      ^^""' / |      )");
	printf("\n                                                      \\_  \\          /,L]     /");
	printf("\n                                                        '-_`-,       ` `   ./`");
	printf("\n                                                           `-(_            )");
	printf("\n                                                               ^^\\..___,.--`\n");
		
	scanf("%i", &op);
	
	switch(op){
		case 1: op1(); break;
		case 2: op2(); break;
		case 3: op3(); break;
		case 4: op4(); break;
		case 5: break;
		case 6: menup(); break;		
	}	
}

void op1(){	

	struct player p1;
	struct ini1 i1;
if (opct == 0){
		opct = 2;
	}
if (opct == 1){

		i1.vida = 0;
		i1.ca = 8;

		p1.vida = 120;
		p1.ca = 12;
	} else if(opct == 2){
		
		i1.vida = 0;
		i1.ca = 10;

		p1.vida = 105;
		p1.ca = 11;	
	} else if(opct == 3){
		
		i1.vida = 0;
		i1.ca = 12;

		p1.vida = 90;
		p1.ca = 9;
	}
		
	system("cls");

	printf("\n                                                                _.-'`.");
	printf("\n                                                           _|-'_.-'|.`.");
	printf("\n                                                           |:^.-'_.-'`.;.`.");
	printf("\n                                                           | `.'.   ,-'_.-'|");
	printf("\n                                                           |   + '-'.-'   J");
	printf("\n                                        __.            .d88|    `.-'      |");
	printf("\n                                   _.--'_..`.    .d88888888|     |       J'b.");
	printf("\n                                 +:"" ,--'_.|`.`.d88888888888|-.   |    _-.|888b.");
	printf("\n                                | \\ \\-'_.--'_.-+888888888+'  _>F F +:'   `88888bo.");
	printf("\n                                   L \\ +'_.--'   |88888+""'  _.' J J J  `.    +8888888b.");
	printf("\n                                  |  `+'        |8+""'  _.-'    | | |    +    `+8888888._-'.");
	printf("\n                               .d8L  L         J  _.-'        | | |     `.    `+888+^'.-|.`.");
	printf("\n                              d888|  |         J-'            F F F       `.  _.-""_.-'_.+.`.`.");
	printf("\n                             d88888L  L     _.  L            J J J          `|. +'_.-'    `_+ `;");
	printf("\n                              888888J  |  +-'  \\ L         _.-+.|.+.          F `.`.     .-'_.-""J");
	printf("\n                              8888888|  L L\\    \\|     _.-'     '   `.       J    `.`.,-'.-""    |");
	printf("\n                              8888888PL | | \\    `._.-'               `.     |      `..-""      J.b");
	printf("\n                              8888888 |  L L `.    \\     _.-+.          `.   L+`.     |        F88b");
	printf("\n                              8888888  L | |   \\   _..--'_.-|.`.          >-'    `., J        |8888b");
	printf("\n                              8888888  |  L L   +:"" _.--'_.-'.`.`.    _.-'     .-' | |       JY88888b");
	printf("\n                              8888888   L | |   J \\ \\_.-'     `.`.`.-'     _.-'   J J        F Y88888b");
	printf("\n                              Y888888    \\ L L   L \\ `.      _.-'_.-+  _.-'       | |       |   Y88888b");
	printf("\n                              `888888b    \\| |   |  `. \\ _.-'_.-'   |-'          J J       J     Y88888b");
	printf("\n                               Y888888     +'\\   J    \\ '_.-'       F    ,-T""\\   | |    .-'      )888888");
	printf("\n                                Y88888b.      \\   L    +'          J    /  | J  J J  .-'        .d888888");
	printf("\n                                 Y888888b      \\  |    |           |    F  '.|.-'+|-'         .d88888888");
	printf("\n                                  Y888888b      \\ J    |           F   J    -.              .od88888888P");
	printf("\n                                   Y888888b      \\ L   |          J    | .' ` \\d8888888888888888888888P");
	printf("\n                                    Y888888b      \\|   |          |  .-'`.  `\\ `.88888888888888888888P");
	printf("\n                                     Y888888b.     J   |          F-'     \\ ` \\ \\88888888888888888P'");
	printf("\n                                      Y8888888b     L  |         J       d8`.`\\  \\`.8888888888888P'");
	printf("\n                                       Y8888888b    |  |        .+      d8888\\  ` .'  `Y888888P'");
	printf("\n                                       `88888888b   J  |     .-'     .od888888\\.-'");
	printf("\n                                        Y88888888b   \\ |  .-'     d888888888P'");
	printf("\n                                        `888888888b   \\|-'       d888888888P");
	printf("\n                                         `Y88888888b            d8888888P'");
	printf("\n                                           Y88888888bo.      .od88888888   hs");
	printf("\n                                           `8888888888888888888888888888");
	printf("\n                                            Y88888888888888888888888888P");
	printf("\n                                             `Y8888888888888888888888P'");
	printf("\n                                                `Y8888888888888P'\n");
	printf("\n");
	printf("||=============================================================================================================================================================================||\n");
	printf("|| ''O ano é 15012, você é um draconato (meio-dragão) chamado Giovann procurado por sequestrar princesas de reinos vizinhos para leva-las ao seu castelo.                      ||\n");
	printf("||   E dessa vez seu hálito de chamas não foi o suficiente para lhe salvar, a lei finalmente te alcançou pelos seus atos.                                                      ||\n");
	printf("||   E como punição da corte, foi decidido em seu julgamento, que você seria jogado na Masmorra Rehearsal.                                                                     ||\n");
	printf("||   Um lugar conhecido por ser lotada de desafios e inimigos que seria uma sentença de morte para qualquer um, mas você não é qualquer um.                                    ||\n");
	printf("||   Enquanto se recobra sua consciência da pancada que levou dos justiceiros que o capturaram, se lembra de todos os boatos que ouviu sobre esse lugar,                       ||\n");
	printf("||   Sabendo das criaturas que o esperam, só lhe resta tentar fugir dali lutando com todas as suas forças e com o pouco equipamento que encontrar,                             ||\n");
	printf("||   Enquanto se prepara para no fim enfrentar o chefe do lugar, podendo assim finalmente, voltar a liberdade conquistando o seu direito de sequestrar belas donzelas. [...]'' ||\n");
	printf("||=============================================================================================================================================================================||\n");
	printf("\n");
	
	srand((unsigned) time(&t));
		
	printf("Voltar ao menu digite 1\n");
	printf("Continuar digite 2\n");
		scanf("%i", &op);
	switch(op){
		case 1: menup(); break;
		case 2: system("cls");
} if(inf == 1){
	while(0 < 2){

a = 0;
		for(a=1;a<=3;a++){
			if(i1.vida=0){
				dano=0;
			} i1.vida = i1.vida+25;
			while(i1.vida>=0 && p1.vida>=0){
				printf("\n                                         ____        _         ___");
				printf("\n                                        / ___|  __ _| | __ _  |_ _|");
				printf("\n                                        \\___ \\ / _` | |/ _` |  | | ");
				printf("\n                                         ___) | (_| | | (_| |  | | ");
				printf("\n                                        |____/ \\__,_|_|\\__,_| |___|");
				printf("\n");
				printf("\n");
				printf("\n                                    .7");
				printf("\n                                  .'/");
				printf("\n                                 / /");
				printf("\n                                / /");
				printf("\n                               / /");
				printf("\n                              / /");
				printf("\n                             / /");
				printf("\n                            / /");
				printf("\n                           / /");         
				printf("\n                          / /");          
				printf("\n                        __|/");
				printf("\n                      ,-\\__\\\"");
				printf("\n                      |f-""Y\\|""");
				printf("\n                      \\()7L/");
				printf("\n                       cgD                            __ _");
				printf("\n                       |\\(                        .'  Y '>,");
				printf("\n                        \\\\ \\                       / _   _   \\\"");
				printf("\n                         \\\\                       )(_) (_)(|}");
				printf("\n                          \\\\                      {  4A   } /");
				printf("\n                           \\\\                      \\uLuJJ/\\l");
				printf("\n                            \\\\                     |3    p)/");
				printf("\n                             \\\\___ __________      /nnm_n//");
				printf("\n                             c7___-__,__-)\\,__)("".  \\_>-<_/D");
				printf("\n                                        //V     \\_""-._.__G G_c__.");
				printf("\n                                                <""-._>__-,G_.___)\"");
				printf("\n                                               (""-.__.| \\\"<.__.-" "");
				printf("\n                                              |""-.__""\\\\"  "|""-.__.-"".");
				printf("\n                                              (""-.__""." "\\\\""-.__.-"".|");
				printf("\n                                              \\\"-.__""|!|""-.__.-"".)");
				printf("\n                                               ""-.__""\\_|""-.__.-""""./");
				printf("\n                                                "".__"">G>-.__.->""");
				printf("\n                                                    ""  G");
				printf("\n");
				printf("\n");
				printf("\n                                           Selecione uma opção");
				printf("\n");			
							if (i1.vida <= 25 && i1.vida > 15){
								printf("\nVida do Esqueleto %i:||||||||||||||||| %i", a,i1.vida);	
							}
							if (i1.vida <= 15 && i1.vida > 10){
								printf("\nVida do Esqueleto %i:||||||||||||||| %i", a,i1.vida);
							} 
							if(i1.vida <= 10 && i1.vida > 5){
								printf("\nVida do Esqueleto %i:|||||||||| %i", a,i1.vida);
							}
							if(i1.vida <= 5 && i1.vida > 3){
								printf("\nVida do Esqueleto %i:||||| %i", a,i1.vida);
							}   
							if(i1.vida <= 3){
								printf("\nVida do Esqueleto %i:| %i", a,i1.vida);
						    }
							
							if (p1.vida <= 120 && p1.vida > 75){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if (p1.vida <= 75 && p1.vida > 50){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 50 && p1.vida > 25){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 25 && p1.vida > 10){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 10 && p1.vida > 5){
								printf("\nVida do Giovann:    ||||||||||||||| %i", p1.vida);
							} 
							if(p1.vida <= 5 && p1.vida > 1){
								printf("\nVida do Giovann:    |||||||| %i", p1.vida);
							}
							if(p1.vida <= 1){
								printf("\nVida do Giovann:    | %i", p1.vida);
							}
					
				printf("\n                             ____________________"); printf("___________________________");
				printf("\n                             | 1- Golpear Espada|"); printf("3- Defender e Analisar    |");
				printf("\n                             | 2- Usar o Arco   |"); printf("4- Soltar Magia           |");
				printf("\n                             ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"); printf("¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯");
				scanf("%i", &e);
		
				switch(e){
					case 1:
						system("cls");
						aleagabs = rand() % 20 + 1;
						printf("___________________________");
						printf("\nVocê Brande sua espada");
						printf("\n...");
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								}else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
							     	}else {
										printf("\nErrou!!!");
									}
					break;
					case 2:
						system("cls");
						aleagabs = rand() % 20 + 1;
						printf("\n___________________________");
						printf("\nVocê prepara seu Arco");
						printf("\n...");
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								} else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
									} else {
										printf("\nErrou!!!");
									}
						
					break;
					case 3:
						printf("\n___________________________");
						system("cls");
						printf("Entrou em modo defensivo e receberá menos danos!!!");
						printf("\nAnalisando...");
						printf("\nÉ um esqueleto comum, sem fraquezas ou resistências aparentes.");
					break;
					case 4:
						system("cls");
						aleagabs = rand() % 20 + 1;
						printf("\n___________________________");
						printf("\nVocê conjura sua Magia");
						printf("\n...");
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								}else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
									}else{
										printf("\nErrou!!!");	
									}
					break;
				}
	    
		printf("\n___________________________");
		printf("\nVez do esqueleto...");
		printf("\nE ele ataca!!!");
		printf("\n...");
		aleagabs = rand() % 20 + 1;
		if (aleagabs >= 20){
			printf("\nÉ um acerto ATAQUE CRÍTICO");
			dano = rand() % 8 + 9;
			printf("\nDeu %i de dano", dano);
			p1.vida = p1.vida - dano;			
			} else if (aleagabs >= p1.ca){
				printf("\nEle te acertou!!!");
				dano = rand() % 8 + 1;
				if (e = 3){
					dano = dano/2;
				}
				printf("\nO esqueleto deu %i de dano", dano);
				p1.vida = p1.vida - dano;
				} else {
					printf("\nEle Errou!!!");
				}					
			}
		}
		if(p1.vida <= 0){
			printf("\n                         _____ _                 _            _                   ");
			printf("\n                        |  ___(_)_ __ ___     __| | ___      | | ___   __ _  ___  ");
			printf("\n                        | |_  | | '_ ` _ \\   / _` |/ _ \\  _  | |/ _ \\ / _` |/ _ \\ ");
			printf("\n                        |  _| | | | | | | | | (_| |  __/ | |_| | (_) | (_| | (_) |");
			printf("\n                        |_|   |_|_| |_| |_|  \\__,_|\\___|  \\___/ \\___/ \\__, |\\___/ ");
			printf("\n                                                                      |___/       ");

			printf("\n                                     Você foi incapaz e foi derrotado.\n");
			printf("\n                         **** Pontuação Final ****");
			printf("\n                         ****       %i       ****", pontt);
			printf("\nVoltando ao menu...\n");
		
			
			system ("pause");
			menup();
		}	
			
			if(p1.vida <= 30 && p1.vida > 0){
			pontt = pontt + 30 * 100;
			}
			if(p1.vida <= 50 && p1.vida > 30){
			pontt = pontt + 50 * 100;
			}
			if(p1.vida <= 70 && p1.vida > 50){
			pontt = pontt + 70 * 100;
			}
			if(p1.vida <= 100 && p1.vida > 70){
			pontt = pontt + 90 * 100;
			}
	
		printf("\n___________________________");
		printf("\nO combate acabou!!!\n");
		printf("\n");
		system ("pause");
		system ("cls");
		printf("Você tem %i pontos de vida", p1.vida);
		printf("\nApós esse combate você pode fazer as seguintes ações: ");
		printf("\n1 - Melhorar a Espada");
		printf("\n2 - Melhorar o Arco");
		printf("\n3 - Descansar");
		printf("\n4 - Melhorar a Magia\n");
		printf("5 - Sair");
			printf("\n                         **** Pontuação Atual ****");
			printf("\n                         ****       %i       ****", pontt);
		scanf("\n%i", &apri);
		
		switch(apri){
			case 1:{ printf("Você aprimorou sua espada\n");
				break;}
			case 2:{ printf("Você aprimorou seu arco\n");
				break;}	
			case 3:{ printf("Você descansou\n");
				break;}
			case 4:{ printf("Você aprimorou sua magia\n");
				break;}
			case 5:{printf("Pontuação final: %i", pontt);
			return 0;
				break;
			}
		}
		printf("\n");
		system ("pause");
		system("cls");
		if(apri == 3){
			p1.vida = p1.vida+40;
		}
		for(a=1;a<=3;a++){
			if(p1.vida>=100){
				p1.vida = 100;
			}
			if(i1.vida=0){
				dano=0;
			} i1.vida = i1.vida+25;
			while(i1.vida>=0 && p1.vida>=0){
				printf("\n                                         ____        _         ____");
				printf("\n                                        / ___|  __ _| | __ _  |___ \\");
				printf("\n                                        \\___ \\ / _` | |/ _`   __) |");
				printf("\n                                         ___) | (_| | | (_| |  / __/ ");
				printf("\n                                        |____/ \\__,_|_|\\__,_||_____| ");
				printf("\n");
				printf("\n");
				printf("\n                                                   _.--""-.__");
				printf("\n                       .                         ."         ".");
				printf("\n                      / \\    ,^.         /(     Y             |      )\\");
				printf("\n                     /   `---. |--'\\    (  \\__..'--   -   -- -'""-.-'  )");
				printf("\n                     |        :|    `>   '.     l_..-------.._l      .'");
				printf("\n                     |      __l;__ .'      ""-.__.||_.-'v'-._||`""----");
				printf("\n                      \\  .-' | |  `              l._       _.'");
				printf("\n                       \\/    | |                   l`^^'^^'j");
				printf("\n                             | |                _   \\_____/     _");
				printf("\n                             j |               l `--__)-'(__.--' |");
				printf("\n                             | |               | /`---``-----'""1 |  ,-----.");
				printf("\n                             | |               )/  `--' '---'   \\'-'  ___  `-.");
				printf("\n                             | |              //  `-'  '`----'  /  ,-'   I`.  \\");
				printf("\n                           _ L |_            //  `-.-.'`-----' /  /  |   |  `. \\");
				printf("\n                          '._' / \\         _/(   `/   )- ---' ;  /__.J   L.__.\\ :");
				printf("\n                           `._;/7(-.......'  /        ) (     |  |            | |");
				printf("\n                           `._;l _'--------_/        )-'/     :  |___.    _._./ ;");
				printf("\n");
				printf("\n");
				printf("\n                                           Selecione uma opção");
				printf("\n");
							if (i1.vida <= 25 && i1.vida > 15){
								printf("\nVida do Esqueleto %i:||||||||||||||||| %i", a,i1.vida);	
							}
							if (i1.vida <= 15 && i1.vida > 10){
								printf("\nVida do Esqueleto %i:||||||||||||||| %i", a,i1.vida);
							} 
							if(i1.vida <= 10 && i1.vida > 5){
								printf("\nVida do Esqueleto %i:|||||||||| %i", a,i1.vida);
							}
							if(i1.vida <= 5 && i1.vida > 3){
								printf("\nVida do Esqueleto %i:||||| %i", a,i1.vida);
							}   
							if(i1.vida <= 3){
								printf("\nVida do Esqueleto %i:| %i", a,i1.vida);
						    }
							
							if (p1.vida <= 120 && p1.vida > 75){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if (p1.vida <= 75 && p1.vida > 50){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 50 && p1.vida > 25){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 25 && p1.vida > 10){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 10 && p1.vida > 5){
								printf("\nVida do Giovann:    ||||||||||||||| %i", p1.vida);
							} 
							if(p1.vida <= 5 && p1.vida > 1){
								printf("\nVida do Giovann:    |||||||| %i", p1.vida);
							}
							if(p1.vida <= 1){
								printf("\nVida do Giovann:    | %i", p1.vida);
							}				
				printf("\n                             ____________________"); printf("___________________________");
				printf("\n                             | 1- Golpear Espada|"); printf("3- Defender e Analisar    |");
				printf("\n                             | 2- Usar o Arco   |"); printf("4- Soltar Magia           |");
				printf("\n                             ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"); printf("¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯");
				scanf("%i", &e);
		
				switch(e){
					case 1:
						system("cls");
						aleagabs = rand() % 20 + 1;
						if(apri = 1){
							aleagabs = aleagabs + 2;
						}
						printf("___________________________");
						printf("\nVocê Brande sua espada");
						printf("\n...");
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								if (e == 1){
									dano = dano/2;
								}
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								}else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									if (e == 1){
										dano = dano/2;
									}
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
							     	}else {
										printf("\nErrou!!!");
									}
					break;
					case 2:
						system("cls");
						aleagabs = rand() % 20 + 1;
						if(apri == 2){
							aleagabs = rand() % 20 + 2;
						}
						printf("\n___________________________");
						printf("\nVocê prepara seu Arco");
						printf("\n...");
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								if (e == 2){
									dano = dano/2;
								}
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								} else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									if (e == 2){
										dano = dano/2;
									}
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
									} else {
										printf("\nErrou!!!");
									}
						
					break;
					case 3:
						printf("\n___________________________");
						system("cls");
						printf("Entrou em modo defensivo e receberá menos danos!!!");
						printf("\nAnalisando...");
						printf("\nÉ um esqueleto armadurado, ataques físicos parecem ser pouco efetivos.");
					break;
					case 4:
						system("cls");
						aleagabs = rand() % 20 + 1;
						if(apri = 4){
							aleagabs = aleagabs + 2;
						}
						printf("\n___________________________");
						printf("\nVocê conjura sua Magia");
						printf("\n...");
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								if (e == 4){
									dano = dano*2;
								}
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								}else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									if (e == 4){
										dano = dano*2;
									}
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
									}else{
										printf("\nErrou!!!");	
									}
					break;
		}
	    
		printf("\n___________________________");
		printf("\nVez do esqueleto...");
		printf("\nE ele ataca!!!");
		printf("\n...");
		aleagabs = rand() % 20 + 1;
		if (aleagabs >= 20){
			printf("\nÉ um acerto ATAQUE CRÍTICO");
			dano = rand() % 8 + 9;
			printf("\nDeu %i de dano", dano);
			p1.vida = p1.vida - dano;			
			} else if (aleagabs >= p1.ca){
				printf("\nEle te acertou!!!");
				dano = rand() % 8 + 1;
				if (e == 3){
					dano = dano/2;
				}
				printf("\nO esqueleto deu %i de dano", dano);
				p1.vida = p1.vida - dano;
				} else {
					printf("\nEle Errou!!!");
					}
					
			}
		}
		if(p1.vida <= 0){
			printf("\n                         _____ _                 _            _                   ");
			printf("\n                        |  ___(_)_ __ ___     __| | ___      | | ___   __ _  ___  ");
			printf("\n                        | |_  | | '_ ` _ \\   / _` |/ _ \\  _  | |/ _ \\ / _` |/ _ \\ ");
			printf("\n                        |  _| | | | | | | | | (_| |  __/ | |_| | (_) | (_| | (_) |");
			printf("\n                        |_|   |_|_| |_| |_|  \\__,_|\\___|  \\___/ \\___/ \\__, |\\___/ ");
			printf("\n                                                                      |___/       ");

			printf("\n                                     Você foi incapaz e foi derrotado.\n");
			printf("\n                         **** Pontuação Final ****");
			printf("\n                         ****       %i       ****", pontt);
			printf("\nVoltando ao menu...");
			
			system ("pause");
			menup();
		}		
		
				if(p1.vida <= 30 && p1.vida > 0){
			pontt = pontt + 30 * 100;
			}
			if(p1.vida <= 50 && p1.vida > 30){
			pontt = pontt + 50 * 100;
			}
			if(p1.vida <= 70 && p1.vida > 50){
			pontt = pontt + 70 * 100;
			}
			if(p1.vida <= 100 && p1.vida > 70){
			pontt = pontt + 90 * 100;
			}
			
		printf("\n___________________________");
		printf("\nO combate acabou!!!\n");
		printf("\n");
		system ("pause");
		system ("cls");
		printf("Você tem %i pontos de vida", p1.vida);
		printf("\nApós esse combate você pode fazer as seguintes ações: ");
		printf("\n1 - Melhorar a Espada");
		printf("\n2 - Melhorar o Arco");
		printf("\n3 - Descansar");
		printf("\n4 - Melhorar a Magia\n");
		printf("5 - Sair");
			printf("\n                         **** Pontuação Atual ****");
			printf("\n                         ****       %i       ****", pontt);
		scanf("\n%i", &apri);
		switch(apri){
			case 1:{ printf("Você aprimorou sua espada\n");
				break;}
			case 2:{ printf("Você aprimorou seu arco\n");
				break;}	
			case 3:{ printf("Você descansou\n");
				break;}
			case 4:{ printf("Você aprimorou sua magia\n");
				break;}
			case 5:{printf("Pontuação final: %i", pontt);
			return 0;
				break;
			}
		}
		printf("\n");
		system ("pause");
		system("cls");
		if(apri == 3){
			p1.vida = p1.vida+45;
		}
		for(a=1;a<=3;a++){
			if(p1.vida>=100){
				p1.vida = 100;
			}
			if(i1.vida=0){
				dano=0;
			} i1.vida = i1.vida+25;
			while(i1.vida>=0 && p1.vida>=0){
				printf("\n                                      ____        _         _____ ");
				printf("\n                                     / ___|  __ _| | __ _  |___ / ");
				printf("\n                                     \\___ \\ / _` | |/ _` |   |_ \\ ");
				printf("\n                                      ___) | (_| | | (_| |  ___) |");
				printf("\n                                     |____/ \\__,_|_|\\__,_| |____/ ");
				printf("\n");
				printf("\n");
				printf("\n                                 .            )        )");
				printf("\n                                          (  (|              .");
				printf("\n                                      )   )\\/ ( ( (");
				printf("\n                              *  (   ((  /     ))\\))  (  )    )");
				printf("\n                            (     \\   )\\(          |  ))( )  (|");
				printf("\n                            >)     ))/   |          )/  \\((  ) \\");
				printf("\n                            (     (      .        -.     V )/   )(    (");
				printf("\n                             \\   /     .   \\            .       \\))   ))");
				printf("\n                               )(      (  | |   )            .    (  /");
				printf("\n                              )(    ,'))     \\ /          \\( `.    )");
				printf("\n                              (\\>  ,'/__      ))            __`.  /");
				printf("\n                             ( \\   | /  ___   ( \\/     ___   \\ | ( (");
				printf("\n                              \\.)  |/  /   \\__      __/   \\   \\|  ))");
				printf("\n                             .  \\. |>  \\      | __ |      /   <|  /");
				printf("\n                                  )/    \\____/ :..: \\____/     \\ <");
				printf("\n                           )   \\ (|__  .      / ;: \\          __| )  (");
				printf("\n                          ((    )\\)  ~--_     --  --      _--~    /  ))");
				printf("\n                           \\    (    |  ||               ||  |   (  /");
				printf("\n                                 \\.  |  ||_             _||  |  /");
				printf("\n                                   > :  |  ~V+-I_I_I-+V~  |  : (.");
				printf("\n                                  (  \\:  T\\   _     _   /T  : ./");
				printf("\n                                   \\  :    T^T T-+-T T^T    ;<");
				printf("\n                                    \\..`_       -+-       _'  )");
				printf("\n                          )            . `--=.._____..=--'. ./         (");
				printf("\n");
				printf("\n");
				printf("\n                                           Selecione uma opção");
				printf("\n");							
							if (i1.vida <= 25 && i1.vida > 15){
								printf("\nVida do Esqueleto %i:||||||||||||||||| %i", a,i1.vida);	
							}
							if (i1.vida <= 15 && i1.vida > 10){
								printf("\nVida do Esqueleto %i:||||||||||||||| %i", a,i1.vida);
							} 
							if(i1.vida <= 10 && i1.vida > 5){
								printf("\nVida do Esqueleto %i:|||||||||| %i", a,i1.vida);
							}
							if(i1.vida <= 5 && i1.vida > 3){
								printf("\nVida do Esqueleto %i:||||| %i", a,i1.vida);
							}   
							if(i1.vida <= 3){
								printf("\nVida do Esqueleto %i:| %i", a,i1.vida);
						    }
							
							if (p1.vida <= 120 && p1.vida > 75){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if (p1.vida <= 75 && p1.vida > 50){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 50 && p1.vida > 25){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 25 && p1.vida > 10){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 10 && p1.vida > 5){
								printf("\nVida do Giovann:    ||||||||||||||| %i", p1.vida);
							} 
							if(p1.vida <= 5 && p1.vida > 1){
								printf("\nVida do Giovann:    |||||||| %i", p1.vida);
							}
							if(p1.vida <= 1){
								printf("\nVida do Giovann:    | %i", p1.vida);
							}											
				printf("\n                             ____________________"); printf("___________________________");
				printf("\n                             | 1- Golpear Espada|"); printf("3- Defender e Analisar    |");
				printf("\n                             | 2- Usar o Arco   |"); printf("4- Soltar Magia           |");
				printf("\n                             ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"); printf("¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯");
				scanf("%i", &e);
		
				switch(e){
					case 1:
						system("cls");
						aleagabs = rand() % 20 + 1;
						if(apri == 1){
							aleagabs = aleagabs + 2;
						}
						printf("___________________________");
						printf("\nVocê Brande sua espada");
						printf("\n...");
						printf("\nErrou!!!");
						printf("\nO inimigo parecer estar fora de seu alcance");
					break;
					case 2:
						system("cls");
						aleagabs = rand() % 20 + 1;
						if(apri == 2){
							aleagabs = aleagabs + 2;
						}
						printf("\n___________________________");
						printf("\nVocê prepara seu Arco");
						printf("\n...");
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								if (e == 2){
									dano = dano*2;
								}
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								} else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									if (e == 2){
										dano = dano*2;
									}
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
									} else {
										printf("\nErrou!!!");
									}				
					break;
					case 3:
						printf("\n___________________________");
						system("cls");
						printf("Entrou em modo defensivo e receberá menos danos!!!");
						printf("\nAnalisando...");
						printf("\nÉ um esqueleto mágico, ataques físicos a distância parecem altamente efetivos");
					break;
					case 4:
						system("cls");
						aleagabs = rand() % 20 + 1;
						if(apri == 4){
							aleagabs = aleagabs + 2;
						}
						printf("\n___________________________");
						printf("\nVocê conjura sua Magia");
						printf("\n...");
						printf("%i", aleagabs);
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								if (e == 4){
									dano = dano/2;
								}
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								}else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									if (e = 4){
										dano = dano/2;
									}
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
									}else{
										printf("\nErrou!!!");	
									}
					break;
				}
	    
		printf("\n___________________________");
		printf("\nVez do esqueleto...");
		printf("\nE ele ataca!!!");
		printf("\n...");
		aleagabs = rand() % 20 + 1;
		if (aleagabs >= 20){
			printf("\nÉ um acerto ATAQUE CRÍTICO");
			dano = rand() % 8 + 9;
			printf("\nDeu %i de dano", dano);
			p1.vida = p1.vida - dano;			
			} else if (aleagabs >= p1.ca){
				printf("\nEle te acertou!!!");
				dano = rand() % 8 + 1;
				if (e = 3){
					dano = dano/2;
				}
				printf("\nO esqueleto deu %i de dano", dano);
				p1.vida = p1.vida - dano;
				} else {
					printf("\nEle Errou!!!");
				}					
			}
		}
		if(p1.vida <= 0){
		printf("\n                         _____ _                 _            _                   ");
		printf("\n                        |  ___(_)_ __ ___     __| | ___      | | ___   __ _  ___  ");
		printf("\n                        | |_  | | '_ ` _ \\   / _` |/ _ \\  _  | |/ _ \\ / _` |/ _ \\ ");
		printf("\n                        |  _| | | | | | | | | (_| |  __/ | |_| | (_) | (_| | (_) |");
		printf("\n                        |_|   |_|_| |_| |_|  \\__,_|\\___|  \\___/ \\___/ \\__, |\\___/ ");
		printf("\n                                                                      |___/       ");

		printf("\n                                     Você foi incapaz e foi derrotado.\n");
			printf("\n                         **** Pontuação Final ****");
			printf("\n                         ****       %i       ****", pontt);
		printf("\nVoltando ao menu...");
		system ("pause");
		menup();
		}	
	
			if(p1.vida <= 30 && p1.vida > 0){
			pontt = pontt + 30 * 100;
			}
			if(p1.vida <= 50 && p1.vida > 30){
			pontt = pontt + 50 * 100;
			}
			if(p1.vida <= 70 && p1.vida > 50){
			pontt = pontt + 70 * 100;
			}
			if(p1.vida <= 100 && p1.vida > 70){
			pontt = pontt + 90 * 100;
			}
			
		printf("\n___________________________");
		printf("\nO combate acabou!!!\n");
		printf("\n");
		system ("pause");
		system ("cls");
		printf("Você tem %i pontos de vida", p1.vida);
		printf("\nApós esse combate você pode fazer as seguintes ações: ");
		printf("\n1 - Descansar\n");
		printf("2 - Sair");
			printf("\n                         **** Pontuação Atual ****");
			printf("\n                         ****       %i       ****", pontt);
		scanf("\n%i", &apri);
		switch(apri){
			case 1:{ printf("Você descansou\n");
				break;}
			case 2:{printf("Pontuação final: %i", pontt);
			return 0;
				break;
			}
			}
		}
		






















	
}else{

		a = 0;
		for(a=1;a<=3;a++){
			if(i1.vida=0){
				dano=0;
			} i1.vida = i1.vida+25;
			while(i1.vida>=0 && p1.vida>=0){
				printf("\n                                         ____        _         ___");
				printf("\n                                        / ___|  __ _| | __ _  |_ _|");
				printf("\n                                        \\___ \\ / _` | |/ _` |  | | ");
				printf("\n                                         ___) | (_| | | (_| |  | | ");
				printf("\n                                        |____/ \\__,_|_|\\__,_| |___|");
				printf("\n");
				printf("\n");
				printf("\n                                    .7");
				printf("\n                                  .'/");
				printf("\n                                 / /");
				printf("\n                                / /");
				printf("\n                               / /");
				printf("\n                              / /");
				printf("\n                             / /");
				printf("\n                            / /");
				printf("\n                           / /");         
				printf("\n                          / /");          
				printf("\n                        __|/");
				printf("\n                      ,-\\__\\\"");
				printf("\n                      |f-""Y\\|""");
				printf("\n                      \\()7L/");
				printf("\n                       cgD                            __ _");
				printf("\n                       |\\(                        .'  Y '>,");
				printf("\n                        \\\\ \\                       / _   _   \\\"");
				printf("\n                         \\\\                       )(_) (_)(|}");
				printf("\n                          \\\\                      {  4A   } /");
				printf("\n                           \\\\                      \\uLuJJ/\\l");
				printf("\n                            \\\\                     |3    p)/");
				printf("\n                             \\\\___ __________      /nnm_n//");
				printf("\n                             c7___-__,__-)\\,__)("".  \\_>-<_/D");
				printf("\n                                        //V     \\_""-._.__G G_c__.");
				printf("\n                                                <""-._>__-,G_.___)\"");
				printf("\n                                               (""-.__.| \\\"<.__.-" "");
				printf("\n                                              |""-.__""\\\\"  "|""-.__.-"".");
				printf("\n                                              (""-.__""." "\\\\""-.__.-"".|");
				printf("\n                                              \\\"-.__""|!|""-.__.-"".)");
				printf("\n                                               ""-.__""\\_|""-.__.-""""./");
				printf("\n                                                "".__"">G>-.__.->""");
				printf("\n                                                    ""  G");
				printf("\n");
				printf("\n");
				printf("\n                                           Selecione uma opção");
				printf("\n");			
							if (i1.vida <= 25 && i1.vida > 15){
								printf("\nVida do Esqueleto %i:||||||||||||||||| %i", a,i1.vida);	
							}
							if (i1.vida <= 15 && i1.vida > 10){
								printf("\nVida do Esqueleto %i:||||||||||||||| %i", a,i1.vida);
							} 
							if(i1.vida <= 10 && i1.vida > 5){
								printf("\nVida do Esqueleto %i:|||||||||| %i", a,i1.vida);
							}
							if(i1.vida <= 5 && i1.vida > 3){
								printf("\nVida do Esqueleto %i:||||| %i", a,i1.vida);
							}   
							if(i1.vida <= 3){
								printf("\nVida do Esqueleto %i:| %i", a,i1.vida);
						    }
							
							if (p1.vida <= 120 && p1.vida > 75){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if (p1.vida <= 75 && p1.vida > 50){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 50 && p1.vida > 25){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 25 && p1.vida > 10){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 10 && p1.vida > 5){
								printf("\nVida do Giovann:    ||||||||||||||| %i", p1.vida);
							} 
							if(p1.vida <= 5 && p1.vida > 1){
								printf("\nVida do Giovann:    |||||||| %i", p1.vida);
							}
							if(p1.vida <= 1){
								printf("\nVida do Giovann:    | %i", p1.vida);
							}
					
				printf("\n                             ____________________"); printf("___________________________");
				printf("\n                             | 1- Golpear Espada|"); printf("3- Defender e Analisar    |");
				printf("\n                             | 2- Usar o Arco   |"); printf("4- Soltar Magia           |");
				printf("\n                             ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"); printf("¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯");
				scanf("%i", &e);
		
				switch(e){
					case 1:
						system("cls");
						aleagabs = rand() % 20 + 1;
						printf("___________________________");
						printf("\nVocê Brande sua espada");
						printf("\n...");
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								}else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
							     	}else {
										printf("\nErrou!!!");
									}
					break;
					case 2:
						system("cls");
						aleagabs = rand() % 20 + 1;
						printf("\n___________________________");
						printf("\nVocê prepara seu Arco");
						printf("\n...");
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								} else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
									} else {
										printf("\nErrou!!!");
									}
						
					break;
					case 3:
						printf("\n___________________________");
						system("cls");
						printf("Entrou em modo defensivo e receberá menos danos!!!");
						printf("\nAnalisando...");
						printf("\nÉ um esqueleto comum, sem fraquezas ou resistências aparentes.");
					break;
					case 4:
						system("cls");
						aleagabs = rand() % 20 + 1;
						printf("\n___________________________");
						printf("\nVocê conjura sua Magia");
						printf("\n...");
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								}else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
									}else{
										printf("\nErrou!!!");	
									}
					break;
				}
	    
		printf("\n___________________________");
		printf("\nVez do esqueleto...");
		printf("\nE ele ataca!!!");
		printf("\n...");
		aleagabs = rand() % 20 + 1;
		if (aleagabs >= 20){
			printf("\nÉ um acerto ATAQUE CRÍTICO");
			dano = rand() % 8 + 9;
			printf("\nDeu %i de dano", dano);
			p1.vida = p1.vida - dano;			
			} else if (aleagabs >= p1.ca){
				printf("\nEle te acertou!!!");
				dano = rand() % 8 + 1;
				if (e = 3){
					dano = dano/2;
				}
				printf("\nO esqueleto deu %i de dano", dano);
				p1.vida = p1.vida - dano;
				} else {
					printf("\nEle Errou!!!");
				}					
			}
		}
		if(p1.vida <= 0){
			printf("\n                         _____ _                 _            _                   ");
			printf("\n                        |  ___(_)_ __ ___     __| | ___      | | ___   __ _  ___  ");
			printf("\n                        | |_  | | '_ ` _ \\   / _` |/ _ \\  _  | |/ _ \\ / _` |/ _ \\ ");
			printf("\n                        |  _| | | | | | | | | (_| |  __/ | |_| | (_) | (_| | (_) |");
			printf("\n                        |_|   |_|_| |_| |_|  \\__,_|\\___|  \\___/ \\___/ \\__, |\\___/ ");
			printf("\n                                                                      |___/       ");

			printf("\n                                     Você foi incapaz e foi derrotado.\n");
			printf("\n                         **** Pontuação Final ****");
			printf("\n                         ****       %i       ****", pontt);
			printf("\nVoltando ao menu...");
		
			
			system ("pause");
			menup();
		}	
			
			if(p1.vida <= 30 && p1.vida > 0){
			pontt = pontt + 30 * 100;
			}
			if(p1.vida <= 50 && p1.vida > 30){
			pontt = pontt + 50 * 100;
			}
			if(p1.vida <= 70 && p1.vida > 50){
			pontt = pontt + 70 * 100;
			}
			if(p1.vida <= 100 && p1.vida > 70){
			pontt = pontt + 90 * 100;
			}
	
		printf("\n___________________________");
		printf("\nO combate acabou!!!\n");
		printf("\n");
		system ("pause");
		system ("cls");
		printf("Você tem %i pontos de vida", p1.vida);
		printf("\nApós esse combate você pode fazer as seguintes ações: ");
		printf("\n1 - Melhorar a Espada");
		printf("\n2 - Melhorar o Arco");
		printf("\n3 - Descansar");
		printf("\n4 - Melhorar a Magia\n");
			printf("\n                         **** Pontuação Atual ****");
			printf("\n                         ****       %i       ****", pontt);
		scanf("\n%i", &apri);
		
		switch(apri){
			case 1:{ printf("Você aprimorou sua espada\n");
				break;}
			case 2:{ printf("Você aprimorou seu arco\n");
				break;}	
			case 3:{ printf("Você descansou\n");
				break;}
			case 4:{ printf("Você aprimorou sua magia\n");
				break;}
		}
		printf("\n");
		system ("pause");
		system("cls");
		if(apri == 3){
			p1.vida = p1.vida+40;
		}
		for(a=1;a<=3;a++){
			if(p1.vida>=100){
				p1.vida = 100;
			}
			if(i1.vida=0){
				dano=0;
			} i1.vida = i1.vida+25;
			while(i1.vida>=0 && p1.vida>=0){
				printf("\n                                         ____        _         ____");
				printf("\n                                        / ___|  __ _| | __ _  |___ \\");
				printf("\n                                        \\___ \\ / _` | |/ _`   __) |");
				printf("\n                                         ___) | (_| | | (_| |  / __/ ");
				printf("\n                                        |____/ \\__,_|_|\\__,_||_____| ");
				printf("\n");
				printf("\n");
				printf("\n                                                   _.--""-.__");
				printf("\n                       .                         ."         ".");
				printf("\n                      / \\    ,^.         /(     Y             |      )\\");
				printf("\n                     /   `---. |--'\\    (  \\__..'--   -   -- -'""-.-'  )");
				printf("\n                     |        :|    `>   '.     l_..-------.._l      .'");
				printf("\n                     |      __l;__ .'      ""-.__.||_.-'v'-._||`""----");
				printf("\n                      \\  .-' | |  `              l._       _.'");
				printf("\n                       \\/    | |                   l`^^'^^'j");
				printf("\n                             | |                _   \\_____/     _");
				printf("\n                             j |               l `--__)-'(__.--' |");
				printf("\n                             | |               | /`---``-----'""1 |  ,-----.");
				printf("\n                             | |               )/  `--' '---'   \\'-'  ___  `-.");
				printf("\n                             | |              //  `-'  '`----'  /  ,-'   I`.  \\");
				printf("\n                           _ L |_            //  `-.-.'`-----' /  /  |   |  `. \\");
				printf("\n                          '._' / \\         _/(   `/   )- ---' ;  /__.J   L.__.\\ :");
				printf("\n                           `._;/7(-.......'  /        ) (     |  |            | |");
				printf("\n                           `._;l _'--------_/        )-'/     :  |___.    _._./ ;");
				printf("\n");
				printf("\n");
				printf("\n                                           Selecione uma opção");
				printf("\n");
							if (i1.vida <= 25 && i1.vida > 15){
								printf("\nVida do Esqueleto %i:||||||||||||||||| %i", a,i1.vida);	
							}
							if (i1.vida <= 15 && i1.vida > 10){
								printf("\nVida do Esqueleto %i:||||||||||||||| %i", a,i1.vida);
							} 
							if(i1.vida <= 10 && i1.vida > 5){
								printf("\nVida do Esqueleto %i:|||||||||| %i", a,i1.vida);
							}
							if(i1.vida <= 5 && i1.vida > 3){
								printf("\nVida do Esqueleto %i:||||| %i", a,i1.vida);
							}   
							if(i1.vida <= 3){
								printf("\nVida do Esqueleto %i:| %i", a,i1.vida);
						    }
							
							if (p1.vida <= 120 && p1.vida > 75){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if (p1.vida <= 75 && p1.vida > 50){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 50 && p1.vida > 25){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 25 && p1.vida > 10){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 10 && p1.vida > 5){
								printf("\nVida do Giovann:    ||||||||||||||| %i", p1.vida);
							} 
							if(p1.vida <= 5 && p1.vida > 1){
								printf("\nVida do Giovann:    |||||||| %i", p1.vida);
							}
							if(p1.vida <= 1){
								printf("\nVida do Giovann:    | %i", p1.vida);
							}				
				printf("\n                             ____________________"); printf("___________________________");
				printf("\n                             | 1- Golpear Espada|"); printf("3- Defender e Analisar    |");
				printf("\n                             | 2- Usar o Arco   |"); printf("4- Soltar Magia           |");
				printf("\n                             ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"); printf("¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯");
				scanf("%i", &e);
		
				switch(e){
					case 1:
						system("cls");
						aleagabs = rand() % 20 + 1;
						if(apri = 1){
							aleagabs = aleagabs + 2;
						}
						printf("___________________________");
						printf("\nVocê Brande sua espada");
						printf("\n...");
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								if (e == 1){
									dano = dano/2;
								}
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								}else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									if (e == 1){
										dano = dano/2;
									}
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
							     	}else {
										printf("\nErrou!!!");
									}
					break;
					case 2:
						system("cls");
						aleagabs = rand() % 20 + 1;
						if(apri == 2){
							aleagabs = rand() % 20 + 2;
						}
						printf("\n___________________________");
						printf("\nVocê prepara seu Arco");
						printf("\n...");
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								if (e == 2){
									dano = dano/2;
								}
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								} else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									if (e == 2){
										dano = dano/2;
									}
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
									} else {
										printf("\nErrou!!!");
									}
						
					break;
					case 3:
						printf("\n___________________________");
						system("cls");
						printf("Entrou em modo defensivo e receberá menos danos!!!");
						printf("\nAnalisando...");
						printf("\nÉ um esqueleto armadurado, ataques físicos parecem ser pouco efetivos.");
					break;
					case 4:
						system("cls");
						aleagabs = rand() % 20 + 1;
						if(apri = 4){
							aleagabs = aleagabs + 2;
						}
						printf("\n___________________________");
						printf("\nVocê conjura sua Magia");
						printf("\n...");
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								if (e == 4){
									dano = dano*2;
								}
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								}else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									if (e == 4){
										dano = dano*2;
									}
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
									}else{
										printf("\nErrou!!!");	
									}
					break;
		}
	    
		printf("\n___________________________");
		printf("\nVez do esqueleto...");
		printf("\nE ele ataca!!!");
		printf("\n...");
		aleagabs = rand() % 20 + 1;
		if (aleagabs >= 20){
			printf("\nÉ um acerto ATAQUE CRÍTICO");
			dano = rand() % 8 + 9;
			printf("\nDeu %i de dano", dano);
			p1.vida = p1.vida - dano;			
			} else if (aleagabs >= p1.ca){
				printf("\nEle te acertou!!!");
				dano = rand() % 8 + 1;
				if (e == 3){
					dano = dano/2;
				}
				printf("\nO esqueleto deu %i de dano", dano);
				p1.vida = p1.vida - dano;
				} else {
					printf("\nEle Errou!!!");
					}
					
			}
		}
		if(p1.vida <= 0){
			printf("\n                         _____ _                 _            _                   ");
			printf("\n                        |  ___(_)_ __ ___     __| | ___      | | ___   __ _  ___  ");
			printf("\n                        | |_  | | '_ ` _ \\   / _` |/ _ \\  _  | |/ _ \\ / _` |/ _ \\ ");
			printf("\n                        |  _| | | | | | | | | (_| |  __/ | |_| | (_) | (_| | (_) |");
			printf("\n                        |_|   |_|_| |_| |_|  \\__,_|\\___|  \\___/ \\___/ \\__, |\\___/ ");
			printf("\n                                                                      |___/       ");

			printf("\n                                     Você foi incapaz e foi derrotado.\n");
			printf("\n                         **** Pontuação Final ****");
			printf("\n                         ****       %i       ****", pontt);
			printf("\nVoltando ao menu...");
			
			system ("pause");
			menup();
		}		
		
				if(p1.vida <= 30 && p1.vida > 0){
			pontt = pontt + 30 * 100;
			}
			if(p1.vida <= 50 && p1.vida > 30){
			pontt = pontt + 50 * 100;
			}
			if(p1.vida <= 70 && p1.vida > 50){
			pontt = pontt + 70 * 100;
			}
			if(p1.vida <= 100 && p1.vida > 70){
			pontt = pontt + 90 * 100;
			}
			
		printf("\n___________________________");
		printf("\nO combate acabou!!!\n");
		printf("\n");
		system ("pause");
		system ("cls");
		printf("Você tem %i pontos de vida", p1.vida);
		printf("\nApós esse combate você pode fazer as seguintes ações: ");
		printf("\n1 - Melhorar a Espada");
		printf("\n2 - Melhorar o Arco");
		printf("\n3 - Descansar");
		printf("\n4 - Melhorar a Magia\n");
			printf("\n                         **** Pontuação Atual ****");
			printf("\n                         ****       %i       ****", pontt);
		scanf("\n%i", &apri);
		switch(apri){
			case 1:{ printf("Você aprimorou sua espada\n");
				break;}
			case 2:{ printf("Você aprimorou seu arco\n");
				break;}	
			case 3:{ printf("Você descansou\n");
				break;}
			case 4:{ printf("Você aprimorou sua magia\n");
				break;}
		}
		printf("\n");
		system ("pause");
		system("cls");
		if(apri == 3){
			p1.vida = p1.vida+45;
		}
		for(a=1;a<=3;a++){
			if(p1.vida>=100){
				p1.vida = 100;
			}
			if(i1.vida=0){
				dano=0;
			} i1.vida = i1.vida+25;
			while(i1.vida>=0 && p1.vida>=0){
				printf("\n                                      ____        _         _____ ");
				printf("\n                                     / ___|  __ _| | __ _  |___ / ");
				printf("\n                                     \\___ \\ / _` | |/ _` |   |_ \\ ");
				printf("\n                                      ___) | (_| | | (_| |  ___) |");
				printf("\n                                     |____/ \\__,_|_|\\__,_| |____/ ");
				printf("\n");
				printf("\n");
				printf("\n                                 .            )        )");
				printf("\n                                          (  (|              .");
				printf("\n                                      )   )\\/ ( ( (");
				printf("\n                              *  (   ((  /     ))\\))  (  )    )");
				printf("\n                            (     \\   )\\(          |  ))( )  (|");
				printf("\n                            >)     ))/   |          )/  \\((  ) \\");
				printf("\n                            (     (      .        -.     V )/   )(    (");
				printf("\n                             \\   /     .   \\            .       \\))   ))");
				printf("\n                               )(      (  | |   )            .    (  /");
				printf("\n                              )(    ,'))     \\ /          \\( `.    )");
				printf("\n                              (\\>  ,'/__      ))            __`.  /");
				printf("\n                             ( \\   | /  ___   ( \\/     ___   \\ | ( (");
				printf("\n                              \\.)  |/  /   \\__      __/   \\   \\|  ))");
				printf("\n                             .  \\. |>  \\      | __ |      /   <|  /");
				printf("\n                                  )/    \\____/ :..: \\____/     \\ <");
				printf("\n                           )   \\ (|__  .      / ;: \\          __| )  (");
				printf("\n                          ((    )\\)  ~--_     --  --      _--~    /  ))");
				printf("\n                           \\    (    |  ||               ||  |   (  /");
				printf("\n                                 \\.  |  ||_             _||  |  /");
				printf("\n                                   > :  |  ~V+-I_I_I-+V~  |  : (.");
				printf("\n                                  (  \\:  T\\   _     _   /T  : ./");
				printf("\n                                   \\  :    T^T T-+-T T^T    ;<");
				printf("\n                                    \\..`_       -+-       _'  )");
				printf("\n                          )            . `--=.._____..=--'. ./         (");
				printf("\n");
				printf("\n");
				printf("\n                                           Selecione uma opção");
				printf("\n");							
							if (i1.vida <= 25 && i1.vida > 15){
								printf("\nVida do Esqueleto %i:||||||||||||||||| %i", a,i1.vida);	
							}
							if (i1.vida <= 15 && i1.vida > 10){
								printf("\nVida do Esqueleto %i:||||||||||||||| %i", a,i1.vida);
							} 
							if(i1.vida <= 10 && i1.vida > 5){
								printf("\nVida do Esqueleto %i:|||||||||| %i", a,i1.vida);
							}
							if(i1.vida <= 5 && i1.vida > 3){
								printf("\nVida do Esqueleto %i:||||| %i", a,i1.vida);
							}   
							if(i1.vida <= 3){
								printf("\nVida do Esqueleto %i:| %i", a,i1.vida);
						    }
							
							if (p1.vida <= 120 && p1.vida > 75){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if (p1.vida <= 75 && p1.vida > 50){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 50 && p1.vida > 25){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 25 && p1.vida > 10){
								printf("\nVida do Giovann:    |||||||||||||||||||||||||||||| %i", p1.vida);
							}
							if(p1.vida <= 10 && p1.vida > 5){
								printf("\nVida do Giovann:    ||||||||||||||| %i", p1.vida);
							} 
							if(p1.vida <= 5 && p1.vida > 1){
								printf("\nVida do Giovann:    |||||||| %i", p1.vida);
							}
							if(p1.vida <= 1){
								printf("\nVida do Giovann:    | %i", p1.vida);
							}											
				printf("\n                             ____________________"); printf("___________________________");
				printf("\n                             | 1- Golpear Espada|"); printf("3- Defender e Analisar    |");
				printf("\n                             | 2- Usar o Arco   |"); printf("4- Soltar Magia           |");
				printf("\n                             ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"); printf("¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯");
				scanf("%i", &e);
		
				switch(e){
					case 1:
						system("cls");
						aleagabs = rand() % 20 + 1;
						if(apri == 1){
							aleagabs = aleagabs + 2;
						}
						printf("___________________________");
						printf("\nVocê Brande sua espada");
						printf("\n...");
						printf("\nErrou!!!");
						printf("\nO inimigo parecer estar fora de seu alcance");
					break;
					case 2:
						system("cls");
						aleagabs = rand() % 20 + 1;
						if(apri == 2){
							aleagabs = aleagabs + 2;
						}
						printf("\n___________________________");
						printf("\nVocê prepara seu Arco");
						printf("\n...");
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								if (e == 2){
									dano = dano*2;
								}
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								} else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									if (e == 2){
										dano = dano*2;
									}
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
									} else {
										printf("\nErrou!!!");
									}				
					break;
					case 3:
						printf("\n___________________________");
						system("cls");
						printf("Entrou em modo defensivo e receberá menos danos!!!");
						printf("\nAnalisando...");
						printf("\nÉ um esqueleto mágico, ataques físicos a distância parecem altamente efetivos");
					break;
					case 4:
						system("cls");
						aleagabs = rand() % 20 + 1;
						if(apri == 4){
							aleagabs = aleagabs + 2;
						}
						printf("\n___________________________");
						printf("\nVocê conjura sua Magia");
						printf("\n...");
						printf("%i", aleagabs);
							if (aleagabs >= 20){
								printf("\nVocê acertou um ATAQUE CRÍTICO");
								dano = rand() % 12 + 13;
								if (e == 4){
									dano = dano/2;
								}
								printf("\nDeu %i de dano", dano);
								i1.vida = i1.vida - dano;
								}else if (aleagabs >= i1.ca){
									printf("\nVocê acertou!!!");
									dano = rand() % 12 + 1;
									if (e = 4){
										dano = dano/2;
									}
									printf("\nDeu %i de dano", dano);
									i1.vida = i1.vida - dano;
									}else{
										printf("\nErrou!!!");	
									}
					break;
				}
	    
		printf("\n___________________________");
		printf("\nVez do esqueleto...");
		printf("\nE ele ataca!!!");
		printf("\n...");
		aleagabs = rand() % 20 + 1;
		if (aleagabs >= 20){
			printf("\nÉ um acerto ATAQUE CRÍTICO");
			dano = rand() % 8 + 9;
			printf("\nDeu %i de dano", dano);
			p1.vida = p1.vida - dano;			
			} else if (aleagabs >= p1.ca){
				printf("\nEle te acertou!!!");
				dano = rand() % 8 + 1;
				if (e = 3){
					dano = dano/2;
				}
				printf("\nO esqueleto deu %i de dano", dano);
				p1.vida = p1.vida - dano;
				} else {
					printf("\nEle Errou!!!");
				}					
			}
		}
		if(p1.vida <= 0){
		printf("\n                         _____ _                 _            _                   ");
		printf("\n                        |  ___(_)_ __ ___     __| | ___      | | ___   __ _  ___  ");
		printf("\n                        | |_  | | '_ ` _ \\   / _` |/ _ \\  _  | |/ _ \\ / _` |/ _ \\ ");
		printf("\n                        |  _| | | | | | | | | (_| |  __/ | |_| | (_) | (_| | (_) |");
		printf("\n                        |_|   |_|_| |_| |_|  \\__,_|\\___|  \\___/ \\___/ \\__, |\\___/ ");
		printf("\n                                                                      |___/       ");

		printf("\n                                     Você foi incapaz e foi derrotado.\n");
			printf("\n                         **** Pontuação Final ****");
			printf("\n                         ****       %i       ****", pontt);
		printf("\nVoltando ao menu...");
		system ("pause");
		menup();
		}	
	
			if(p1.vida <= 30 && p1.vida > 0){
			pontt = pontt + 30 * 100;
			}
			if(p1.vida <= 50 && p1.vida > 30){
			pontt = pontt + 50 * 100;
			}
			if(p1.vida <= 70 && p1.vida > 50){
			pontt = pontt + 70 * 100;
			}
			if(p1.vida <= 100 && p1.vida > 70){
			pontt = pontt + 90 * 100;
			}
			
		printf("\n___________________________");
		printf("\nO combate acabou!!!\n");
		printf("\n");
		system ("pause");
		system ("cls");
		printf("Você tem %i pontos de vida", p1.vida);
		printf("\nApós esse combate você pode fazer as seguintes ações: ");
		printf("\n1 - Fazer um longo descanso");
			printf("\n                         **** Pontuação Atual ****");
			printf("\n                         ****       %i       ****", pontt);
		scanf("\n%i", &apri);
		switch(apri){
			case 1:{ printf("Você descansou\n");
				break;}
		}
		printf("\n");
		system ("pause");
		system("cls");
		if(apri == 1){
			p1.vida = p1.vida+50;
		}
		if(p1.vida > 100){
			p1.vida = 100;
		}			
		int vidab = 150;
		int cab = 12;
		int furiab = 0; 
        while(vidab >0 && p1.vida>=0){
			printf("\n                                                                        ,--,  ,.-.");
			printf("\n                                           ,                    \\,       '-,-`,'-.' | ._");
			printf("\n                                          /|         \\   ,/    |\\         }  )/  / `-,',");
			printf("\n                                         [ ,         |\\_ /|     | |        /  \|  |/`  ,`");
			printf("\n                                         | |      ,.`  `,` `,  | |  _,...(   (      .',");
			printf("\n                                         \\  \\  __ ,-` `  ,  , `/ |,'      Y     (   /_L\\""");
			printf("\n                                          \\  \\_\\,``,   ` , ,  /  |         )         _,/""");
			printf("\n                                           \\  '  `  ,_ _`_,-,<._.<        /         /""");
			printf("\n                                            ', `>.,`  `  `   ,., |_      |         /""");
			printf("\n                                              \\/`  `,   `   ,`  | /__,.-`    _,   `\\""");
			printf("\n                                          -,-..\\  _  \\  `  / _ ,  / `._) _,-\\`       \\""");
			printf("\n                                           \_,,.)  /\\   ` /  / ) (-,, ``    ,        |""");
			printf("\n                                          ,` )  | \\_\\       '-`  |  `(               \\""");
			printf("\n                                         /  /```(   , --, ,' \    |`<`   ,            |""");
			printf("\n                                        /  /_,--`\\   <\\  V /> ,` )<_/)  | \\      _____)""");
			printf("\n                                  ,-, ,`   `   (_,\\ \\    |   /) / __/  /   `----`");
			printf("\n                                 (-, \           ) \\ ('_ .-.  _)/ /,`    /");
			printf("\n                                 |/  `           `/ \\\\ V   V, /`     /");
			printf("\n                              ,--\(        ,     <_/`\\\\      ||     /");
			printf("\n                             (   ,``-     \\/|        \\\\-A.A-`|     /");
			printf("\n                            ,>,_ )_,..(    )\          -,,__-`  _--`");
			printf("\n                           (_ \\|`   _,/_  /  \\_            ,--`");
			printf("\n                            \\( `   <.,../`    `-.._   _,-`");
			printf("\n");
			printf("\n                                           Selecione uma opção");
			printf("\n");			
			if(vidab <= 150 && vidab > 140){
				printf("\nVida do Dragão: |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", vidab);	
			}
			if(vidab <= 140 && vidab > 130){
				printf("\nVida do Dragão: |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", vidab);
			} 
			if(vidab <= 130 && vidab > 120){
				printf("\nVida do Dragão: |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", vidab);
			}
			if(vidab <= 120 && vidab > 110){
				printf("\nVida do Dragão: |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", vidab);
			}   
			if(vidab <= 110 && vidab > 100){
				printf("\nVida do Dragão: |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", vidab);
			}
			if(vidab <= 100 && vidab > 90){
				printf("\nVida do Dragão: |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", vidab);
			}
			if(vidab <= 90 && vidab > 80){
				printf("\nVida do Dragão: |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", vidab);
			}	
			if(vidab <= 80 && vidab > 70){
				printf("\nVida do Dragão: |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", vidab);
			}	
			if(vidab <= 70 && vidab > 60){
				printf("\nVida do Dragão: |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", vidab);
			}
			if(vidab <= 60 && vidab > 50){
				printf("\nVida do Dragão: |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", vidab);
			}
			if(vidab <= 50 && vidab > 40){
				printf("\nVida do Dragão: |||||||||||||||||||||||||||||||||||||||||||||||||| %i", vidab);
			}
			if(vidab <= 40 && vidab > 30){
				printf("\nVida do Dragão: |||||||||||||||||||||||||||||||||||||||| %i", vidab);
			}
			if(vidab <= 30 && vidab > 20){
				printf("\nVida do Dragão: |||||||||||||||||||||||||||||| %i", vidab);
			}
			if(vidab <= 20 && vidab > 10){
				printf("\nVida do Dragão: ||||||||||||||||||| %i", vidab);
			}
			if(vidab <= 10 && vidab > 5){
				printf("\nVida do Dragão: ||||||||| %i", vidab);
			}
			if(vidab < 5){
				printf("\nVida do Dragão: | %i", vidab);
			}
						
			if (p1.vida <= 155 && p1.vida > 75){
				printf("\nVida do Giovann: |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
			}
			if (p1.vida <= 75 && p1.vida > 50){
				printf("\nVida do Giovann: |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
			}
			if(p1.vida <= 50 && p1.vida > 25){
				printf("\nVida do Giovann: |||||||||||||||||||||||||||||||||||||||| %i", p1.vida);
			}
			if(p1.vida <= 25 && p1.vida > 10){
				printf("\nVida do Giovann: |||||||||||||||||||||||||||||| %i", p1.vida);
			}
			if(p1.vida <= 10 && p1.vida > 5){
				printf("\nVida do Giovann: ||||||||||||||| %i", p1.vida);
			} 
			if(p1.vida <= 5 && p1.vida > 1){
				printf("\nVida do Giovann: |||||||| %i", p1.vida);
			}
			if(p1.vida <= 1){
				printf("\nVida do Giovann: | %i", p1.vida);
			}
					
			printf("\n                             ____________________"); printf("___________________________");
			printf("\n                             | 1- Golpear Espada|"); printf("3- Defender e Analisar    |");
			printf("\n                             | 2- Usar o Arco   |"); printf("4- Soltar Magia           |");
			printf("\n                             ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"); printf("¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯");
			scanf("%i", &e);
		
			switch(e){
				case 1:
					system("cls");
					aleagabs = rand() % 20 + 3;
					printf("___________________________");
					printf("\nVocê Brande sua espada");
					printf("\n...");
						if (aleagabs >= 20){
							printf("\nVocê acertou um ATAQUE CRÍTICO");
							dano = rand() % 12 + 13;
							printf("\nDeu %i de dano", dano);
							vidab = vidab - dano;
							}else if (aleagabs >= cab){
								printf("\nVocê acertou!!!");
								dano = rand() % 12 + 1;
								printf("\nDeu %i de dano", dano);
								vidab = vidab - dano;
						    	}else {
									printf("\nErrou!!!");
								}
				break;
				case 2:
					system("cls");
					aleagabs = rand() % 20 + 3;
					printf("\n___________________________");
					printf("\nVocê prepara seu Arco");
					printf("\n...");
						if (aleagabs >= 20){
							printf("\nVocê acertou um ATAQUE CRÍTICO");
							dano = rand() % 12 + 13;
							printf("\nDeu %i de dano", dano);
							vidab = vidab - dano;
							}else if (aleagabs >= cab){
								printf("\nVocê acertou!!!");
								dano = rand() % 12 + 1;
								printf("\nDeu %i de dano", dano);
								vidab = vidab - dano;
								}else {
									printf("\nErrou!!!");
								}						
				break;
				case 3:
					printf("\n___________________________");
					system("cls");
					if (furiab == 1 || furiab == 0){
						printf("Você se esconde átras de seu escudo");
						printf("\nAnalisando...");
						printf("\nÉ um dragão gigantesco, parece estar preparando alguma coisa...");
					}
					if (furiab == 2){
						printf("Você se esconde átras de seu escudo");
						printf("\nAnalisando...");
						printf("\nÉ um dragão gigantesco, ele está com o seu hálito de fogo quase preparado...");
					}
					if (furiab == 3){
						printf("Você se esconde átras de seu escudo");
						printf("\nAnalisando...");
						printf("\nÉ AGORA, SE ABAIXE!!!");
					}
				break;
				case 4:
					system("cls");
					aleagabs = rand() % 20 + 3;
					printf("\n___________________________");
					printf("\nVocê conjura sua Magia");
					printf("\n...");
					if (aleagabs >= 20){
						printf("\nVocê acertou um ATAQUE CRÍTICO");
						dano = rand() % 12 + 13;
						printf("\nDeu %i de dano", dano);
						vidab = vidab - dano;
					}else if (aleagabs >= cab){
						printf("\nVocê acertou!!!");
						dano = rand() % 12 + 1;
						printf("\nDeu %i de dano", dano);
						vidab = vidab - dano;
					}else {
						printf("\nErrou!!!");
					}
					break;
			}
	    	furiab = furiab + 1;
	    	
	    		if (furiab != 3){
        		printf("\n___________________________");
				printf("\nVez do Boss...");
				printf("\nE ele ataca com suas garras!!!");
				printf("\n...");
				aleagabs = rand() % 20 + 2;
			if (aleagabs >= 20){
				printf("\nÉ um acerto ATAQUE CRÍTICO");
				dano = rand() % 12 + 9;
				printf("\nO dragão deu %i de dano (toneladas de dano)", dano);
				p1.vida = p1.vida - dano;			
			}else if (aleagabs >= p1.ca){
				printf("\nEle te acertou!!!");
				dano = rand() % 12 + 1;
				if (e = 3){
					dano = dano/2;
				}
				printf("\nO dragão deu %i de dano", dano);
					p1.vida = p1.vida - dano;
				} else{
					printf("\nVocê desvia por pouco!!!");
				}	
								
			}		
				if (furiab == 3){
        		if(e!=3 && furiab == 3){
					printf("\n___________________________");
					printf("\nEle solta um JATO DE FOGO  ");
					printf("\n...TA QUEIMANDO!!!!!!!!");
					dano = rand() % 12 + 16;
					printf("DEU %i DE DANO (Machucou)", dano);
					p1.vida = p1.vida - dano;
					furiab = 0;
				}else{
					printf("\nVocê defendeu o BAFO DO DRAGÃO!!!");
					printf("\nJunto com suas escamas dracônicas, isso é o suficiente para previnir todo o estrago");
				}   furiab = 0;	
        
			}
			
			if (p1.vida > 0){	
			pontt = pontt + 30000;
		}
		
		}
		if(p1.vida <= 0){
			printf("\n                         _____ _                 _            _                   ");
			printf("\n                        |  ___(_)_ __ ___     __| | ___      | | ___   __ _  ___  ");
			printf("\n                        | |_  | | '_ ` _ \\   / _` |/ _ \\  _  | |/ _ \\ / _` |/ _ \\ ");
			printf("\n                        |  _| | | | | | | | | (_| |  __/ | |_| | (_) | (_| | (_) |");
			printf("\n                        |_|   |_|_| |_| |_|  \\__,_|\\___|  \\___/ \\___/ \\__, |\\___/ ");
			printf("\n                                                                      |___/       ");

			printf("\n                                     Você foi incapaz e foi derrotado.\n");
			printf("\n                         **** Pontuação Final ****");
			printf("\n                         ****       %i       ****", pontt);
			printf("Voltando ao menu...\n");
			system ("pause");
			menup();
		}
		if(vidab <= 0){
			system ("cls");
			printf("\n                 __     __         //\\   _____                                 _ ");
			printf("\n                 \\ \\   / /__   ___|/_\\| | ____|___  ___ __ _ _ __   ___  _   _| |");
			printf("\n                  \\ \\ / / _ \\ / __/ _ \\ |  _| / __|/ __/ _` | '_ \\ / _ \\| | | | |");
			printf("\n                   \\ V / (_) | (_|  __/ | |___\\__ \\ (_| (_| | |_) | (_) | |_| |_|");
			printf("\n                    \\_/ \\___/ \\___\\___| |_____|___/\\___\\__,_| .__/ \\___/ \\__,_(_)");
			printf("\n                                                            |_|                  ");
			printf("\n");
			printf("\n");
			printf("\n =====================================================================================================================================================");
			printf("\n | Você escapou da Dungeon Rehearsal, mas isso já estava escrito. Seus dias nesse local foram longos e entediantes, você já não aguentava mais.      |");
			printf("\n | Sua 'jornada' durou alguns dias, você teve tempo de passar por todas as salas da masmorra antes de encontrar o chefe. Ele parecia uma entidade    |");
			printf("\n | cruel, mas isso não te abala, você já está acostumado com coisas desse tipo. Nessa batalha você decidiu se soltar um pouco, só para testar o      |");
			printf("\n | nível do lugar. O 'chefão' não conseguiu nem pensar, com uma pouca porcentagem do seu poder você já deixou ele zonzo. A batalha durou alguns      |");
			printf("\n | minutos e ele já estava no chão.                                                                                                                  |");
			printf("\n | Depois de derrotá-lo você sente a liberdade entrando nas suas veias, mesmo sabendo que pra sair dali era questão de tempo. Você decide            |");
			printf("\n | sair da Masmorra para respirar um ar fresco por um tempo, antes de seguir sua antiga jornada de sequestrar princesas, porém, com um tempero       |");
			printf("\n | a mais: invasão de masmorras. Você se sentiu tão bem enquanto estava participando dessa masmorra que decidiu invadir algumas a partir de hoje.    |");
			printf("\n =====================================================================================================================================================");
				printf("\n                         **** Pontuação Final ****");
			printf("\n                         ****       %i       ****", pontt);
			printf("\nVoltando ao menu\n");
			system ("pause");
			menup();
		}
	}
}
void op2(){
		
	struct player p1;

	system("cls");
	printf("Dificuldade: ");
	printf("\n 1- Fácil");
	printf("\n 2- Médio");
	printf("\n 3- Difícil");
	printf("\nNota: A dificuldade influência a vida, acerto e dano do player (O padrão é médio).");
	scanf("%i", &opct);
	printf("Modo Infinito(1 = Sim / 2 = Não)");
	scanf("%i", &inf);
		printf("Voltar ao menu digite 1\n");
		scanf("%i", &op);
	switch(op){
		case 1: menup(opct); break;
	}
}
void op3(){

	system("cls");

	printf("\n                             ____                            _                         ");
	printf("\n                            / ___|___  _ __ ___   ___       | | ___   __ _  __ _ _ __  ");
	printf("\n                           | |   / _ \\| '_ ` _ \\ / _ \\   _  | |/ _ \\ / _` |/ _` | '__| ");
	printf("\n                           | |__| (_) | | | | | | (_) | | |_| | (_) | (_| | (_| | |    ");
	printf("\n                            \\____\\___/|_| |_| |_|\\___/   \\___/ \\___/ \\__, |\\__,_|_|    ");
	printf("\n                                                                     |___/             ");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n                            .-.");
	printf("\n                           (o.o)");
	printf("\n                            |=|");
	printf("\n                           __|__");
	printf("\n                         //.=|=.\\\\");
	printf("\n                        // .=|=. \\\\");
	printf("\n                        \\\\ .=|=. //");
	printf("\n                         \\\\(_=_)//");
	printf("\n                          (:| |:)");
	printf("\n                           || ||");
	printf("\n                           () ()");
	printf("\n                           || ||");
	printf("\n                           || ||");
	printf("\n                          ==' '==");
	printf("\n");
	printf("\n");
	printf("\n =======================================================================================================");
	printf("\n | -Objetivo: Dungeon Rehearsal é um jogo estilo Rogue Like com o objetivo de derrotar seus inimigos   |");
	printf("\n | para que você escape da masmorra em que você se encontra.                                           |");
	printf("\n |                                                                                                     |");
	printf("\n | -Dificuldades: Fácil, Média e Difícil.                                                              |");
	printf("\n | -Controles: O jogo é inteiramente controlado a partir de escolhas.                                  |");
	printf("\n | -Opções de Combate: Você pode escolher dentre 4 opções no seu combate, utilizar sua espada, magia,  |");
	printf("\n | arco ou se defender/analisar (essa opção te da informações sobre seu inimigo).                      |");
	printf("\n |                                                                                                     |");
	printf("\n | -Dicas e Informações: O jogo é dividido em 4 fases, sendo elas 3 fases comuns e a última um boss    |");
	printf("\n | podendo conter todas as dificuldades que você passou nas primeiras fases.                           |");
	printf("\n | A opção de combate 'Defender e Analisar' é muito importante de ser usada, pois com ela você pode    |");
	printf("\n | descobrir as fraquezas dos seus oponentes. Utilize-a!                                               |");
	printf("\n =======================================================================================================");
	printf("\n");
	
	printf("\n Voltar ao menu digite 1\n");
		scanf("%i", &op);
	switch(op){
		case 1: menup(); break;
	}	
}
void op4(){
	system("cls");
	
    printf("\n  ___________________________________________________________________________________________________________________");															
	printf("\n |Esqueletos:                                                    Fonte de Artes:                                     |");
	printf("\n |Giovanne Leite | RA: 23269587-2                                https://www.asciiart.eu                             |");
	printf("\n |Gabriel Felipe Alexandre Dos Santos | RA: 23175871-2                                                               |");
	printf("\n |___________________________________________________________________________________________________________________|");
	printf("\n |                                                                                                                   |");				
	printf("\n |Combate e Balanceamento:                                       História e Conceito:                                |");
	printf("\n |Giovanne Leite | RA: 23269587-2                                Giovanne Leite | RA: 23269587-2                     |");				
	printf("\n |Pedro Paulo Barbosa Arantes | RA: 23167576-2                   Pedro Paulo Barbosa Arantes | RA: 23167576-2        |");
	printf("\n |                                                               Gabriel Felipe Alexandre Dos Santos | RA: 23175871-2|");
	printf("\n |Chefão:                                                                                                            |");
	printf("\n |Giovanne Leite | RA: 23269587-2                                                                                    |");
	printf("\n |___________________________________________________________________________________________________________________|");
				
	printf("\n  ____________________________________________________");
	printf("\n |____________________________________________________|");
	printf("\n | __     __   ____   ___ ||  ____    ____     _  __  |");
	printf("\n ||  |__ |--|_| || |_|   |||_|**|*|__|+|+||___| ||  | |");
	printf("\n ||==|^^||--| |=||=| |=*=||| |~~|~|  |=|=|| | |~||==| |");
	printf("\n ||  |##||  | | || | |JRO|||-|  | |==|+|+||-|-|~||__| |");
	printf("\n ||__|__||__|_|_||_|_|___|||_|__|_|__|_|_||_|_|_||__|_|");
	printf("\n ||_______________________||__________________________|");
	printf("\n | _____________________  ||      __   __  _  __    _ |");
	printf("\n ||=|=|=|=|=|=|=|=|=|=|=| __..\\/ |  |_|  ||#||==|  / /|");
	printf("\n || | | | | | | | | | | |/\\ \\  \\\\|++|=|  || ||==| / / |");
	printf("\n ||_|_|_|_|_|_|_|_|_|_|_/_/\\_.___\\__|_|__||_||__|/_/__|");
	printf("\n |____________________ /\\~()/()~//\\ __________________|");
	printf("\n | __   __    _  _     \\_  (_ .  _/ _    ___     _____|");
	printf("\n ||~~|_|..|__| || |_ _   \\ //\\\\ /   |=|__|~|~|___| | | |");
	printf("\n ||--|+|^^|==|1||2| | |__/\\ __ /\\__| |==|x|x|+|+|=|=|=|");
	printf("\n ||__|_|__|__|_||_|_| /  \\ \\  / /  \\_|__|_|_|_|_|_|_|_|");
	printf("\n |_________________ _/    \\/\\/\\/    \\_ _______________|");
	printf("\n | _____   _   __  |/      \\../      \\|  __   __   ___|");
	printf("\n ||_____|_| |_|##|_||   |   \\/ __|   ||_|==|_|++|_|-|||");
	printf("\n ||______||=|#|--| |\\   \\   o    /   /| |  |~|  | | |||");
	printf("\n ||______||_|_|__|_|_\\  \\  o   /   / _|_|__|_|__|_|_|||");
	printf("\n |_________ __________\\___\____/___/___________ _______|");
	printf("\n |__    _  /    ________     ______           /| _ _ _|");
	printf("\n |\\ \\  |=|/   //    /| //   /  /  / |        / ||%%|%%|%%|");
	printf("\n | \\/\\ |*/  .//____//.//   /__/__/ (_)      /  ||=|=|=|");
	printf("\n_|__|  \\/\\|/   /(____|/ //                  /  /|~|~|~|__");printf("_________________________________________________________________");
	printf("\n |___\\_/   /________//   ________         /  / ||_|_|_|");
	printf("\n |___ /   (|________/   |\\_______\\       /  /| |______|");
	printf("\n     /                  \\|________)     /  / | |       ");
	printf("\n =========================================================================================================================");		
	printf("\nVoltar ao menu digite 1\n");
		scanf("%i", &op);
	switch(op){
		case 1: menup(); break;
	}
	
}

int main(){
	system("cls");

setlocale(LC_ALL, "PORTUGUESE");

	printf("\n           _..--""---.");		printf("                 ____                                        ");
	printf("\n          /         ''.");	printf("             |  _ \\ _   _ _ __   __ _  ___  ___  _ __     ");
	printf("\n          `            l");	printf("            | | | | | | | '_ \\ / _` |/ _ \ / _ \\| '_ \\   ");
	printf("\n          |'._  ,._ l/'\\");	printf("            | |_| | |_| | | | | (_| |  __/ (_) | | | |   ");
	printf("\n          |  _J<__/.v._/");	printf("            |____/\ \\__,_|_| |_|\\__, |\\___|\\___/|_| |_| _ ");
	printf("\n           \\( ,~._,,,,-)");	printf("            |  _ \\ ___| |__   _|___/_ _ _ __ ___  __ _| |");
	printf("\n            `-\\' \\`,,j|");	printf("             | |_) / _ \\ '_ \\ / _ \\/ _` | '__/ __|/ _` | |");
	printf("\n               \\_,____J");	printf("             |  _ <  __/ | | |  __/ (_| | |  \\__ \\ (_| | |");
	printf("\n          .--.__)--(__.--.");	printf("          |_| \\_\\___|_| |_|\\___|\\__,_|_|  |___/\\__,_|_|");
	printf("\n         /  `-----..--'. j");
	printf("\n         '.- '`--` `--' \\\\ ");
	printf("\n        //  '`---'`  `-' \\\\ "); printf("                      Press any button to START");
	printf("\n       //   '`----'`.-.-' \\\\ ");
	printf("\n     _//     `--- -'   \\' | \\__");
	printf("\n    |  |         ) (      `.__.---- -'\\");
	printf("\n     \\7          \`-(               74\\\\\\");
	printf("\n     ||       _  /`-(               l|//7__");
	printf("\n     |l    ('  `-)-/_.--.           f''` -.-""|");
	printf("\n     |\\    l\_  `-'    .'           |     |  |");
	printf("\n     llJ   _ _)J--._.-('           |     |  l");
	printf("\n     |||( ( '_)_  .l   "". _     ..__I     |  L");
	printf("\n     ^\\\||`'   "  "'" " )''`'---'     L.-'`-.._");
	printf("\n          \\ |           ) /.              ``'`-.._``-.");
	printf("\n          l l          / / |                      |''|");
	printf("\n             " "\\        / / "  "-..__                |  |");
	printf("\n           | |       / /          1       ,- t-...J_.'");
	printf("\n           | |      / /           |       |  |");
	printf("\n          J  \  /"  "(            l       |  |");
	printf("\n           | ().'`-()/            |       |  |");
	printf("\n          _.-""_.____/             l       l.-l");
	printf("\n      _.-""_.+""|                    /        \\.  \\""");
	printf("\n/""\.-""_.-""      | |                 /          \\   \\""");
	printf("\n\_   "      "        | |                1    | `'|");
	printf("\n  |ll       | |                |            i   |");
	printf("\n \\\\\\       |-\\               \j ..          L,,'. `/");
	printf("\n __\\\\\\     ( .-\\           .--'    ``--../..'      '-..");
	printf("\n  `'''`----`\\\\\\\\ .....--'''");
	printf("\n              \\\\\\\\                            ''");


	printf("\n");
		system ("pause");
			menup();

}

