/*
 * Controller.h
 *
 *  Created on: Jan 27, 2017
 *      Author: Kadin
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

class Controller
{
public:
    void start();
private:
    void tryNumbers(int sent);
    int changeNumber();
    void changeWithPointer(int * numberPointer);


};

#endif  /* controller_h */
