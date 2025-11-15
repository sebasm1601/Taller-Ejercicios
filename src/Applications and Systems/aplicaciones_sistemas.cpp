#include <iostream>
#include <cmath>
#include <cstring>
#include "aplicaciones_sistemas.h"
using namespace std;


void calculadoraBasica() {
    cout << "\n=== EJERCICIO 1: CALCULADORA BASICA ===" << endl;
    
    char continuar;
    do {
        double num1, num2, resultado;
        char operador;
        
        cout << "\nIngrese primer numero: ";
        cin >> num1;
        cout << "Ingrese operador (+, -, *, /): ";
        cin >> operador;
        cout << "Ingrese segundo numero: ";
        cin >> num2;
        
        bool operacionValida = true;
        
        switch(operador) {
            case '+':
                resultado = num1 + num2;
                cout << num1 << " + " << num2 << " = " << resultado << endl;
                break;
            case '-':
                resultado = num1 - num2;
                cout << num1 << " - " << num2 << " = " << resultado << endl;
                break;
            case '*':
                resultado = num1 * num2;
                cout << num1 << " * " << num2 << " = " << resultado << endl;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "Error: Division por cero" << endl;
                    operacionValida = false;
                } else {
                    resultado = num1 / num2;
                    cout << num1 << " / " << num2 << " = " << resultado << endl;
                }
                break;
            default:
                cout << "Operador invalido" << endl;
                operacionValida = false;
        }
        
        cout << "\n¿Realizar otra operacion? (s/n): ";
        cin >> continuar;
        
    } while (continuar == 's' || continuar == 'S');
}


void reservaBoletos() {
    cout << "\n=== EJERCICIO 2: RESERVA DE BOLETOS DE CINE ===" << endl;
    
    const int FILAS = 5;
    const int ASIENTOS = 8;
    bool sala[FILAS][ASIENTOS] = {false}; 
    
    int totalReservados = 0;
    char continuar;
    
    cout << "\nBienvenido al sistema de reservas de CinePlus" << endl;
    cout << "Sala con " << FILAS << " filas y " << ASIENTOS << " asientos por fila" << endl;
    
    do {
        
        cout << "\n--- Mapa de Asientos ---" << endl;
        cout << "  ";
        for (int j = 0; j < ASIENTOS; j++) {
            cout << (j + 1) << " ";
        }
        cout << endl;
        
        for (int i = 0; i < FILAS; i++) {
            cout << (char)('A' + i) << " ";
            for (int j = 0; j < ASIENTOS; j++) {
                if (sala[i][j]) {
                    cout << "X ";
                } else {
                    cout << "O ";
                }
            }
            cout << endl;
        }
        
        cout << "\nO = Disponible | X = Ocupado" << endl;
        cout << "Asientos disponibles: " << (FILAS * ASIENTOS - totalReservados) << endl;
        cout << "Asientos reservados: " << totalReservados << endl;
        
        
        char fila;
        int asiento;
        
        cout << "\nIngrese fila (A-" << (char)('A' + FILAS - 1) << "): ";
        cin >> fila;
        fila = toupper(fila);
        
        cout << "Ingrese asiento (1-" << ASIENTOS << "): ";
        cin >> asiento;
        
        int filaIdx = fila - 'A';
        int asientoIdx = asiento - 1;
        
        if (filaIdx >= 0 && filaIdx < FILAS && asientoIdx >= 0 && asientoIdx < ASIENTOS) {
            if (sala[filaIdx][asientoIdx]) {
                cout << "\n¡Lo sentimos! El asiento " << fila << asiento << " ya esta ocupado." << endl;
            } else {
                sala[filaIdx][asientoIdx] = true;
                totalReservados++;
                cout << "\n¡Reserva exitosa! Asiento " << fila << asiento << " confirmado." << endl;
            }
        } else {
            cout << "\nAsiento invalido. Intente de nuevo." << endl;
        }
        
        if (totalReservados < FILAS * ASIENTOS) {
            cout << "\n¿Realizar otra reserva? (s/n): ";
            cin >> continuar;
        } else {
            cout << "\n¡Sala llena! No hay mas asientos disponibles." << endl;
            continuar = 'n';
        }
        
    } while (continuar == 's' || continuar == 'S');
    
    cout << "\n--- Resumen Final ---" << endl;
    cout << "Total de reservas: " << totalReservados << endl;
    cout << "Porcentaje de ocupacion: " << (totalReservados * 100.0 / (FILAS * ASIENTOS)) << "%" << endl;
}


