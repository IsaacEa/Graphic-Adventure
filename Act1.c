#include <stdio.h>

//Variables globales

int escena = 0; // Escena en la que está el jugador, empezando en 0
int tieneFlorRoja = 0; // 1 si tiene la flor roja y 0 si no
int tieneFlorAmarilla = 0; // 1 si tiene la flor amarilla y 0 si no
int tieneHerradura = 0; // 1 si tiene la herradura azul y 0 si no
int entregadaFlorRoja = 0; // 1 si se ha entregado la flor roja al farero y 0 si no
int entregadaFlorAmarilla = 0; // 1 si se ha entregado la flor amarilla al farero y 0 si no
int encendidoFaro = 0; // 1 si el faro está encendido y 0 si no
int puestoHerradura = 0; // 1 si el jugador ha puesto la herradura al BlueDonkey y 0 si no
int encontradaNota = 0;
int encontradaHerradura = 0;


void HablarMadeleine()
{

    //DIALOGO DONKEY VILLE

    //  SIN HABER ENCONTRADO LA NOTA
    if(escena == 0 && encontradaNota == 0)
    {
        printf("Madeleine: -Por donde podriamos empezar?\n");
    }

    // HABIENDO ENCONTRADO LA NOTA
    if(escena == 0 && encontradaNota == 1)
    {
        printf("Madeleine: -La gente de esta ciudad me da repelus.\n");
    }

    //DIALOGO CASA FARERO

    //  SIN HABER LEIDO LA NOTA ANTES
    else if(escena == 1 && encontradaNota == 0) 
    {
        printf("Madeleine: -Mira! Una nota en la puerta. Pone que se encuentra enfermo, pero que podemos usar su buzon para dejarle objetos y que necesita una flor roja y una flor amarilla para hacer una pocion y curarse.\n");
        encontradaNota = 1;
    }

    //  HABIENDO LEIDO LA NOTA
    else if(escena == 1 && encontradaNota == 1)
    {
        printf("Madeleine: -Deberiamos ayudar al farero, si no, no podra encender el faro.\n");
    }

    //  HABIENDO ENCENDIDO EL FARO

    else if(escena == 1 && encendidoFaro == 1)
    {
        printf("Madeleine: -Esa pocion es mas efectiva de lo que pensaba, se ha curado rapidisimo.\n");
    }

    //DIALOGO LAGO TOGA

    //  CON EL FARO APAGADO
    else if(escena == 2 && encendidoFaro == 0)
    {
        printf("Madeleine: -No veo al Blue Donkey por ninguna parte.\n");
    }

    //  CON EL FARO ENCENDIDO
    else if(escena == 2 && encendidoFaro == 1)
    {
        printf("Madeleine: -Ahi esta el Blue Donkey!\n");
    }

    //DIALOGO FARO

    //  APAGADO
    else if(escena == 3 && encendidoFaro == 0)
    {
        printf("Madeleine: -Se nota que contruyeron el faro hace mucho tiempo, esta hecho polvo.\n");
    }

    //  ENCENDIDO
    else if(escena == 3 && encendidoFaro == 1)
    {
        printf("Madeleine: -Pues para ser tan viejo, brilla con mucha intensidad.\n");
    }

    //DIALOGO BOSQUE SUR

    //  SIN HABER ENCONTRADO LA NOTA
    else if(escena == 4 && encontradaNota == 0)
    {
        printf("Madeleine: -Cuantas flores rojas! Sabes que sirven para hacer pociones curativas?\n");
    }

    //  HABIENDO ENCONTRADO LA NOTA
    else if(escena == 4 && encontradaNota == 1)
    {
        printf("Madeleine: -Este sitio esta lleno de lo que necesitamos\n");
    }

    //DIALOGO BOSQUE NORTE

    //  SIN HABER ENCONTRADO LA HERRADURA
    else if(escena == 5 && encontradaHerradura == 0)
    {
        printf("Madeleine: -Eh! He encontrado algo, creo que es la herradura azul del Blue Donkey!\n");
        encontradaHerradura = 1;
    }

    //  HABIENDO ENCONTRADO LA HERRADURA Y SIN HABER ENCONTRADO LA NOTA
    else if(escena == 5 && encontradaHerradura == 1 && encontradaNota == 0)
    {
        printf("Madeleine: -Cuantas flores rojas! Sabes que sirven para hacer pociones curativas?\n");
    }

    //  HABIENDO ENCONTRADO LA HERRADURA Y LA NOTA
    else if(escena == 5 && encontradaHerradura == 1 && encontradaNota == 1)
    {
        printf("Madeleine: -Este sitio esta lleno de lo que necesitamos\n");
    } 
}

