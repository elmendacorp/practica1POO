/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vehiculo.cpp
 * Author: cityzenfour
 * 
 * Created on 10 de febrero de 2016, 9:01
 */

#include "Vehiculo.h"
#include <iostream>

using namespace std;

void Vehiculo::leerPorTeclado(){
    cout << "Introduzca Marca, Modelo, Matricula y precio: \n";
    cin >> this-> marca;
    cin >> this-> modelo;
    cin >> this-> matricula;
    cin >> this-> precio;
}

void Vehiculo::salidaPorPantalla(){
    cout << "Marca : " << this-> marca << endl;
    cout << "Modelo: " << this-> modelo << endl;
    cout << "Matricula: " << this-> matricula << endl;
    cout << "Precio: " << this-> precio << endl;
}