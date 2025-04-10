#include <stdio.h>

int main() {


    // variaveis das cartas
 
    char   estado1[5]         =  "aa"       , estado2[5]   =  "bb"    ;
    char   codigo1[5]         =  "01"       , codigo2[5]   =  "02"    ;
    char   cidade1[100]       =  "aaa"      , cidade2[100] =  "bbb"   ;
    unsigned long populacao1  =   1         , populacao2   =   1      ;
    float  area1              =   1.1       , area2        =   2.2    ;
    float  pib1               =   1.1       , pib2         =   2.2    ;
    int    turismo1           =   1         , turismo2     =   1      ;
    float  pib_pc1            =   1.1       , pib_pc2      =   1.1    ;
    float  dens_Pop1          =   1.1       , dens_Pop2    =   1.1    ;
    float  super_poder1       =   1.1       , super_poder2 =   2.2    ;
   
    int    placar1            =   0         , placar2      =   0      ;
    int    atributo1          =   1         , atributo2    =   2      ;

    int    opcao              =   0         ;




    printf ("\n ### SUPER TRUNFO BRASIL ###\n");

    inicio:
    
    printf ( "\n1 - JOGAR\n" );
    printf ( "2 - REGRAS DO JOGO\n") ;
    printf ( "3 - CASDASTRAR CARTAS\n" );
    printf ( "4 - VISUALIZAR CARTAS CADASTRADAS\n" );
    printf ( "5 - EXIBIR PLACAR\n" );
    printf ( "6 - SAIR DO JOGO\n" );
    inicio_1:
    printf ( "\n Escolha uma opção: ");
        scanf ("%d" , &opcao );
            if ( opcao < 1 || opcao > 6) { printf ("Escolha inválida tente novamente\n"); goto inicio_1; }

    switch (opcao)
    {
    case 1 :  //JOGO
        jogo:
        printf ("\n\n* * * Carta_1 - %s%s : %s  VS  Carta_2 - %s%s : %s * * * \n" , estado1, codigo1 , cidade1 , estado2 , codigo2 , cidade2 );
        printf ( "\nESCOLHA O PRIMEIRO ATRIBUTO \n" );
        printf ( "1 - POPULAÇÃO\n") ;
        printf ( "2 - ÁREA\n" );
        printf ( "3 - PIB\n" );
        printf ( "4 - PONTOS TURISTICOS\n" );
        printf ( "5 - PIB PER CAPTA\n" );
        printf ( "6 - DENSIDADE POPULACIONAL\n" );
        jogo_a:
        printf ( "\n Escolha uma opção: ");
            scanf ("%d" , &atributo1 );
            if ( atributo1 < 1 || atributo1 > 6) { printf ("Escolha inválida tente novamente\n"); goto jogo_a; }


            if ( atributo1 == 1 ) {
                printf ( "\nESCOLHA O SEGUNDO ATRIBUTO \n" );
                printf ( "2 - ÁREA\n" );
                printf ( "3 - PIB\n" );
                printf ( "4 - PONTOS TURISTICOS\n" );
                printf ( "5 - PIB PER CAPTA\n" );
                printf ( "6 - DENSIDADE POPULACIONAL\n" );

        jogo_b:
        printf ( "\n Escolha uma opção: ");
            scanf ("%d" , &atributo2 );
            if ( atributo2 < 2 || atributo2 > 6) { printf ("Escolha inválida tente novamente\n"); goto jogo_b; }

            } else if ( atributo1 == 2 ) {
                printf ( "\nESCOLHA O SEGUNDO ATRIBUTO \n" );
                printf ( "1 - POPULAÇÃO\n") ;
                printf ( "3 - PIB\n" );
                printf ( "4 - PONTOS TURISTICOS\n" );
                printf ( "5 - PIB PER CAPTA\n" );
                printf ( "6 - DENSIDADE POPULACIONAL\n" );

        jogo_c:
        printf ( "\n Escolha uma opção: ");
            scanf ("%d" , &atributo2 );
            if ( atributo2 < 1 || atributo2 > 6 || atributo2 == 2 ) { printf ("Escolha inválida tente novamente\n"); goto jogo_c; }

            } else if ( atributo1 == 3 ) {
                printf ( "\nESCOLHA O SEGUNDO ATRIBUTO \n" );
                printf ( "1 - POPULAÇÃO\n") ;
                printf ( "2 - ÁREA\n" );
                printf ( "4 - PONTOS TURISTICOS\n" );
                printf ( "5 - PIB PER CAPTA\n" );
                printf ( "6 - DENSIDADE POPULACIONAL\n" );

        jogo_d:
        printf ( "\n Escolha uma opção: ");
            scanf ("%d" , &atributo2 );
            if ( atributo2 < 1 || atributo2 > 6 || atributo2 == 3 ) { printf ("Escolha inválida tente novamente\n"); goto jogo_d; }

            } else if ( atributo1 == 4 ) {
                printf ( "\nESCOLHA O SEGUNDO ATRIBUTO \n" );
                printf ( "1 - POPULAÇÃO\n") ;
                printf ( "2 - ÁREA\n" );
                printf ( "3 - PIB\n" );
                printf ( "5 - PIB PER CAPTA\n" );
                printf ( "6 - DENSIDADE POPULACIONAL\n" );

        jogo_e:
        printf ( "\n Escolha uma opção: ");
            scanf ("%d" , &atributo2 );
            if ( atributo2 < 1 || atributo2 > 6 || atributo2 == 4 ) { printf ("Escolha inválida tente novamente\n"); goto jogo_e; }

            } else if ( atributo1 == 5 ) {
                printf ( "\nESCOLHA O SEGUNDO ATRIBUTO \n" );
                printf ( "1 - POPULAÇÃO\n") ;
                printf ( "2 - ÁREA\n" );
                printf ( "3 - PIB\n" );
                printf ( "4 - PONTOS TURISTICOS\n" );
                printf ( "6 - DENSIDADE POPULACIONAL\n" );

        jogo_f:
        printf ( "\n Escolha uma opção: ");
            scanf ("%d" , &atributo2 );
            if ( atributo2 < 1 || atributo2 > 6 || atributo2 == 5 ) { printf ("Escolha inválida tente novamente\n"); goto jogo_f; }

            } else if ( atributo1 == 6 ) {
                printf ( "\nESCOLHA O SEGUNDO ATRIBUTO \n" );
                printf ( "1 - POPULAÇÃO\n") ;
                printf ( "2 - ÁREA\n" );
                printf ( "3 - PIB\n" );
                printf ( "4 - PONTOS TURISTICOS\n" );
                printf ( "5 - PIB PER CAPTA\n" );

        jogo_g:
        printf ( "\n Escolha uma opção: ");
            scanf ("%d" , &atributo2 );
            if ( atributo2 < 1 || atributo2 > 5 ) { printf ("Escolha inválida tente novamente\n"); goto jogo_g; }

            } 


            if        ( atributo1 == 1 && atributo2 == 2 || atributo1 == 2 && atributo2 == 1 ) // 1 população e 2 area
            {
                printf ("\nAtributo: POPULAÇÃO \n");
                    printf (" Carta 1 - %s ( %s ) : %lu habitantes\n" , cidade1 , estado1 , populacao1);
                    printf (" Carta 2 - %s ( %s ) : %lu habitantes\n" , cidade2 , estado2 , populacao2);

                printf ("\nAtributo: ÁREA \n");
                    printf (" Carta 1 - %s ( %s ) : %.2f Km²\n" , cidade1 , estado1 , area1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Km²\n" , cidade2 , estado2 , area2);

                printf ("\nSUPER PODER (População + Área) \n");
                    super_poder1 = (float)populacao1 + area1 ;
                    super_poder2 = (float)populacao2 + area2 ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );
                

            } else if ( atributo1 == 1 && atributo2 == 3 || atributo1 == 3 && atributo2 == 1 ) // 1 população e  3 pib
            {
                printf ("\nAtributo: POPULAÇÃO \n");
                    printf (" Carta 1 - %s ( %s ) : %lu habitantes\n" , cidade1 , estado1 , populacao1);
                    printf (" Carta 2 - %s ( %s ) : %lu habitantes\n" , cidade2 , estado2 , populacao2);

                printf ("\nAtributo: PIB \n");
                    printf (" Carta 1 - %s ( %s ) : %.2f Bilhões\n" , cidade1 , estado1 , pib1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Bilhões\n" , cidade2 , estado2 , pib2);

                printf ("\nSUPER PODER (População + PIB) \n");
                    super_poder1 = (float)populacao1 + ( pib1 * 1000000000 ) ;
                    super_poder2 = (float)populacao2 + (pib2 * 1000000000 ) ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );

            } else if ( atributo1 == 1 && atributo2 == 4 || atributo1 == 4 && atributo2 == 1 ) // 1 população e 4 turismo
            {
                printf ("\nAtributo: POPULAÇÃO \n");
                    printf (" Carta 1 - %s ( %s ) : %lu habitantes\n" , cidade1 , estado1 , populacao1);
                    printf (" Carta 2 - %s ( %s ) : %lu habitantes\n" , cidade2 , estado2 , populacao2);

                printf ("\nAtributo: PONTOS TURISTICOS \n");
                    printf (" Carta 1 - %s ( %s ) : %d \n" , cidade1 , estado1 , turismo1);
                    printf (" Carta 2 - %s ( %s ) : %d \n" , cidade2 , estado2 , turismo2);

                printf ("\nSUPER PODER (População + Pontos Turisticos) \n");
                    super_poder1 = (float)populacao1 + (float)turismo1 ;
                    super_poder2 = (float)populacao2 + (float)turismo2 ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );

            } else if ( atributo1 == 1 && atributo2 == 5 || atributo1 == 5 && atributo2 == 1 ) // 1 população e 5 percapta
            {
                printf ("\nAtributo: POPULAÇÃO \n");
                    printf (" Carta 1 - %s ( %s ) : %lu habitantes\n" , cidade1 , estado1 , populacao1);
                    printf (" Carta 2 - %s ( %s ) : %lu habitantes\n" , cidade2 , estado2 , populacao2);

                printf ("\nAtributo: PIB PER CAPITA \n");
                    printf (" Carta 1 - %s ( %s )   : %.2f reais\n" , cidade1 , estado1 , pib_pc1);
                    printf (" Carta 2 - %s ( %s )   : %.2f reais\n" , cidade2 , estado2 , pib_pc2);

                printf ("\nSUPER PODER (População + PIB per Capita) \n");
                    super_poder1 = (float)populacao1 + pib_pc1 ;
                    super_poder2 = (float)populacao2 + pib_pc2 ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );

            } else if ( atributo1 == 1 && atributo2 == 6 || atributo1 == 6 && atributo2 == 1 ) // 1 população e 6 densidade
            {
                printf ("\nAtributo: POPULAÇÃO \n");
                    printf (" Carta 1 - %s ( %s ) : %lu habitantes\n" , cidade1 , estado1 , populacao1);
                    printf (" Carta 2 - %s ( %s ) : %lu habitantes\n" , cidade2 , estado2 , populacao2);

                printf ("\nAtributo: DENSIDADE POPULACIONAL \n");
                    printf (" Carta 1 - %s ( %s )  : %.2f hab/Km²\n" , cidade1 , estado1 , dens_Pop1);
                    printf (" Carta 2 - %s ( %s )  : %.2f hab/Km²\n" , cidade2 , estado2 , dens_Pop2);

                printf ("\nSUPER PODER (População + Densidade Populacional) \n");
                    super_poder1 = (float)populacao1 + (-dens_Pop1) ;
                    super_poder2 = (float)populacao2 + (-dens_Pop2) ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );

            } else if ( atributo1 == 2 && atributo2 == 3 || atributo1 == 3 && atributo2 == 2 ) // 2 area e 3 pib
            {
                printf ("\nAtributo: AREA \n");
                    printf (" Carta 1 - %s ( %s ) : %.2f Km²\n" , cidade1 , estado1 , area1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Km²\n" , cidade2 , estado2 , area2);

                printf ("\nAtributo: PIB \n");
                    printf (" Carta 1 - %s ( %s ) : %.2f Bilhões\n" , cidade1 , estado1 , pib1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Bilhões\n" , cidade2 , estado2 , pib2);

                printf ("\nSUPER PODER (Area + PIB) \n");
                    super_poder1 = area1 + (pib1 * 1000000000.00 ) ;
                    super_poder2 = area2 + (pib2 * 1000000000.00 ) ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );

            } else if ( atributo1 == 2 && atributo2 == 4 || atributo1 == 4 && atributo2 == 2  ) // 2 area e 4 turismo
            {
                printf ("\nAtributo: AREA \n");
                    printf (" Carta 1 - %s ( %s ) : %.2f Km²\n" , cidade1 , estado1 , area1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Km²\n" , cidade2 , estado2 , area2);

                printf ("\nAtributo: PONTOS TURISTICOS \n");
                    printf (" Carta 1 - %s ( %s )  : %d \n" , cidade1 , estado1 , turismo1);
                    printf (" Carta 2 - %s ( %s )  : %d \n" , cidade2 , estado2 , turismo2);

                printf ("\nSUPER PODER (Area + Pontos Turisticos) \n");
                    super_poder1 = area1 + (float)turismo1 ;
                    super_poder2 = area2 + (float)turismo2 ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );

                
            } else if ( atributo1 == 2 && atributo2 == 5 || atributo1 == 5 && atributo2 == 2  ) // 2 area e 5 percapta
            {
                printf ("\nAtributo: AREA \n");
                    printf (" Carta 1 - %s ( %s ) : %.2f Km²\n" , cidade1 , estado1 , area1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Km²\n" , cidade2 , estado2 , area2);

                printf ("\nAtributo: PIB PER CAPITA \n");
                    printf (" Carta 1 - %s ( %s )   : %.2f reais\n" , cidade1 , estado1 , pib_pc1);
                    printf (" Carta 2 - %s ( %s )   : %.2f reais\n" , cidade2 , estado2 , pib_pc2);

                printf ("\nSUPER PODER (Area + PIB per Capita) \n");
                    super_poder1 = area1 + pib_pc1 ;
                    super_poder2 = area2 + pib_pc2 ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );

            } else if ( atributo1 == 2 && atributo2 == 6 || atributo1 == 6 && atributo2 == 2  ) // 2 area e 6 densidade
            {
                printf ("\nAtributo: AREA \n");
                    printf (" Carta 1 - %s ( %s ) : %.2f Km²\n" , cidade1 , estado1 , area1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Km²\n" , cidade2 , estado2 , area2);

                printf ("\nAtributo: DENSIDADE POPULACIONAL \n");
                    printf (" Carta 1 - %s ( %s )  : %.2f hab/Km²\n" , cidade1 , estado1 , dens_Pop1);
                    printf (" Carta 2 - %s ( %s )  : %.2f hab/Km²\n" , cidade2 , estado2 , dens_Pop2);

                printf ("\nSUPER PODER (Area + Densidade Populacional) \n");
                    super_poder1 = area1 + (-dens_Pop1) ;
                    super_poder2 = area2 + (-dens_Pop2) ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );

            } else if ( atributo1 == 3 && atributo2 == 4 || atributo1 == 4 && atributo2 == 3  ) // 3 pib e 4 turismo
            {
                printf ("\nAtributo: PIB \n");
                    printf (" Carta 1 - %s ( %s ) : %.2f Bilhões\n" , cidade1 , estado1 , pib1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Bilhões\n" , cidade2 , estado2 , pib2);

                printf ("\nAtributo: PONTOS TURITICOS \n");
                    printf (" Carta 1 - %s ( %s )  : %d \n" , cidade1 , estado1 , turismo1);
                    printf (" Carta 2 - %s ( %s )  : %d \n" , cidade2 , estado2 , turismo2);

                printf ("\nSUPER PODER (PIB + Pontos turisticos) \n");
                    super_poder1 = (pib1 * 1000000000.00 ) + (float)turismo1 ;
                    super_poder2 = (pib2 * 1000000000.00 ) + (float)turismo2 ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );

            } else if ( atributo1 == 3 && atributo2 == 5 || atributo1 == 5 && atributo2 == 3 ) // 3 pib e 5 percapta
            {
                printf ("\nAtributo: PIB \n");
                    printf (" Carta 1 - %s ( %s ) : %.2f Bilhões\n" , cidade1 , estado1 , pib1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Bilhões\n" , cidade2 , estado2 , pib2);

                printf ("\nAtributo: PIB PER CAPITA \n");
                    printf (" Carta 1 - %s ( %s )   : %.2f reais\n" , cidade1 , estado1 , pib_pc1);
                    printf (" Carta 2 - %s ( %s )   : %.2f reais\n" , cidade2 , estado2 , pib_pc2);

                printf ("\nSUPER PODER (PIB + PIB per Capita) \n");
                    super_poder1 = (pib1 * 1000000000.00 ) + pib_pc1 ;
                    super_poder2 = (pib2 * 1000000000.00 ) + pib_pc2 ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );

            } else if ( atributo1 == 3 && atributo2 == 6 || atributo1 == 6 && atributo2 == 3 ) // 3 pib e 6 densidade
            {
                printf ("\nAtributo: PIB \n");
                    printf (" Carta 1 - %s ( %s ) : %.2f Bilhões\n" , cidade1 , estado1 , pib1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Bilhões\n" , cidade2 , estado2 , pib2);

                printf ("\nAtributo: DENSIDADE POPULACIONAL \n");
                    printf (" Carta 1 - %s ( %s )  : %.2f hab/Km²\n" , cidade1 , estado1 , dens_Pop1);
                    printf (" Carta 2 - %s ( %s )  : %.2f hab/Km²\n" , cidade2 , estado2 , dens_Pop2);

                printf ("\nSUPER PODER (PIB + Densidade Populacional) \n");
                    super_poder1 = (pib1 * 1000000000.00 ) + (-dens_Pop1) ;
                    super_poder2 = (pib2 * 1000000000.00 ) + (-dens_Pop2) ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );

            } else if ( atributo1 == 4 && atributo2 == 5 || atributo1 == 5 && atributo2 == 4 ) // 4 turismo e 5 percapta
            {
                printf ("\nAtributo: PONTOS TURITICOS \n");
                    printf (" Carta 1 - %s ( %s )  : %d \n" , cidade1 , estado1 , turismo1);
                    printf (" Carta 2 - %s ( %s )  : %d \n" , cidade2 , estado2 , turismo2);

                printf ("\nAtributo: PIB PER CAPITA \n");
                    printf (" Carta 1 - %s ( %s )   : %.2f reais\n" , cidade1 , estado1 , pib_pc1);
                    printf (" Carta 2 - %s ( %s )   : %.2f reais\n" , cidade2 , estado2 , pib_pc2);

                printf ("\nSUPER PODER (Pontos Turisticos + PIB per Capita) \n");
                    super_poder1 = (float)turismo1 + pib_pc1 ;
                    super_poder2 = (float)turismo2 + pib_pc2 ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );

            } else if ( atributo1 == 4 && atributo2 == 6 || atributo1 == 6 && atributo2 == 4 ) // 4 turismo e 6 densidade
            {
                printf ("\nAtributo: PONTOS TURITICOS \n");
                    printf (" Carta 1 - %s ( %s )  : %d \n" , cidade1 , estado1 , turismo1);
                    printf (" Carta 2 - %s ( %s )  : %d \n" , cidade2 , estado2 , turismo2);

                printf ("\nAtributo: DENSIDADE POPULACIONAL \n");
                    printf (" Carta 1 - %s ( %s )  : %.2f hab/Km²\n" , cidade1 , estado1 , dens_Pop1);
                    printf (" Carta 2 - %s ( %s )  : %.2f hab/Km²\n" , cidade2 , estado2 , dens_Pop2);

                printf ("\nSUPER PODER (Pontos Turisticos + Densidade populacional) \n");
                    super_poder1 = (float)turismo1 + (-dens_Pop1) ;
                    super_poder2 = (float)turismo2 + (-dens_Pop2) ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );


            } else if ( atributo1 == 5 && atributo2 == 6 || atributo1 == 6 && atributo2 == 5 ) // 5 percapta 6 densidade
            {
                printf ("\nAtributo: PIB PER CAPITA \n");
                    printf (" Carta 1 - %s ( %s )   : %.2f reais\n" , cidade1 , estado1 , pib_pc1);
                    printf (" Carta 2 - %s ( %s )   : %.2f reais\n" , cidade2 , estado2 , pib_pc2);

                printf ("\nAtributo: DENSIDADE POPULACIONAL \n");
                    printf (" Carta 1 - %s ( %s )  : %.2f hab/Km²\n" , cidade1 , estado1 , dens_Pop1);
                    printf (" Carta 2 - %s ( %s )  : %.2f hab/Km²\n" , cidade2 , estado2 , dens_Pop2);

                printf ("\nSUPER PODER (PIB per Capita + Densidade populacional) \n");
                    super_poder1 = pib_pc1 + (-dens_Pop1) ;
                    super_poder2 = pib_pc2 + (-dens_Pop2) ;
                    printf (" Carta 1 - %s ( %s ) : %.2f Pontos\n" , cidade1 , estado1 , super_poder1);
                    printf (" Carta 2 - %s ( %s ) : %.2f Pontos\n" , cidade2 , estado2 , super_poder2);

                if ( super_poder1 > super_poder2 ) {
                    printf ("\n * * * RESULTADO: CARTA_1 ( %s ) VENCEU A RODADA! * * * \n" , cidade1);
                    placar1 ++;
                } else if ( super_poder1 < super_poder2 ) {
                    printf ("\n* * * RESULTADO: CARTA_2 ( %s ) VENCEU A RODADA! * * * \n" , cidade2);
                    placar2 ++;
                } else {
                    printf ( " * * * RESULTADO: EMPATE! * * * \n" );
                }

                printf ("\n* * * PLACAR * * *\n");
                printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );

            }
            
        // Termino da rodada
        printf ( "\n1 - JOGAR NOVAMENTE\n" );
        printf ( "2 - CADASTRAR NOVAS CARTAS\n" );
        printf ( "3 - RETORNAR AO MENU INICIAL\n" );
        jogo_1:
        printf ( "Escolha uma opção: ");
            scanf ("%d" , &opcao );
                if ( opcao < 1 || opcao > 3) { printf ("Escolha inválida tente novamente\n"); goto jogo_1; }
        
        if ( opcao == 1 ) { goto jogo; } else if ( opcao == 2 ) { goto cadastro; } else { goto inicio; }
        break;

    case 2 :  // REGRAS
        printf( "\n* * REGRAS * *\n\n" );

        printf ( "1 - O JOGO\n");
        printf ( "  | - Este é um jogo de cartas com a tematica 'Brasil';\n");
        printf ( "  | - As cartas representam os estados brasileiros, cada uma com seus pontos de atributo;\n");
        printf ( "  | - A somatoria de todos os atributos representa o super poder da carta em questão;'.\n");
        printf ( "  | - Vence a carta com o maior atributo comparado, com excessao do atributo desidade populacional,\n");
        printf ( "  | neste caso vence a carta com a menor valor.\n\n");
        printf ( "2 - CASTRO DE CARTAS\n");
        printf ( "  | - Antes de iniciar o jogo é necessário cadastrar as cartas com as informações de cada região;\n");
        printf ( "  | - Será permitido o cadastro de apenas duas cartas por vez.\n\n");
        printf ( "3 - COMO JOGAR\n");
        printf ( "  | - O jogador deve escolher dois atributos para disputa;\n");
        printf ( "  | - Cada atributo será comparado individualmente;\n");
        printf ( "  | - Em seguida os atributos serão somados e comparados;\n");
        printf ( "  | - Vence a rodada a carta que possuir mais pontos após a combinação dos atributos escolhidos;\n");
        printf ( "  | - Ao termino da rodada o jogador poderá reiniciar a partida e escolher novos atributos;\n");
        printf ( "  | ou cadastrar novas cartas para continuar a disputa.\n\n");
        printf ( "3 - PLACAR\n");
        printf ( "  | - A cada rodada vencida será atribuido 1 ponto ao placar;\n");
        printf ( "  | - O mesmo pode ser visualizado a partir no menu inicial.\n");
   
        printf ( "\n1 - CADASTRAR CARTAS\n" );
        printf ( "2 - RETORNAR AO MENU INICIAL\n" );
        regras_1:
        printf ( "Escolha uma opção: ");
            scanf ("%d" , &opcao );
                if ( opcao < 1 || opcao > 2) { printf ("Escolha inválida tente novamente\n"); goto regras_1; }

        if ( opcao == 1 ) { goto cadastro; } else { goto inicio; }

        break;

    case 3 :  // CADASTRO DAS CARTAS
        cadastro:

        printf ( "\n\nCADASTRO DA CARTA 1\n" );
            printf ("UF : ");
                scanf ("%s" , estado1 );

            printf ("Código (01, 02, 03 ou 04): ");
                scanf ("%s" , codigo1 );

            printf ("Cidade : ");
                scanf ( "%s", cidade1 );

            printf ("População : ");
                scanf ("%lu" , &populacao1 );

            printf ("Área (Km²) : ");
                scanf ("%f" , &area1 );

            printf ("PIB (Bilhões) : ");
                scanf ("%f" , &pib1 );

            printf ("Pontos turisticos : ");
                scanf ("%d" , &turismo1 );


        printf ( "\n\nCADASTRO DA CARTA 2\n" );
            printf ("UF : ");
                scanf ("%s" , estado2 );

            printf ("Código (01, 02, 03 ou 04): ");
                scanf ("%s" , codigo2 );

            printf ("Cidade : ");
                scanf ( "%s", cidade2 );

            printf ("População : ");
                scanf ("%lu" , &populacao2 );

            printf ("Área (Km²) : ");
                scanf ("%f" , &area2 );

            printf ("PIB (Bilhões) : ");
                scanf ("%f" , &pib2 );

            printf ("Pontos turisticos : ");
                scanf ("%d" , &turismo2 );
            
            
        printf ("\n\nNOVAS CARTAS CADASTRADAS COM SUCESSO!\n\n");

        //Calculo dos novos atributos
        cartas:
        dens_Pop1    = (float)populacao1 / area1;
        dens_Pop2    = (float)populacao2 / area2;
        pib_pc1      = pib1 * 1000000000.00 / (float)populacao1;
        pib_pc2      = pib2 * 1000000000.00 / (float)populacao2;
        super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000.00 ) + (float)turismo1 + pib_pc1 + (-dens_Pop1);
        super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000.00 ) + (float)turismo2 + pib_pc2 + (-dens_Pop2);
        
        //Exibição das cartas cadastradas

        printf ("CARTA 1\n");
        printf ("Estado..................: %s\n", estado1);
        printf ("Codigo..................: %s%s\n", estado1, codigo1);
        printf ("Cidade..................: %s\n", cidade1);
        printf ("População...............: %lu habitantes\n", populacao1);
        printf ("Área....................: %.2f Km²\n", area1);
        printf ("PIB.....................: %.2f Bilhões de reais\n", pib1);
        printf ("Pontos Turisticos.......: %.d\n", turismo1);
        printf ("Densidade Populacional..: %.2f hab/Km²\n", dens_Pop1);
        printf ("PIB per Capita..........: %.2f reais\n", pib_pc1);
        printf ("Super Poder.............: %.0f\n\n", super_poder1);

        printf ("CARTA 2\n");
        printf ("Estado..................: %s\n", estado2);
        printf ("Codigo..................: %s%s\n", estado2, codigo2);
        printf ("Cidade..................: %s\n", cidade2);
        printf ("População...............: %lu habitantes\n", populacao2);
        printf ("Área....................: %.2f Km²\n", area2);
        printf ("PIB.....................: %.2f Bilhões de reais\n", pib2);
        printf ("Pontos Turisticos.......: %.d\n", turismo2);
        printf ("Densidade Populacional..: %.2f hab/Km²\n", dens_Pop2);
        printf ("PIB per Capita..........: %.2f reais\n", pib_pc2);
        printf ("Super Poder.............: %.0f\n", super_poder2);

        // SUB MENU
        printf ( "\n1 - CADASTRAR NOVAS CARTAS\n" );
        printf ( "2 - RETORNAR AO MENU INICIAL\n" );
        cadastro_1:
        printf ( "Escolha uma opção: ");
            scanf ("%d" , &opcao );
                if ( opcao < 1 || opcao > 2) { printf ("Escolha inválida tente novamente\n"); goto cadastro_1; }
        if ( opcao == 1 ) { goto cadastro; } else { goto inicio; }

        break;

    case 4:  //EXIBIR CARTAS

        printf ("\nCARTAS CADASTRADAS\n\n");
        goto cartas;
        break;

    case 5:  //PLACAR
        placar:
    printf ("\n* * * PLACAR * * *\n");
        printf ( "CARTA_1 :  %d  x  %d  : CARTA_2\n", placar1 , placar2 );

        printf ( "\n1 - RESETAR PLACAR\n" );
        printf ( "2 - RETORNAR AO MENU INICIAL\n" );
        placar_1:
        printf ( "Escolha uma opção: " );
            scanf ( "%d" , &opcao );
                if ( opcao < 1 || opcao > 2) { printf ("Escolha inválida tente novamente\n"); goto placar_1; }
        if (opcao == 1) { placar1 = 0; placar2 = 0; goto placar; } else { goto inicio; }
        break;

    case 6:  //SAIR
        printf ("\n* * * GAME OVER * * *");
        break;
    
    default:
        printf ( "\n* OPÇÃO INVALIDA *\n" );
        goto inicio;
        break;
    }


    return 0;

}