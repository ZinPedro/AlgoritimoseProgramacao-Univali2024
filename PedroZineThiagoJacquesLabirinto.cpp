#include <iostream>
#include <locale>
#include <stdlib.h>

///system("cls");
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");

  ///////////VARIAVEIS//////////////

  char menu, direcao, v = 'v', pergunta;
  int p = 1, chave = 0, totem = 0, clear = 0;

  ///////ENTRADA DE DADOS//////////

  cout << "Digite (i) para os integrantes do grupo: " << endl;
  cout << "Digite (j) para jogar " << endl;
  cout << "Digite (s) para sair " << endl;

  cin >> menu;
  switch (menu) { /////MENU//////

  case 'i': ////MOSTRAR INTEGRANTES////
    while (v == 'v' || v == 'V') {
      cout << "Os integrantes do grupo são: \nPedro Henrique Coan Zin\nThiago "
              "Fernandes Jacques"
           << endl;

      cout << "Digite (V) para voltar ao menu OU (S, enter, S) para sair" << endl;
      cin >> v;
      if (v == 'V' || v == 'v') {

        cout << "\nDigite (i) para os integrantes do grupo: ";
        cout << "\nDigite (j) para jogar ";
        cout << "\nDigite (s) para sair \n";
        cin >> menu;
        if (menu == 'j' || menu == 'J') {
          break;
        }
      } else if (v == 'S' || v == 's') {
        cout << "Certo, Finalizando o jogo..." << endl;
        break;
      } else {
        cout << "Opcao invalida" << endl;
      }
    }
    break;
  }

  switch (menu) {
  case 'j': ////JOGAR//// 
    while (p != 69 && p != 70) { 
      if (p == 1) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "_________" << endl;
        cout << "| *     |" << endl;
        cout << "|   |   |" << endl;
        cout << "|   |" << endl;
        cout << "|   |" << endl;
        cout << "|   |" << endl;
        cin >> direcao;
        switch (direcao) {
        case 'L':
          p = 2;
          clear = 0;
          break;
        case 'S':
          p = 3;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 3) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << " " << endl;
        cout << "|   |" << endl;
        cout << "|   |" << endl;
        cout << "|   |   |" << endl;
        cout << "| *     |" << endl;
        cout << "---------" << endl;
        cin >> direcao;
        switch (direcao) {
        case 'L':
          p = 5;
          clear = 0;
          break;
        case 'N':
          p = 1;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 5) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "    ______" << endl;
        cout << "    |      " << endl;
        cout << "    |   -" << endl;
        cout << "|   |   |" << endl;
        cout << "|     * |" << endl;
        cout << "---------" << endl;
        cin >> direcao;
        switch (direcao) {
        case 'N':
          p = 7;
          clear = 0;
          break;
        case 'O':
          p = 3;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 7) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << " _____________" << endl;
        cout << " | *         |" << endl;
        cout << " |   -----   |" << endl;
        cout << " |   |        " << endl;
        cout << "     | " << endl;
        cout << "-----" << endl;
        cin >> direcao;
        switch (direcao) {
        case 'L':
          p = 9;
          clear = 0;
          break;
        case 'S':
          p = 5;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 9) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "_____________" << endl;
        cout << "|         * |" << endl;
        cout << "|   -----   |" << endl;
        cout << "        |   |" << endl;
        cout << "            |" << endl;
        cout << "        -----" << endl;
        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 11;
          clear = 0;
          break;
        case 'O':
          p = 7;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 11) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "      ------" << endl;
        cout << "           |" << endl;
        cout << "      --   |" << endl;
        cout << "___|   |   |" << endl;
        cout << "         * |" << endl;
        cout << "------------" << endl;
        cin >> direcao;
        switch (direcao) {
        case 'O':
          p = 13;
          clear = 0;
          break;
        case 'N':
          p = 9;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 13) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl; 
        
        cout << "     ----- " << endl;
        cout << "_____|   |   |" << endl;
        cout << "|      *     |" << endl;
        cout << "|    ---------" << endl;
        cin >> direcao;
        switch (direcao) {
        case 'O':
          p = 17;
          clear = 0;
          break;
        case 'N':
          p = 15;
          clear = 0;
          break;
        case 'L':
          p = 11;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 15) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl; 
        
        cout << "     ----- " << endl;
        cout << "  ___| * | " << endl;
        cout << "            " << endl;
        cout << "     ---------" << endl;
        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 13;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 17) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "_____|   |   |" << endl;
        cout << "| *          |" << endl;
        cout << "|   ----------" << endl;
        cout << "|   |" << endl;
        cout << "|     " << endl;
        cout << "------- " << endl;
        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 19;
          clear = 0;
          break;
        case 'L':
          p = 13;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 19) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "_____ " << endl;
        cout << "|     " << endl;
        cout << "|   - " << endl;
        cout << "|   |_________" << endl;
        cout << "| *          |" << endl;
        cout << "---------    |" << endl;
        cin >> direcao;
        switch (direcao) {
        case 'L':
          p = 21;
          clear = 0;
          break;
        case 'N':
          p = 17;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 21) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "|    _________  " << endl;
        cout << "|          * |  " << endl;
        cout << "|---------   |  " << endl;
        cout << "                " << endl;
        cout << "      ----------" << endl;
        cout << " " << endl;
        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 23;
          clear = 0;
          break;
        case 'O':
          p = 19;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 23) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "           _______    " << endl;
        cout << "|   |            |    " << endl;
        cout << "|   ----------   |   | " << endl;
        cout << "|              *     | " << endl;
        cout << "|---------------------" << endl;
        cout << " " << endl;
        cin >> direcao;
        switch (direcao) {
        case 'L':
          p = 25;
          clear = 0;
          break;
        case 'O':
          p = 24;
          clear = 0;
          break;
        case 'N':
          p = 21;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 25) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "                 |   | " << endl;
        cout << "                 |   | " << endl;
        cout << "                 |   | " << endl;
        cout << "|   ----------   |   | " << endl;
        cout << "|                  * | " << endl;
        cout << "|---------------------" << endl;
        cout << " " << endl;
        cin >> direcao;
        switch (direcao) {
        case 'N':
          p = 27;
          clear = 0;
          break;
        case 'O':
          p = 23;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 27) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "  |   .____  " << endl;
        cout << "  |     * | " << endl;
        cout << "  ----|   | " << endl;
        cout << "      |   | " << endl;
        cout << "      |   | " << endl;
        cout << "      |   |" << endl;
        cout << "      |   | " << endl;
        cin >> direcao;
        switch (direcao) {
        case 'O':
          p = 29;
          clear = 0;
          break;
        case 'S':
          p = 25;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 29) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "|   |   " << endl;
        cout << "|   |   " << endl;
        cout << "|   |   " << endl;
        cout << "|   |____" << endl;
        cout << "| *     | " << endl;
        cout << "----|   |" << endl;

        cin >> direcao;
        switch (direcao) {
        case 'N':
          p = 31;
          clear = 0;
          break;
        case 'L':
          p = 27;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 31) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "  _____________ " << endl;
        cout << "  |     *     | " << endl;
        cout << "  |   |   |   | " << endl;
        cout << "      |   |   " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'L':
          p = 33;
          clear = 0;
          break;
        case 'S':
          p = 29;
          clear = 0;
          break;
        case 'O':
          p = 28;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 33) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "  _____________ " << endl;
        cout << "  |         * | " << endl;
        cout << "      |   |   | " << endl;
        cout << "          |     " << endl;
        cout << "          ----- " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 35;
          clear = 0;
          break;
        case 'O':
          p = 31;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 35) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "  _____  " << endl;
        cout << "      | " << endl;
        cout << "  |   |   | " << endl;
        cout << "  | *     |" << endl;
        cout << "  -----   |" << endl;

        cin >> direcao;
        switch (direcao) {
        case 'N':
          p = 33;
          clear = 0;
          break;
        case 'L':
          p = 37;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 37) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "     _____ " << endl;
        cout << "     |   | " << endl;
        cout << " |     * | " << endl;
        cout << " -----   | " << endl;
        cout << "     |   | " << endl;
        cout << "     |   | " << endl;
        cout << "     |     " << endl;
        cout << "     ------    " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 39;
          clear = 0;
          break;
        case 'O':
          p = 35;
          clear = 0;
          break;
        case 'N':
          p = 40;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 39) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "     | " << endl;
        cout << " -   | " << endl;
        cout << " |   | " << endl;
        cout << " |   |___,    " << endl;
        cout << " | *         |" << endl;
        cout << " ------------|" << endl;

        cin >> direcao;
        switch (direcao) {
        case 'L':
          p = 41;
          clear = 0;
          break;
        case 'N':
          p = 37;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 41) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
         
        cout << "         _____ " << endl;
        cout << "         |     " << endl;
        cout << "     .___|   - " << endl;
        cout << " |         * | " << endl;
        cout << " ------------| " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'N':
          p = 43;
          clear = 0;
          break;
        case 'O':
          p = 39;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 43) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
         
        cout << " _____    " << endl;
        cout << " | *     |" << endl;
        cout << " |   -----" << endl;
        cout << "     | " << endl;
        cout << " ----| " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'L':
          p = 45;
          clear = 0;
          break;
        case 'S':
          p = 41;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 45) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "    _______ " << endl;
        cout << "           " << endl;
        cout << " -----   | " << endl;
        cout << " |     * |" << endl;
        cout << " |   ----|" << endl;

        cin >> direcao;
        switch (direcao) {
        case 'N':
          p = 47;
          clear = 0;
          break;
        case 'O':
          p = 43;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 47) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "_________________ " << endl;
        cout << "|         *     | " << endl;
        cout << "|   -----   |     " << endl;
        cout << "            |     " << endl;
        cout << "        ----|     " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'L':
          p = 49;
          clear = 0;
          break;
        case 'S':
          p = 45;
          clear = 0;
          break;
        case 'O':
          p = 42;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 49) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << " _____________ " << endl;
        cout << "           * | " << endl;
        cout << " -----   |   | " << endl;
        cout << "         |   | " << endl;
        cout << "         |   | " << endl;
        cout << "         |   | " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 51;
          clear = 0;
          break;
        case 'O':
          p = 47;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 51) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "           " << endl;
        cout << "         |   | " << endl;
        cout << "         |   | " << endl;
        cout << "         |   | " << endl;
        cout << "  |---   |   | " << endl;
        cout << "  |        * | " << endl;
        cout << "      --------" << endl;

        cin >> direcao;
        switch (direcao) {
        case 'O':
          p = 53;
          clear = 0;
          break;
        case 'N':
          p = 49;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 53) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "      _____     " << endl;
        cout << "      |   |    " << endl;
        cout << "  ----|   |   | " << endl;
        cout << "  |     *     | " << endl;
        cout << "  |   --------- " << endl;
        cout << "               " << endl;
        cout << "               " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'O':
          p = 55;
          clear = 0;
          break;
        case 'N':
          p = 46;
          clear = 0;
          break;
        case 'L':
          p = 51;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 55) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "           |   |" << endl;
        cout << "  ----|    |   |" << endl;
        cout << "  | *          |" << endl;
        cout << "  |   ---------|" << endl;
        cout << "      |        " << endl;
        cout << " ------    " << endl;


        cin >> direcao;
        switch (direcao) {
        case 'L':
          p = 53;
          clear = 0;
          break;
        case 'S':
          p = 57;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 57) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "      -----   " << endl;
        cout << "      |      " << endl;
        cout << " _____|   |   " << endl;
        cout << " |      * |   " << endl;
        cout << " |   ------   " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'O':
          p = 59;
          clear = 0;
          break;
        case 'N':
          p = 55;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 59) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << " _____|   |   " << endl;
        cout << " | *      |   " << endl;
        cout << " |   ------   " << endl;
        cout << " |            " << endl;
        cout << " -----        " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 61;
          clear = 0;
          break;
        case 'L':
          p = 57;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 61) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << " _____        " << endl;
        cout << " |            " << endl;
        cout << " |   ---------    " << endl;
        cout << " | *          |" << endl;
        cout << " ---------|   |    " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'N':
          p = 59;
          clear = 0;
          break;
        case 'L':
          p = 63;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 63) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "     |---------    " << endl;
        cout << " |          * |" << endl;
        cout << " ---------|   |    " << endl;
        cout << "                    " << endl;
        cout << "         -------              " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 65;
          clear = 0;
          break;
        case 'O':
          p = 61;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 65) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "         ------    " << endl;
        cout << "              |        " << endl;
        cout << " |   ---------|   |   |       " << endl;
        cout << " |              *        " << endl;
        cout << " |----------------------- " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'L':
          p = 67;
          clear = 0;
          break;
        case 'O':
          p = 48;
          clear = 0;
          break;
        case 'N':
          p = 63;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 67) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "               ____" << endl;
        cout << "                  |" << endl;
        cout << "              -   |" << endl;
        cout << "              |   | " << endl;
        cout << "  --------|   |   | " << endl;
        cout << "                *     " << endl;
        cout << "  -----------------  " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'N':
          p = 54;
          clear = 0;
          break;
        case 'L': 
          if(chave == 1){
              p = 69;
              clear = 0;
            }else{
              cout << "Você achou a saída, porém o portão está fechado, encontre a chave para conseguir sair (dica: ela não está muito longe)." << endl;
            clear = 1;
            }
          break;
        case 'O':
          p = 65;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 69) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << " _____|   ||   |          " << endl;
        cout << "                  * EXIT  " << endl;
        cout << " ---------------          " << endl;

        cout << "PARABENS VOCE COMPLETOU LABIRINTO !!!!" << endl;
      }

      /// CONTINUAR ATE TERMINAR OS IMPARES

      if (p == 2) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "_________" << endl;
        cout << "|     * |" << endl;
        cout << "|   |   |" << endl;
        cout << "    |       " << endl;
        cout << "    ------" << endl;

        cin >> direcao;
        switch (direcao) {
        case 'O':
          p = 1;
          clear = 0;
          break;
        case 'S':
          p = 4;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl; 
          clear = 1;
        }
      }
      if (p == 4) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "   ______" << endl;
        cout << "        |" << endl;
        cout << "    |   |_____" << endl;
        cout << "    | *       " << endl;
        cout << "    ----------" << endl;

        cin >> direcao;
        switch (direcao) {
        case 'N':
          p = 2;
          clear = 0;
          break;
        case 'L':
          p = 6;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 6) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "________  " << endl;
        cout << "     * |      " << endl;
        cout << "----   |      " << endl;
        cout << "   |           " << endl;
        cout << "   -------  " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'O':
          p = 4;
          clear = 0;
          break;
        case 'S':
          p = 8;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 8) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "  ______      " << endl;
        cout << "       |      " << endl;
        cout << "   -   |   _ " << endl;
        cout << "   | *     | " << endl;
        cout << "   --------- " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'L':
          p = 10;
          clear = 0;
          break;
        case 'N':
          p = 6;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 10) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "        ________     " << endl;
        cout << "        |     " << endl;
        cout << "   -    |   - " << endl;
        cout << "   |      * | " << endl;
        cout << "   ---------- " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'N':
          p = 12;
          clear = 0;
          break;
        case 'O':
          p = 8;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 12) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "        _________  " << endl;
        cout << "        | *     |" << endl;
        cout << "        |   -   |" << endl;
        cout << "            | " << endl;
        cout << "       ----- " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'L':
          p = 14;
          clear = 0;
          break;
        case 'S':
          p = 10;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 14) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "_________" << endl;
        cout << "|     * |" << endl;
        cout << "|   -   |" << endl;
        cout << "    |       " << endl;
        cout << "    -----" << endl;

        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 16;
          clear = 0;
          break;
        case 'O':
          p = 12;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 16) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "  _______    " << endl;
        cout << "        |    " << endl;
        cout << "    -   |   |" << endl;
        cout << "    | *     |" << endl;
        cout << "    --------- " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'N':
          p = 14;
          clear = 0;
          break;
        case 'L':
          p = 18;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 18) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "     _____ " << endl;
        cout << "         |" << endl;
        cout << "     |   |" << endl;
        cout << "     |   |" << endl;
        cout << "     |   |" << endl;
        cout << " |     * |" << endl;
        cout << " --------- " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'N':
          p = 20;
          clear = 0;
          break;
        case 'O':
          p = 16;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 20) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "______________  " << endl;
        cout << "           * |" << endl;
        cout << "---------|   |" << endl;
        cout << "         |   |" << endl;
        cout << "         |   |" << endl;
        cout << "             |" << endl;
        cout << "         ----- " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'O':
          p = 22;
          clear = 0;
          break;
        case 'S':
          p = 18;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 22) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "____________" << endl;
        cout << "| *         " << endl;
        cout << "------------" << endl;

        cout << "Voce Encontrou uma Cesta com varias Frutas deseja come-las? (s para SIM E n para NAO)" << endl;
        cin >> pergunta;
        switch(pergunta) {
          case 's':
          if(totem!=1){
            cout << "Parece que a gula nao e so um pecado, e acabou matando voce envenenado!!  GAME OVER!!"<< endl;
            p = 70;
            clear = 0;
          }else{
            cout << "Você foi envenenado pelas frutas, sorte sua que você tinha o totem da sobrevida, voce se sente otimo!."<<endl;
            totem = 0;
            
            cout << "____________" << endl;
            cout << "| *         " << endl;
            cout << "------------" << endl;
            
            cout << "digite L para voltar pela direção leste."<< endl;
            cin >> direcao;
            switch (direcao) {
            case 'L':
              p = 20;
              clear = 0;
            break;
              default:
              cout << "Você não pode ir para essa direção" << endl;
              clear = 1;
              break;
            }
              
              case 'n':
                  cout << "Ok, digite L para voltar pela direção leste."<< endl;
                  cin >> direcao;
                  switch (direcao) {
                  case 'L':
                    p = 20;
                    clear = 0;
                    break;
                  default:
                    cout << "Você não pode ir para essa direção" << endl;
                    clear = 1;
                }
                 break;
                default:
                  cout << "Essa não é uma opção possível." << endl;
                  clear = 1;
              }
          }
        } 
      if (p == 24) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "_____              " << endl;
        cout << "|   |              " << endl;
        cout << "|   |              " << endl;
        cout << "|   |              " << endl;
        cout << "|   ----------   | " << endl;
        cout << "| *                " << endl;
        cout << "|----------------- " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'N':
          p = 26;
          clear = 0;
          break;
        case 'L':
          p = 23;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }

      if (p == 26) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << " ______  " << endl;
        cout << " | * |   " << endl;
        cout << " |   |   " << endl;
        cout << " |   |   " << endl;
        cout << " |   -   " << endl;
        cout << " |       " << endl;
        cout << " |----   " << endl;

        cout << "Você achou a cova de uma múmia, deseja abrir para ver o que têm dentro?(s para sim, n para não)." << endl;
        cin >> pergunta;

        switch (pergunta){
          case 's':
            if(totem!=1){
              cout << "Parece que a curiosidade não mata só o gato... GAME OVER"<< endl;
              p = 70;
              clear = 0;
            }else{
              cout << "Você foi atacado por uma múmia, sorte sua que você tinha o totem da sobrevida."<<endl;
              totem = 0;
              cout << "digite S para voltar pela direção sul."<< endl;
              cin >> direcao;
              switch (direcao) {
              case 'S':
                p = 24;
                clear = 0;
                break;
              default:
                cout << "Você não pode ir para essa direção" << endl;
                clear = 1;
                }
            }
            break;
          case 'n':
            cout << "Ok, digite S para voltar pela direção sul."<< endl;
            cin >> direcao;
            switch (direcao) {
            case 'S':
              p = 24;
              clear = 0;
              break;
            default:
              cout << "Você não pode ir para essa direção" << endl;
              clear = 1;
          }
           break;
          default:
            cout << "Essa não é uma opção possível." << endl;
            clear = 1;
        }

        }

      if (p == 28) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
 
        cout << "  _____________ " << endl;
        cout << "  | *         | " << endl;
        cout << "  |   |   |     " << endl;
        cout << "      |       " << endl;
        cout << "  ----- " << endl;
        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 30;
          clear = 0;
          break;
        case 'L':
          p = 31;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 30) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "    _______ " << endl;
        cout << "    |        " << endl;
        cout << "|   |   |" << endl;
        cout << "|     * |" << endl;
        cout << "|    ---- " << endl;
        cin >> direcao;
        switch (direcao) {
        case 'O':
          p = 32;
          clear = 0;
          break;
        case 'N':
          p = 28;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 32) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << " _____ " << endl;
        cout << " |   |        " << endl;
        cout << " |   |   |" << endl;
        cout << " | *     |" << endl;
        cout << " |    ---|   " << endl;
        cout << " |            " << endl;
        cout << " |----  " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'N':
          p = 38;
          clear = 0;
          break;
        case 'L':
          p = 30;
          clear = 0;
          break;
        case 'S':
          p = 34;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 34) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << " _____   __" << endl;
        cout << " |   |       " << endl;
        cout << " |   |       " << endl;
        cout << " |            " << endl;
        cout << " |    ---|  " << endl;
        cout << " | *     |   " << endl;
        cout << " |-------|  " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'L':
          p = 36;
          clear = 0;
          break;
        case 'N':
          p = 32;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 36) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << " |            " << endl;
        cout << " |    ---|  " << endl;
        cout << " |     * |   " << endl;
        cout << " |-------|  " << endl;

        cout << "Você achou um snickers, deseja comê-lo?(s para sim, n para não)." << endl;
        cin >> pergunta;

        switch (pergunta){
          case 's':
            if(totem!=1){
              cout << "Você saciou um pouco da fome, porém acabou desenvolvendo diabetes tipo-2. Bem-vindo ao céu__GAME OVER"<< endl;
              p = 70;
              clear = 0;
            }else{
              cout << "Você saciou sua fome, porém se não tivesse o totem da sobrevida, teria morrido por desenvolver diabetes."<<endl;
              totem = 0;
              cout << "digite O para voltar pela direção oeste."<< endl;
              cin >> direcao;
              switch (direcao) {
              case 'O':
                p = 34;
                clear = 0;
                break;
              default:
                cout << "Você não pode ir para essa direção" << endl;
                clear = 1;
                }
            }
            break;
          case 'n':
            cout << "Ok, digite O para voltar pela direção oeste."<< endl;
            cin >> direcao;
            switch (direcao) {
            case 'O':
              p = 34;
              clear = 0;
              break;
            default:
              cout << "Você não pode ir para essa direção" << endl;
              clear = 1;
          }
           break;
          default:
            cout << "Essa não é uma opção possível." << endl;
            clear = 1;
        }
      }
      if (p == 38) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << " _____    " << endl;
        cout << " | * |       " << endl;
        cout << " |   |       " << endl;
        cout << " |            " << endl;
        cout << " |    -     " << endl;
        cout << " |          " << endl;
        cout << " |----    " << endl;

        cout << "Você achou 5 coxinhas da promoção de coxinhas do Athenas, deseja comê-las?(s para sim, n para não)." << endl;
        cin >> pergunta;

        switch (pergunta){
          case 'n':
            if(totem!=1){
              cout << "Você deixou de comer as coxinhas e acabou morrendo de fome. GAME OVER"<< endl;
              p = 70;
              clear = 0;
            }else{
              cout << "Você deixou de saciar sua fome, porém se não tivesse o totem da sobrevida, teria morrido. (Totem da sobrevida gasto)"<<endl;
              totem = 0;
              cout << "digite S para voltar pela direção sul."<< endl;
              cin >> direcao;
              switch (direcao) {
              case 'S':
                p = 32;
                clear = 0;
                break;
              default:
                cout << "Você não pode ir para essa direção" << endl;
                clear = 1;
                }
            }
            break;
          case 's':
            cout << "Você saciou sua fome e está com determinado a acabar o labirinto. Digite S para continuar par a direção sul e Boa Sorte :D."<< endl;
            cin >> direcao;
            switch (direcao) {
            case 'S':
              p = 32;
              clear = 0;
              break;
            default:
              cout << "Você não pode ir para essa direção" << endl;
              clear = 1;
          }
           break;
          default:
            cout << "Essa não é uma opção possível." << endl;
            clear = 1;
        }
        }

      if (p == 40) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "     _____ " << endl;
        cout << "     | * | " << endl;
        cout << "         | " << endl;
        cout << "   ---   | " << endl;
        cout << "     |   | " << endl;
        cout << "     |   | " << endl;

      if(totem==0) { 
        cout << "Você achou um baú perdido, deseja abrir para ver o que tem dentro?(s para sim, n para não)." << endl;
        cin >> pergunta;

        switch (pergunta){
          case 's':
            cout << "Você achou um totem da sobrevida, ele te protegerá de ameaças, porém quando se deparar com uma, ele será perdido. Digite S para continuar pela direção sul. "<< endl;
            totem = 1;  
            cin >> direcao;
              switch (direcao) {
              case 'S':
                p = 37;
                clear = 0;
                break;
              default:
                cout << "Você não pode ir para essa direção" << endl;
                clear = 1;
            }
            break;
          case 'n':
            cout << "Ok, digite S para voltar pela direção sul."<< endl;
            cin >> direcao;
            switch (direcao) {
            case 'S':
              p = 37;
              clear = 0;
              break;
            default:
              cout << "Você não pode ir para essa direção" << endl;
              clear = 1;
          }
           break;
          default:
            cout << "Essa não é uma opção possível." << endl;
            clear = 1;
          }
        }else{
          cin >> direcao;
            switch (direcao) {
            case 'S':
              p = 37;
              clear = 0;
              break;
            default:
              cout << "Você não pode ir para essa direção" << endl;
              clear = 1;
          }
        }
      }
      if (p == 42) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "_______________  " << endl;
        cout << "| *               " << endl;
        cout << "|   -----   |     " << endl;
        cout << "|   |             " << endl;
        cout << "-----              " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 44;
          clear = 0;
          break;
        case 'L':
          p = 47;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 44) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        if(totem!=1){
          cout << " __   _ _ ___  " << endl;
          cout << "                  " << endl;
          cout << "|   -- --        " << endl;
          cout << "KABOOM |             " << endl;
          cout << "- --               " << endl;

          cout << "Você pisou em uma mina terrestre escondida na grama e explodiu. GAME OVER." << endl;
        }else{
          cout << "Você pisou em uma mina terrestre, sorte sua que você tinha o totem da sobrevida."<<endl;
          totem = 0;
          cout << "_____   " << endl;
          cout << "|                 " << endl;
          cout << "|   -         " << endl;
          cout << "| * |             " << endl;
          cout << "-----              " << endl;

          cout << "digite N para voltar pela direção norte."<< endl ;
          cin >> direcao;
          switch (direcao) {
          case 'N':
            p = 42;
            clear = 0;
            break;
          default:
            cout << "Você não pode ir para essa direção" << endl;
            clear = 1;
            } 
        }
      }
      if (p == 46) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "      _____     " << endl;
        cout << "      | * |    " << endl;
        cout << "      |   |     " << endl;
        cout << "                " << endl;
        cout << "     ------- " << endl;
        
        if(totem!=1){
          cout << "Você Ve que nao havia nada no caminho e mesmo assim decidiu ir..." << endl;
          cout << "Infelizmente o chao acabou se abrindo, voce caiu em uma caverna cheia de canibais e morreu tristemente... GAME OVER!" << endl;
        }else{
          cout << "Você continua bem, sorte sua que você tinha o totem da sobrevida e nada aconteceu.."<<endl;
          totem = 0;
          cout << "      _____     " << endl;
          cout << "      | * |    " << endl;
          cout << "      |   |     " << endl;
          cout << "                " << endl;
          cout << "     ------- " << endl;

          cout << "digite S para voltar pela direção sul."<< endl ;

        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 53;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
          }
        }
      }
      if (p == 48) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "         " << endl;
        cout << " |   -       " << endl;
        cout << " |   |       " << endl;
        cout << " |   |       " << endl;
        cout << " |   |       " << endl;
        cout << " |   |               " << endl;
        cout << " |   ---------|   |       " << endl;
        cout << " | *                     " << endl;
        cout << " |-----------------  " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 50;
          clear = 0;
          break;
        case 'L':
          p = 65;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 50) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << " _________       " << endl;
        cout << " | *     |   " << endl;
        cout << " |   -----      " << endl;
        cout << " |   |       " << endl;
        cout << " |   |       " << endl;
        cout << " |   |               " << endl;
        cout << " |   -       " << endl;
        cout << "                         " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'S':
          p = 52;
          clear = 0;
          break;
        case 'L':
          p = 48;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 52) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "_________ " << endl;
        cout << "|     * |  " << endl;
        cout << "|   ----- " << endl;
        cin >> direcao;
        switch (direcao) {
        case 'O':
          p = 50;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 54) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << " _________ " << endl;
        cout << " |     * | " << endl;
        cout << " -----   | " << endl;
        cout << "     |   | " << endl;
        cout << "     |   | " << endl;
        cout << "           " << endl;
        cout << "     ----- " << endl;

        cin >> direcao;
        switch (direcao) {
        case 'O':
          p = 56;
          clear = 0;
          break;
        case 'S':
          p = 67;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
      if (p == 56) {
        if (clear == 0) {
          system("cls");
          }
        cout << "digite a direção, 'N' para norte, 'S' para Sul, 'L' leste ou 'O' oeste (só digite direções possíveis de se locomover de acordo com a sua localização) " << endl;
        
        cout << "_________ " << endl;
        cout << "| *     |  " << endl;
        cout << "-----   | " << endl;

        cout << "Você achou a chave, é só fugir." << endl;
        cin >> direcao;
        chave = 1;
        switch (direcao) {
        case 'L':
          p = 54;
          clear = 0;
          break;
        default:
          cout << "Você não pode ir para essa direção" << endl;
          clear = 1;
        }
      }
    }
    break;
  case 's': ////SAIR////
    cout << "Até a próxima!" << endl;
    break;
  default:
    cout << "Essa não é uma opção possível." << endl;
    }

  return 0;
  }



  /// system(“cls”);///LIMPAR TELA///
  /// system(“pause”);///PAUSA///
///message.txt
///41 KB