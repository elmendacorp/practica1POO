/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vehiculo.h
 * Author: cityzenfour
 *
 * Created on 10 de febrero de 2016, 9:01
 */

#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
using namespace std;

class Vehiculo {
    private:
        string marca;
        string modelo;
        int matricula;
        float precio;

    public:
        void leerPorTeclado();
        void salidaPorPantalla();


};

#endif /* VEHICULO_H */
