datost aux;
    int maxTitulos = 0, i;
    char nombre[MAXSTR], apellido[MAXSTR];

    for (i = 0; i < CANTJUG; i++)
    {
        fread(&aux, sizeof(datost), 1, f);
        if (aux.titulos > maxTitulos)
        {
            maxTitulos = aux.titulos;
            strcpy(nombre, aux.nombre);
            strcpy(apellido, aux.apellido);
        }
    }