//
// Created by Onilink on 22/3/2020.
//

#include <iostream>
#include "math_tools.h"
#include "display_tools.h"
using namespace std;
int main(void){

    Matrix m_inverse,m_invest;

    zeroes(m_inverse,3);
    zeroes(m_invest,3);

    m_invest.at(0).at(0) =2; m_invest.at(0).at(1) =2;  m_invest.at(0).at(2) =3;
    m_invest.at(1).at(0) =4; m_invest.at(1).at(1) =5;  m_invest.at(1).at(2) =6;
    m_invest.at(2).at(0) =7; m_invest.at(2).at(1) =8;  m_invest.at(2).at(2) =9;

    inverse(m_invest,m_inverse);

    showMatrix(m_inverse);


    return 0;
}