void HablarEsparrou()
{       

    //HERRADURA ENCONTRADA CON EL BLUE DONKYE DELANTE
    if(encontradaHerradura == 1 && escena == 2 && encendidoFaro == 1)
    {
        printf("Pongamos la herradura en la pata del Blue Donkey!\n");
    }

    //CON LA HERRADURA ENCONTRADA - ESTE DIALOGO SIRVE PARA TODOS LOS SITIOS
    else if(encontradaHerradura == 1 && encendidoFaro == 1)
    {
        printf("Busquemos al Blue Donkey!\n");
    }

    //FARO ENCENDIDO SIN HERRADURA - ESTE DIALOGO SIRVE PARA TODOS LOS SITIOS
    else if(encendidoFaro == 1 && encontradaHerradura == 0)
    {
        printf("Busquemos la herradura azul. Madeleine, abre bien los ojos\n");
    }

    //CON LAS FLORES ENCONTRADAS - ESTE DIALOGO SIRVE PARA TODOS LOS SITIOS
    else if(encontradaNota == 1 && tieneFlorAmarilla == 1 && tieneFlorRoja == 1)
    {
        printf("Metamos las flores en el buzon del farero.\n");
    }

    //DIALOGO DONKEY VILLE

    //  SIN HABER ENCONTRADO LA NOTA
    else if(escena == 0 && encontradaNota == 0)
    {
        printf("Esparrou: -Deberiamos empezar por la casa del farero\n");
    }

    //  HABIENDO ENCONTRADO LA NOTA
    else if(escena == 0 && encontradaNota == 1)
    {
        printf("Esparrou: -Para encontrar las flores deberiamos ir a los bosques\n");
    }

    //DIALOGO CASA DEL FARERO

    //  SIN HABER ENCONTRADO LA NOTA
    else if(escena == 1 && encontradaNota == 0)
    {
        printf("Esparrou: -Esta cerrado. Investiguemos; Madeleine siempre tiene buen ojo para encontrar pistas\n");
    }

    //  HABIENDO ENCONTRADO LA NOTA
    else if(escena == 1 && encontradaNota == 1)
    {
        printf("Esparrou: -Para encontrar las flores deberiamos ir a los bosques\n");
    }

    //DIALOGO LAGO TOGA

    //  SIN HABER ENCONTRADO LA NOTA
    else if(escena == 2 && encontradaNota == 0)
    {
        printf("Esparrou: -Deberiamos empezar por la casa del farero\n");
    }

    //  HABIENDO ENCONTRADO LA NOTA
    else if(escena == 2 && encontradaNota == 1)
    {
        printf("Esparrou: -Para encontrar las flores deberiamos ir a los bosques\n");
    }

    //DIALOGO FARO

    // SIN HABER ENCONTRADO LA NOTA
    else if(escena == 3 && encontradaNota == 0)
    {
        printf("Esparrou: -Deberiamos empezar por la casa del farero\n");
    }

    // HABIENDO ENCONTRADO LA NOTA
    else if(escena == 3 && encontradaNota == 1)
    {
        printf("Esparrou: -Para encontrar las flores deberiamos ir a los bosques\n");
    }

    //DIALOGO BOSQUE SUR

    // SIN HABER ENCONTRADO LA NOTA
    else if(escena == 4 && encontradaNota == 0)
    {
        printf("Esparrou: -Deberiamos empezar por la casa del farero\n");
    }

    // HABIENDO ENCONTRADO LA NOTA
    else if(escena == 4 && encontradaNota == 1)
    {
        printf("Esparrou: -Llevemos una de estas flores al farero\n");
    }

    //DIALOGO BOSQUE NORTE

    //  SIN HABER ENCONTRADO LA NOTA
    else if(escena == 5 && encontradaNota == 0)
    {
        printf("Esparrou: -Deberiamos empezar por la casa del farero\n");
    }

    // HABIENDO ENCONTRADO LA NOTA
    else if(escena == 5 && encontradaNota == 1)
    {
        printf("Esparrou: -Llevemos una de estas flores al farero\n");
    }
}

