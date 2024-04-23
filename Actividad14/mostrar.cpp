void mostrarBienvenida() {
    string bienvenida = R"(
        | __ )  (_)   ___   _ __   __   __   ___   _ __   (_)   __| |   ___  
        |  _ \  | |  / _ \ | '_ \  \ \ / /  / _ \ | '_ \  | |  / _` |  / _ \ 
        | |_) | | | |  __/ | | | |  \ V /  |  __/ | | | | | | | (_| | | (_) |
        |____/  |_|  \___| |_| |_|   \_/    \___| |_| |_| |_|  \__,_|  \___/ 
                              _       _                                        _          _   
                       __ _  | |     (_)  _   _    ___    __ _    ___       __| |   ___  | |  
                      / _` | | |     | | | | | |  / _ \  / _` |  / _ \     / _` |  / _ \ | |  
                     | (_| | | |     | | | |_| | |  __/ | (_| | | (_) |   | (_| | |  __/ | |  
                      \__,_| |_|    _/ |  \__,_|  \___|  \__, |  \___/     \__,_|  \___| |_|  
                                   |__/                  |___/                                
                      _                                         _         
               __ _  | |__     ___    _ __    ___    __ _    __| |   ___  
              / _` | | '_ \   / _ \  | '__|  / __|  / _` |  / _` |  / _ \ 
             | (_| | | | | | | (_) | | |    | (__  | (_| | | (_| | | (_) |
              \__,_| |_| |_|  \___/  |_|     \___|  \__,_|  \__,_|  \___/ 
                                                                                
    )";

    cout << bienvenida <<endl;
}


void mostrarAhorcado(int& vida){
    string ahorcado6 = R"(
            +---+
            |   |
            O   |
           /|\  |
           / \  |
                |
            =======
    )";
    
    string ahorcado5 = R"(
            +---+
            |   |
            O   |
           /|\  |
           /    |
                |
            =======
    )";

    string ahorcado4 = R"(
            +---+
            |   |
            O   |
           /|\  |
                |
                |
            =======
    )";

    string ahorcado3 = R"(
            +---+
            |   |
            O   |
           /|   |
                |
                |
            =======
    )";

    string ahorcado2 = R"(
            +---+
            |   |
            O   |
            |   |
                |
                |
            =======
    )";

    string ahorcado1 = R"(
            +---+
            |   |
            O   |
                |
                |
                |
            =======
    )";

    string ahorcado0 = R"(
            +---+
            |   |
                |
                |
                |
                |
            =======
    )";


    switch(vida)
    {
    case 6:
        cout << ahorcado6 << endl;
        break;
    case 5:
        cout << ahorcado5 << endl;
    break;
    case 4:
        cout << ahorcado4 << endl;
    break;
    case 3:
        cout << ahorcado3 << endl;
    break;
    case 2:
        cout << ahorcado2 << endl;
    break;
    case 1:
        cout << ahorcado1 << endl;
    break;
    case 0:
        cout << ahorcado0 << endl;
    break;
    }
}