void gestionCalificaciones() {
    cout << "\n=== EJERCICIO 3: GESTION DE CALIFICACIONES ===" << endl;
    
    const int MAX_ESTUDIANTES = 20;
    char nombres[MAX_ESTUDIANTES][50];
    float calificaciones[MAX_ESTUDIANTES];
    int numEstudiantes = 0;
    
    cout << "\nSistema de Gestion de Calificaciones" << endl;
    
    int opcion;
    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Agregar estudiante" << endl;
        cout << "2. Mostrar todos los estudiantes" << endl;
        cout << "3. Calcular promedio general" << endl;
        cout << "4. Buscar estudiante" << endl;
        cout << "5. Mostrar estadisticas" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();
        
        switch(opcion) {
            case 1:
                if (numEstudiantes < MAX_ESTUDIANTES) {
                    cout << "\nNombre del estudiante: ";
                    cin.getline(nombres[numEstudiantes], 50);
                    cout << "Calificacion (0-100): ";
                    cin >> calificaciones[numEstudiantes];
                    
                    if (calificaciones[numEstudiantes] >= 0 && calificaciones[numEstudiantes] <= 100) {
                        numEstudiantes++;
                        cout << "Estudiante agregado exitosamente!" << endl;
                    } else {
                        cout << "Calificacion invalida" << endl;
                    }
                } else {
                    cout << "Limite de estudiantes alcanzado" << endl;
                }
                break;
                
            case 2:
                cout << "\n--- Lista de Estudiantes ---" << endl;
                for (int i = 0; i < numEstudiantes; i++) {
                    cout << (i + 1) << ". " << nombres[i] << " - " << calificaciones[i];
                    if (calificaciones[i] >= 90) cout << " (A - Excelente)";
                    else if (calificaciones[i] >= 80) cout << " (B - Bueno)";
                    else if (calificaciones[i] >= 70) cout << " (C - Regular)";
                    else if (calificaciones[i] >= 60) cout << " (D - Insuficiente)";
                    else cout << " (F - Reprobado)";
                    cout << endl;
                }
                break;
                
            case 3:
                if (numEstudiantes > 0) {
                    float suma = 0;
                    for (int i = 0; i < numEstudiantes; i++) {
                        suma += calificaciones[i];
                    }
                    cout << "\nPromedio general: " << (suma / numEstudiantes) << endl;
                } else {
                    cout << "No hay estudiantes registrados" << endl;
                }
                break;
                
            case 4: {
                char buscar[50];
                cout << "\nNombre a buscar: ";
                cin.getline(buscar, 50);
                bool encontrado = false;
                for (int i = 0; i < numEstudiantes; i++) {
                    if (strcmp(nombres[i], buscar) == 0) {
                        cout << "Estudiante: " << nombres[i] << endl;
                        cout << "Calificacion: " << calificaciones[i] << endl;
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado) cout << "Estudiante no encontrado" << endl;
                break;
            }
                
            case 5:
                if (numEstudiantes > 0) {
                    float max = calificaciones[0], min = calificaciones[0];
                    int aprobados = 0;
                    for (int i = 0; i < numEstudiantes; i++) {
                        if (calificaciones[i] > max) max = calificaciones[i];
                        if (calificaciones[i] < min) min = calificaciones[i];
                        if (calificaciones[i] >= 60) aprobados++;
                    }
                    cout << "\n--- Estadisticas ---" << endl;
                    cout << "Total estudiantes: " << numEstudiantes << endl;
                    cout << "Calificacion mas alta: " << max << endl;
                    cout << "Calificacion mas baja: " << min << endl;
                    cout << "Aprobados: " << aprobados << endl;
                    cout << "Reprobados: " << (numEstudiantes - aprobados) << endl;
                }
                break;
        }
    } while (opcion != 0);
}