void HablarKaneda()
{

    //DIALOGO DONKEY VILLE
    if(escena == 0)
    {
        printf("Kaneda: -El farero del pueblo esta enfermo\n");
    }

    //DIALOGO CASA DEL FARERO
    else if(escena == 1)
    {
        printf("Esta casa se construyo al mismo tiempo que el viejo faro de la isla\n");
    }

    //DIALOGO LAGO TOGA
    else if(escena == 2)
    {
        printf("Como dicen los rumores, el BlueDonkey viene de vez en cuando aqui a beber el agua del lago, pero SOLO cuando la luz del faro esta encendida\n");
    }

    //DIALOGO FARO
    else if(escena == 3)
    {
        printf("He escuchado varias veces que, en ocasiones, el BlueDonkey aparece en el lago Toga SOLO cuando este faro esta en funcionamiento\n");
    }

    //DIALOGO BOSQUE SUR
    else if(escena == 4)
    {
        printf("La poblacion de la isla lleva usando las flores rojas y amarillas para fabricar pociones desde hace siglos\n");
    }

    //DIALOGO BOSQUE NORTE
    else if(escena == 5)
    {
        printf("La poblacion de la isla lleva usando las flores rojas y amarillas para fabricar pociones desde hace siglos\n");
    }
    
}

void DescribirEscena()
{

    printf("///////////////////////////////////////////////////////////////////////////////\n");

    //DESCRIPCION DONKEY VILLE
    if(escena == 0)
    {
        printf("Te encuentras en DonkeyVille acompanyado de Madeline, Esparrou y Kaneda\n");
    }

    //DESCRIPCION CASA DEL FARERO
    if(escena == 1)
    {
        printf("Estais delante de la casa del farero\n");
    }

    //DESCRIPCION LAGO TOGA

    //  CON EL FARO APAGADO
    if(escena == 2 && encendidoFaro == 0)
    {
        printf("Os encontrais en el misterioso lago Toga\n");
    }

    // CON EL FARO ENCENDIDO
    if(escena == 2 && encendidoFaro == 1)
    {
        printf("El Blue Donkey bebe tranquilo el agua del lago\n");
    }

    //FARO

    //  APAGADO
    if(escena == 3 && encendidoFaro == 0)
    {
        printf("El grupo se encuentra ante el gran y viejo faro de la isla\n");
    }

    //  ENCENDIDO
    if(escena == 3 && encendidoFaro == 1)
    {
        printf("El faro brilla con intensidad\n");
    }

    //BOSQUE SUR
    if(escena == 4)
    {
        printf("Estais en el frondoso bosque sur\n");
    }

    //BOSQUE NORTE
    if(escena == 5)
    {
        printf("Estais en el espeso bosque norte\n");
    }

    printf("///////////////////////////////////////////////////////////////////////////////\n");
    
}

int PuedeIr(int escena1, int escena2) // termina con el return
{
    if(/*Escena 0:*/ escena1 == 0 && escena2 == 1 || escena1 == 0 && escena2 == 5 || escena1 == 0 && escena2 == 2 || /*Escena 1:*/ escena1 == 1 && escena2 == 0 || /*Escena 2:*/ escena1 == 2 && escena2 == 0 || escena1 == 2 && escena2 == 3 || escena1 == 2 && escena2 == 4 || /*Escena 3:*/ escena1 == 3 && escena2 == 2 || /*Escena 4:*/ escena1 == 4 && escena2 == 2 || /*Escena 5:*/ escena1 == 5 && escena2 == 0)
    {
        return 1;
    }
    else if(escena1 == escena2)
    {
        return 2;
    }
    else 
    {
        return 0;
    }

}

