#include "turma.h"


bool Turma::operator==(const Turma& outra_turma){
    return this->class_code == outra_turma.class_code && this->uc_code == outra_turma.uc_code;
}

int Turma::getestudantes(){
    return this->estudantes;
}
void Turma::addestudantes(){
    this->estudantes++;
}
void Turma::removeestudantes(){
    this->estudantes--;
}

std::list<Slot> Turma::getaulas(){
    return this->aulas;
}

std::string Turma::getuc_code(){
    return uc_code;
}

bool operator==(const std::shared_ptr<Turma>& t1, const std::shared_ptr<Turma>& t2){
    if(!t1 || !t2) return false;
    return (*t1) == (*t2);
}