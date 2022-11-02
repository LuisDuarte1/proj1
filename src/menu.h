//
// Created by wwwjo on 24/10/2022.
//

#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <bits/stdc++.h>
#include "slot.h"
#include "turma.h"
#include "estudante.h"
using namespace std;


class menu {
    public:
        /*!
         * @brief:Esta funcão inicia o menu.
         *
         */
        void iniciar();
        void estudante();
        void UCandTurmaandAno();
        void estudantesmaisnucs();
        void pedidosalteracao();
        void printhorario(list<std::shared_ptr<Turma>> horarios);
};



#endif //PROJ1_AED_MENU_H