void IrA()
{
    int comprobacion;
    int escena2;

    printf("A que lugar quieres ir?\n");
    printf("///////////////////////\n");
    printf("0 - DonkeyVille\n");
    printf("1 - Casa del farero\n");
    printf("2 - Lago Toga\n");
    printf("3 - Faro\n");
    printf("4 - Bosque sur\n");
    printf("5 - Bosque norte\n");
    printf("///////////////////////\n");

    scanf("%d", &escena2);

    comprobacion = PuedeIr(escena, escena2);

    if(comprobacion == 1)
    {
        escena = escena2;
    }
    else
    {
        printf("Este lugar no es accesible ahora mismo\n");
    }

    if(comprobacion == 2)
    {
        printf("Ya estas en este lugar!\n");
    }

}

void Recoger()
{
    //DONKEY VILLE
    if(escena == 0)
    {
        printf("No hay nada que recoger en este lugar ahora mismo\n");
    }

    //CASA DEL FARERO
    else if(escena == 1)
    {
        printf("No hay nada que recoger en este lugar ahora mismo\n");
    }

    //LAGO TOGA
    else if(escena == 2)
    {
        printf("No hay nada que recoger en este lugar ahora mismo\n");
    }

    //FARO
    else if(escena == 3)
    {
        printf("No hay nada que recoger en este lugar ahora mismo\n");
    }

    //BOSQUE SUR

    //  RECOGER LA FLOR AMARILLA
    else if(escena == 4 && tieneFlorAmarilla == 0 && entregadaFlorAmarilla == 0)
    {
        int eleccion;

        printf("Hay una flor amarilla en el suelo. Quieres llevartela?\n");
        printf("1 - Si\n");
        printf("2 - No\n");
        scanf("%d", &eleccion);

        if(eleccion == 1)
        {
            printf("Has recogido la flor amarilla\n");
            tieneFlorAmarilla = 1;
        }
    }

    //  NADA QUE RECOGER EN EL BOSQUE SUR
    else if(escena == 4 && tieneFlorAmarilla == 1)
    {
        printf("No hay nada que recoger en este lugar ahora mismo\n");
    }
    else if(escena == 4 && tieneFlorAmarilla == 0 && entregadaFlorAmarilla == 1)
    {
        printf("No hay nada que recoger en este lugar ahora mismo\n");
    }

    //BOSQUE NORTE

    //  RECOGER FLOR ROJA
    else if(escena == 5 && tieneFlorRoja == 0 && encontradaHerradura == 0 && entregadaFlorRoja == 0)
    {
        int eleccion;

        printf("Hay una flor roja en el suelo. Quieres llevartela?\n");
        printf("1 - Si\n");
        printf("2 - No\n");
        scanf("%d", &eleccion);

        if(eleccion == 1)
        {
            printf("Has recogido la flor roja\n");
            tieneFlorRoja = 1;
        }
    }
    else if(escena == 5 && tieneFlorRoja == 0 && tieneHerradura == 1 && entregadaFlorRoja == 0)
    {
        int eleccion;

        printf("Hay una flor roja en el suelo. Quieres llevartela?\n");
        printf("1 - Si\n");
        printf("2 - No\n");
        scanf("%d", &eleccion);

        if(eleccion == 1)
        {
            printf("Has recogido la flor roja\n");
            tieneFlorRoja = 1;
        }
    }

    //  RECOGER HERRADURA AZUL
    else if(escena == 5 && tieneFlorRoja == 1 && encontradaHerradura == 1 && tieneHerradura == 0)
    {
        int eleccion;

        printf("La herradura azul se encuentra en el suelo. Quieres cogerla?\n");
        printf("1 - Si\n");
        printf("2 - No\n");
        scanf("%d", &eleccion);

        if(eleccion == 1)
        {
            printf("Obtienes la herradura azul\n");
            tieneHerradura = 1;
        }
    }
    else if(escena == 5 && tieneFlorRoja == 0 && encontradaHerradura == 1 && tieneHerradura == 0 && entregadaFlorRoja == 1)
    {
        int eleccion;

        printf("La herradura azul se encuentra en el suelo. Quieres cogerla?\n");
        printf("1 - Si\n");
        printf("2 - No\n");
        scanf("%d", &eleccion);

        if(eleccion == 1)
        {
            printf("Obtienes la herradura azul\n");
            tieneHerradura = 1;
        }
    }

    // RECOGER TANTO LA FLOR ROJA COMO LA HERRADURA AZUL
    else if(escena == 5 && tieneFlorRoja == 0 && encontradaHerradura == 1 && tieneHerradura == 0 && entregadaFlorRoja == 0)
    {
        int eleccion;

        printf("La herradura azul esta en el suelo, y a su lado hay una flor roja. Que quieres llevarte?\n");
        printf("1 - La herradura\n");
        printf("2 - La flor\n");
        printf("3 - Las dos\n");
        scanf("%d", &eleccion);

        if(eleccion == 1)
        {
            printf("Obtienes la herradura azul\n");
            tieneHerradura = 1;
        }
        if(eleccion == 2)
        {
            printf("Recoges la flor roja\n");
            tieneFlorRoja = 1;
        }
        if(eleccion == 3)
        {
            printf("Te llevas tanto la herradura como la flor roja\n");
            tieneFlorRoja = 1;
            tieneHerradura = 1;
        }
    }

    //  NADA QUE RECOGER EN EL BOSQUE NORTE
    else if(escena == 5 && tieneFlorRoja == 1 && encontradaHerradura == 0)
    {
        printf("No hay nada que recoger en este lugar ahora mismo\n");
    }
    else if(escena == 5 && tieneFlorRoja == 1 && tieneHerradura == 1)
    {
        printf("No hay nada que recoger en este lugar ahora mismo\n");
    }
    else if(escena == 5 && tieneFlorRoja == 0 && encontradaHerradura == 1 && entregadaFlorRoja == 1 && tieneHerradura == 1)
    {
        printf("No hay nada que recoger en este lugar ahora mismo\n");
    }
    else if(escena == 5 && tieneFlorRoja == 0 && encontradaHerradura == 0 && entregadaFlorRoja == 1)
    {
        printf("No hay nada que recoger en este lugar ahora mismo\n");
    }

    
    
    
}