void conversorMonedas() {
    cout << "\n=== EJERCICIO 4: CONVERSOR DE MONEDAS ===" << endl;
    
    
    const double USD_TO_EUR = 0.92;
    const double USD_TO_GBP = 0.79;
    const double USD_TO_JPY = 149.50;
    const double USD_TO_COP = 4000.0;
    
    char continuar;
    do {
        cout << "\n--- Conversor de Monedas ---" << endl;
        cout << "1. USD a EUR (Euro)" << endl;
        cout << "2. USD a GBP (Libra)" << endl;
        cout << "3. USD a JPY (Yen)" << endl;
        cout << "4. USD a COP (Peso Colombiano)" << endl;
        cout << "5. Conversion personalizada" << endl;
        
        int opcion;
        double cantidad, resultado;
        
        cout << "\nSeleccione conversion: ";
        cin >> opcion;
        cout << "Cantidad en USD: ";
        cin >> cantidad;
        
        switch(opcion) {
            case 1:
                resultado = cantidad * USD_TO_EUR;
                cout << "$" << cantidad << " USD = €" << resultado << " EUR" << endl;
                break;
            case 2:
                resultado = cantidad * USD_TO_GBP;
                cout << "$" << cantidad << " USD = £" << resultado << " GBP" << endl;
                break;
            case 3:
                resultado = cantidad * USD_TO_JPY;
                cout << "$" << cantidad << " USD = ¥" << resultado << " JPY" << endl;
                break;
            case 4:
                resultado = cantidad * USD_TO_COP;
                cout << "$" << cantidad << " USD = $" << resultado << " COP" << endl;
                break;
            case 5: {
                double tasa;
                cout << "Ingrese tasa de cambio: ";
                cin >> tasa;
                resultado = cantidad * tasa;
                cout << "$" << cantidad << " = " << resultado << endl;
                break;
            }
            default:
                cout << "Opcion invalida" << endl;
        }
        
        cout << "\n¿Otra conversion? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
}


void autenticacionUsuarios() {
    cout << "\n=== EJERCICIO 5: SISTEMA DE AUTENTICACION ===" << endl;
    
    const int MAX_USUARIOS = 10;
    char usuarios[MAX_USUARIOS][30];
    char contrasenas[MAX_USUARIOS][30];
    int numUsuarios = 0;
    bool sesionActiva = false;
    char usuarioActual[30];
    
    int opcion;
    do {
        if (!sesionActiva) {
            cout << "\n--- Sistema de Autenticacion ---" << endl;
            cout << "1. Registrar nuevo usuario" << endl;
            cout << "2. Iniciar sesion" << endl;
            cout << "3. Mostrar usuarios registrados" << endl;
            cout << "0. Salir" << endl;
        } else {
            cout << "\n--- Sesion Activa: " << usuarioActual << " ---" << endl;
            cout << "1. Ver perfil" << endl;
            cout << "2. Cambiar contrasena" << endl;
            cout << "3. Cerrar sesion" << endl;
            cout << "0. Salir" << endl;
        }
        
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();
        
        if (!sesionActiva) {
            switch(opcion) {
                case 1:
                    if (numUsuarios < MAX_USUARIOS) {
                        cout << "\nNombre de usuario: ";
                        cin.getline(usuarios[numUsuarios], 30);
                        
                        
                        bool existe = false;
                        for (int i = 0; i < numUsuarios; i++) {
                            if (strcmp(usuarios[i], usuarios[numUsuarios]) == 0) {
                                existe = true;
                                break;
                            }
                        }
                        
                        if (existe) {
                            cout << "Usuario ya existe" << endl;
                        } else {
                            cout << "Contrasena: ";
                            cin.getline(contrasenas[numUsuarios], 30);
                            numUsuarios++;
                            cout << "¡Usuario registrado exitosamente!" << endl;
                        }
                    } else {
                        cout << "Limite de usuarios alcanzado" << endl;
                    }
                    break;
                    
                case 2: {
                    char user[30], pass[30];
                    cout << "\nUsuario: ";
                    cin.getline(user, 30);
                    cout << "Contrasena: ";
                    cin.getline(pass, 30);
                    
                    bool autenticado = false;
                    for (int i = 0; i < numUsuarios; i++) {
                        if (strcmp(usuarios[i], user) == 0 && strcmp(contrasenas[i], pass) == 0) {
                            sesionActiva = true;
                            strcpy(usuarioActual, user);
                            cout << "\n¡Bienvenido " << user << "!" << endl;
                            autenticado = true;
                            break;
                        }
                    }
                    
                    if (!autenticado) {
                        cout << "Usuario o contrasena incorrectos" << endl;
                    }
                    break;
                }
                    
                case 3:
                    cout << "\n--- Usuarios Registrados ---" << endl;
                    for (int i = 0; i < numUsuarios; i++) {
                        cout << (i + 1) << ". " << usuarios[i] << endl;
                    }
                    break;
            }
        } else {
            switch(opcion) {
                case 1:
                    cout << "\n--- Perfil ---" << endl;
                    cout << "Usuario: " << usuarioActual << endl;
                    cout << "Estado: Sesion activa" << endl;
                    break;
                    
                case 2: {
                    char passActual[30], passNueva[30];
                    cout << "\nContrasena actual: ";
                    cin.getline(passActual, 30);
                    
                    for (int i = 0; i < numUsuarios; i++) {
                        if (strcmp(usuarios[i], usuarioActual) == 0) {
                            if (strcmp(contrasenas[i], passActual) == 0) {
                                cout << "Nueva contrasena: ";
                                cin.getline(passNueva, 30);
                                strcpy(contrasenas[i], passNueva);
                                cout << "Contrasena actualizada" << endl;
                            } else {
                                cout << "Contrasena actual incorrecta" << endl;
                            }
                            break;
                        }
                    }
                    break;
                }
                    
                case 3:
                    sesionActiva = false;
                    cout << "Sesion cerrada" << endl;
                    break;
            }
        }
    } while (opcion != 0);
}


void evaluadorExpresiones() {
    cout << "\n=== EJERCICIO 6: EVALUADOR DE EXPRESIONES ===" << endl;
    
    char continuar;
    do {
        char expresion[100];
        cout << "\nIngrese expresion (ejemplo: 5 + 3 * 2): ";
        cin.ignore();
        cin.getline(expresion, 100);
        
        
        double resultado = 0;
        char operador = '+';
        
        int i = 0;
        while (expresion[i] != '\0') {
            if (expresion[i] >= '0' && expresion[i] <= '9') {
                double num = 0;
                while (expresion[i] >= '0' && expresion[i] <= '9') {
                    num = num * 10 + (expresion[i] - '0');
                    i++;
                }
                
                switch(operador) {
                    case '+': resultado += num; break;
                    case '-': resultado -= num; break;
                    case '*': resultado *= num; break;
                    case '/': 
                        if (num != 0) resultado /= num;
                        else cout << "Error: division por cero" << endl;
                        break;
                }
            } else if (expresion[i] == '+' || expresion[i] == '-' || 
                       expresion[i] == '*' || expresion[i] == '/') {
                operador = expresion[i];
                i++;
            } else {
                i++;
            }
        }
        
        cout << "Resultado: " << resultado << endl;
        
        cout << "\n¿Evaluar otra expresion? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
}


void sistemaVotacion() {
    cout << "\n=== EJERCICIO 7: SISTEMA DE VOTACION ===" << endl;
    
    const int MAX_CANDIDATOS = 5;
    char candidatos[MAX_CANDIDATOS][50];
    int votos[MAX_CANDIDATOS] = {0};
    int numCandidatos = 0;
    int totalVotos = 0;
    
    cout << "\n--- Configuracion de Candidatos ---" << endl;
    cout << "¿Cuantos candidatos? (1-" << MAX_CANDIDATOS << "): ";
    cin >> numCandidatos;
    cin.ignore();
    
    if (numCandidatos < 1 || numCandidatos > MAX_CANDIDATOS) {
        cout << "Numero invalido" << endl;
        return;
    }
    
    for (int i = 0; i < numCandidatos; i++) {
        cout << "Nombre candidato " << (i + 1) << ": ";
        cin.getline(candidatos[i], 50);
    }
    
    cout << "\n--- Sistema de Votacion Iniciado ---" << endl;
    char continuar;
    do {
        cout << "\n--- Candidatos ---" << endl;
        for (int i = 0; i < numCandidatos; i++) {
            cout << (i + 1) << ". " << candidatos[i] << endl;
        }
        
        int voto;
        cout << "\nIngrese su voto (1-" << numCandidatos << "): ";
        cin >> voto;
        
        if (voto >= 1 && voto <= numCandidatos) {
            votos[voto - 1]++;
            totalVotos++;
            cout << "¡Voto registrado!" << endl;
        } else {
            cout << "Voto invalido" << endl;
        }
        
        cout << "\n¿Otro votante? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
    
    
    cout << "\n=== RESULTADOS DE LA VOTACION ===" << endl;
    cout << "Total de votos: " << totalVotos << endl;
    
    int maxVotos = 0;
    int ganador = 0;
    
    for (int i = 0; i < numCandidatos; i++) {
        double porcentaje = (totalVotos > 0) ? (votos[i] * 100.0 / totalVotos) : 0;
        cout << "\n" << candidatos[i] << ":" << endl;
        cout << "  Votos: " << votos[i] << " (" << porcentaje << "%)" << endl;
        
        
        cout << "  ";
        for (int j = 0; j < votos[i]; j++) {
            cout << "*";
        }
        cout << endl;
        
        if (votos[i] > maxVotos) {
            maxVotos = votos[i];
            ganador = i;
        }
    }
    
    cout << "\n¡GANADOR: " << candidatos[ganador] << " con " << maxVotos << " votos!" << endl;
}


void seguimientoPuntajes() {
    cout << "\n=== EJERCICIO 8: SEGUIMIENTO DE PUNTAJES ===" << endl;
    
    const int MAX_JUGADORES = 10;
    char jugadores[MAX_JUGADORES][30];
    int puntajes[MAX_JUGADORES] = {0};
    int partidas[MAX_JUGADORES] = {0};
    int numJugadores = 0;
    
    int opcion;
    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Agregar jugador" << endl;
        cout << "2. Registrar puntaje" << endl;
        cout << "3. Ver tabla de posiciones" << endl;
        cout << "4. Ver estadisticas de jugador" << endl;
        cout << "5. Resetear puntajes" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();
        
        switch(opcion) {
            case 1:
                if (numJugadores < MAX_JUGADORES) {
                    cout << "\nNombre del jugador: ";
                    cin.getline(jugadores[numJugadores], 30);
                    numJugadores++;
                    cout << "Jugador agregado!" << endl;
                } else {
                    cout << "Limite alcanzado" << endl;
                }
                break;
                
            case 2: {
                cout << "\n--- Jugadores ---" << endl;
                for (int i = 0; i < numJugadores; i++) {
                    cout << (i + 1) << ". " << jugadores[i] << endl;
                }
                
                int idx, puntos;
                cout << "Seleccione jugador: ";
                cin >> idx;
                
                if (idx >= 1 && idx <= numJugadores) {
                    cout << "Puntaje obtenido: ";
                    cin >> puntos;
                    puntajes[idx - 1] += puntos;
                    partidas[idx - 1]++;
                    cout << "Puntaje registrado!" << endl;
                }
                break;
            }
                
            case 3: {
                
                for (int i = 0; i < numJugadores - 1; i++) {
                    for (int j = 0; j < numJugadores - i - 1; j++) {
                        if (puntajes[j] < puntajes[j + 1]) {
                            
                            int tempP = puntajes[j];
                            puntajes[j] = puntajes[j + 1];
                            puntajes[j + 1] = tempP;
                            
                            
                            int tempPar = partidas[j];
                            partidas[j] = partidas[j + 1];
                            partidas[j + 1] = tempPar;
                            
                            
                            char tempN[30];
                            strcpy(tempN, jugadores[j]);
                            strcpy(jugadores[j], jugadores[j + 1]);
                            strcpy(jugadores[j + 1], tempN);
                        }
                    }
                }
                
                cout << "\n--- Tabla de Posiciones ---" << endl;
                for (int i = 0; i < numJugadores; i++) {
                    cout << (i + 1) << ". " << jugadores[i] 
                         << " - " << puntajes[i] << " pts" << endl;
                }
                break;
            }
                
            case 4: {
                char buscar[30];
                cout << "\nNombre del jugador: ";
                cin.getline(buscar, 30);
                
                for (int i = 0; i < numJugadores; i++) {
                    if (strcmp(jugadores[i], buscar) == 0) {
                        cout << "\n--- Estadisticas ---" << endl;
                        cout << "Jugador: " << jugadores[i] << endl;
                        cout << "Puntaje total: " << puntajes[i] << endl;
                        cout << "Partidas jugadas: " << partidas[i] << endl;
                        if (partidas[i] > 0) {
                            cout << "Promedio: " << (puntajes[i] / (double)partidas[i]) << endl;
                        }
                        break;
                    }
                }
                break;
            }
                
            case 5:
                for (int i = 0; i < numJugadores; i++) {
                    puntajes[i] = 0;
                    partidas[i] = 0;
                }
                cout << "Puntajes reseteados" << endl;
                break;
        }
    } while (opcion != 0);
}


void calculadoraSalud() {
    cout << "\n=== EJERCICIO 9: CALCULADORA DE SALUD ===" << endl;
    
    int opcion;
    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Calcular BMI (Indice de Masa Corporal)" << endl;
        cout << "2. Calcular calorias diarias recomendadas" << endl;
        cout << "3. Calcular gasto calorico por actividad" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1: {
                double peso, altura;
                cout << "\nPeso (kg): ";
                cin >> peso;
                cout << "Altura (m): ";
                cin >> altura;
                
                double bmi = peso / (altura * altura);
                
                cout << "\n--- Resultado BMI ---" << endl;
                cout << "Tu BMI es: " << bmi << endl;
                
                if (bmi < 18.5) {
                    cout << "Categoria: Bajo peso" << endl;
                } else if (bmi < 25) {
                    cout << "Categoria: Peso normal" << endl;
                } else if (bmi < 30) {
                    cout << "Categoria: Sobrepeso" << endl;
                } else {
                    cout << "Categoria: Obesidad" << endl;
                }
                break;
            }
                
            case 2: {
                double peso, altura;
                int edad;
                char sexo;
                
                cout << "\nPeso (kg): ";
                cin >> peso;
                cout << "Altura (cm): ";
                cin >> altura;
                cout << "Edad: ";
                cin >> edad;
                cout << "Sexo (M/F): ";
                cin >> sexo;
                
                // Formula de Harris-Benedict
                double tmb;
                if (sexo == 'M' || sexo == 'm') {
                    tmb = 88.362 + (13.397 * peso) + (4.799 * altura) - (5.677 * edad);
                } else {
                    tmb = 447.593 + (9.247 * peso) + (3.098 * altura) - (4.330 * edad);
                }
                
                cout << "\n--- Calorias Diarias ---" << endl;
                cout << "Metabolismo basal: " << tmb << " kcal" << endl;
                cout << "\nSegun nivel de actividad:" << endl;
                cout << "Sedentario: " << (tmb * 1.2) << " kcal" << endl;
                cout << "Ligera actividad: " << (tmb * 1.375) << " kcal" << endl;
                cout << "Moderada actividad: " << (tmb * 1.55) << " kcal" << endl;
                cout << "Intensa actividad: " << (tmb * 1.725) << " kcal" << endl;
                cout << "Muy intensa: " << (tmb * 1.9) << " kcal" << endl;
                break;
            }
                
            case 3: {
                double peso;
                int minutos;
                
                cout << "\nPeso (kg): ";
                cin >> peso;
                cout << "Minutos de actividad: ";
                cin >> minutos;
                
                cout << "\n--- Seleccione actividad ---" << endl;
                cout << "1. Caminar (3.5 km/h)" << endl;
                cout << "2. Correr (8 km/h)" << endl;
                cout << "3. Ciclismo moderado" << endl;
                cout << "4. Natacion" << endl;
                cout << "5. Pesas" << endl;
                
                int actividad;
                cin >> actividad;
                
                double met;
                switch(actividad) {
                    case 1: met = 3.5; break;
                    case 2: met = 8.0; break;
                    case 3: met = 6.0; break;
                    case 4: met = 7.0; break;
                    case 5: met = 5.0; break;
                    default: met = 3.0;
                }
                
                double calorias = (met * peso * minutos) / 60.0;
                
                cout << "\nCalorias quemadas: " << calorias << " kcal" << endl;
                break;
            }
        }
    } while (opcion != 0);
}