void Usar()
{

    //DONKEY VILLE
    if(escena == 0)
    {
        printf("No tienes ningun objeto que usar aqui ahora mismo\n");
    }

    //CASA DEL FARERO

    //  NADA QUE USAR EN LA CASA DEL FARERO
    else if(escena == 1 && tieneFlorRoja == 0 && tieneFlorAmarilla == 0)
    {
        printf("No tienes ningun objeto que usar aqui ahora mismo\n");
    }

    // DEPOSITAR FLOR ROJA EN EL BUZON DEL FARERO
    else if(escena == 1 && tieneFlorRoja == 1 && tieneFlorAmarilla == 0)
    {
        int eleccion = 0;

        printf("Depositar la flor roja en el buzon?\n");
        printf("1 - Si\n");
        printf("2 - No\n");
        scanf("%d", &eleccion);
        if(eleccion == 1)
        {
            printf("Depositas la flor roja en el buzon del farero\n");
            entregadaFlorRoja = 1;
            tieneFlorRoja = 0;
        }
        if(eleccion == 2)
        {
            printf("No depositas la flor roja en el buzon del farero\n");
        }
    }

    // DEPOSITAR FLOR AMARILLA EN EL BUZON DEL FARERO
    else if(escena == 1 && tieneFlorRoja == 0 && tieneFlorAmarilla == 1)
    {
        int eleccion = 0;

        printf("Depositar la flor amarilla en el buzon?\n");
        printf("1 - Si\n");
        printf("2 - No\n");
        scanf("%d", &eleccion);
        if(eleccion == 1)
        {
            printf("Depositas la flor amarilla en el buzon del farero\n");
            entregadaFlorAmarilla = 1;
            tieneFlorAmarilla = 0;
        }
        if(eleccion == 2)
        {
            printf("No depositas la flor amarilla en el buzon del farero\n");
        }
    }

    // DEPOSITAR AMBAS FLORES EN EL BUZON DEL FARERO
    else if(escena == 1 && tieneFlorAmarilla == 1 && tieneFlorRoja == 1)
    {
        int eleccion = 0;

        printf("Depositar las flores en el buzon?\n");
        printf("1 - Si\n");
        printf("2 - No\n");
        scanf("%d", &eleccion);
        if(eleccion == 1)
        {
            printf("Depositas ambas flores en el buzon\n");
            entregadaFlorAmarilla = 1;
            entregadaFlorRoja = 1;

            tieneFlorAmarilla = 0;
            tieneFlorRoja = 0;
        }
        if(eleccion == 0)
        {
            printf("No depositas las flores en el buzon");
        }
    }

    //LAGO TOGA

    //  NADA QUE USAR EN EL LAGO TOGA
    else if(escena == 2 && encendidoFaro == 0 && encontradaHerradura == 0)
    {
        printf("No tienes ningun objeto que usar aqui ahora mismo\n");
    }
    else if(escena == 2 && encendidoFaro == 0 && encontradaHerradura == 1)
    {
        printf("No tienes ningun objeto que usar aqui ahora mismo\n");
    }
    else if(escena == 2 && encendidoFaro == 1 && encontradaHerradura == 0)
    {
        printf("No tienes ningun objeto que usar aqui ahora mismo\n");
    }

    //  PONER LA HERRADURA AZUL
    else if(escena == 2 && encendidoFaro == 1 && encontradaHerradura == 1)
    {
        printf("*Le pones la herradura azul al Blue Donkey*\n");

        puestoHerradura = 1;
    }

    //FARO
    else if(escena == 3)
    {
        printf("No tienes ningun objeto que usar aqui ahora mismo\n");
    }

    //BOSQUE SUR
    else if(escena == 4)
    {
        printf("No tienes ningun objeto que usar aqui ahora mismo\n");
    }

    //BOSQUE NORTE
    else if(escena == 5)
    {
        printf("No tienes ningun objeto que usar aqui ahora mismo\n");
    }
}

int JuegoFinalizado()
{
    printf("Al haberle puesto la herradura azul, el Blue Donkey os guia hasta el tesoro\n");
    printf("\n");
    printf("//////////////////////\n");
    printf("//                  //\n");
    printf("//                  //\n");
    printf("// JUEGO COMPLETADO //\n");
    printf("//                  //\n");
    printf("//                  //\n");
    printf("//////////////////////\n");
}

void main()
{
    while(puestoHerradura == 0)
    {
        if(entregadaFlorAmarilla == 1 && entregadaFlorRoja == 1 && encendidoFaro == 0)
        {
            printf("Farero: -Muchas gracias por traerme las flores! Ire a encender el faro en cuanto fabrique y me tome la pocion\n");
            encendidoFaro = 1;
        }

        DescribirEscena();

        int accion = 0;

        printf("\n");
        printf("/////////////////////////\n");
        printf("Acciones disponibles:\n");
        printf("/////////////////////////\n");
        printf("1 - Hablar con Madeleine \n");
        printf("2 - Hablar con Esparrou \n");
        printf("3 - Hablar con Kaneda \n");
        printf("4 - Ir a otro sitio\n");
        printf("5 - Recoger objeto\n");
        printf("6 - Usar objeto\n");
        printf("/////////////////////////\n");

        scanf("%d", &accion);

        if(accion == 1)
        {
            HablarMadeleine();
        }
        if(accion == 2)
        {
            HablarEsparrou();
        }
        if(accion == 3)
        {
            HablarKaneda();
        }
        if(accion == 4)
        {
            IrA();
        }
        if(accion == 5)
        {
            Recoger();
        }
        if(accion == 6)
        {
            Usar();
        }
    }
        
    if(puestoHerradura == 1)
    {
        JuegoFinalizado();
    }
}