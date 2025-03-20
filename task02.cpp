﻿#include "tasks.h"

/*	Task 02. Lollipop Chupa-Chups [карамелька Чупа-Чупс]
*
*	Одна карамелька Chupa-Chups в магазине стоит A рублей и B копеек.
*	Определите, сколько рублей и копеек нужно заплатить за N карамелек.
*
*	Примечание
*	Не забудьте про "защиту от дурака", т.к. стоимость карамельки и их количество - это величины всегда больше нуля.
*	В случае неверных данных необходимо возвратить строку "error".
* 
*	Формат входных данных [input]
*	Функция получает на вход три целочисленных числа: A, B, N.
*
*	Формат выходных данных [output]
*	Функция должна возвратить в виде строки два числа через пробел (стоимость покупки в рублях и копейках) 
*	или строку "error", если передаюся неверные данные
*
*	[ input 1]: 1 15 2
*	[output 1]: 2 30
*
*	[ input 2]: 2 55 1
*	[output 2]: 2 55
*
*	[ input 3]: 4 25 8
*	[output 3]: 34 0 
*
*	[ input 4]: 0 27 8
*	[output 4]: 4 16
*
*	[ input 5]: 2 0 5
*	[output 5]: 10 0
*
*	[ input 6]: -1 15 2
*	[output 6]: error
*
*	[ input 7]: 1 -15 2
*	[output 7]: error
*
*	[ input 8]: 1 15 -2
*	[output 8]: error
*
*	[ input 9]: 0 0 2
*	[output 9]: error
*
*	[ input 10]: 1 50 0
*	[output 10]: error
*/

string task02(int a, int b, int n) {

	if ((a <= 0 && b <= 0 || n <= 0)
		|| (a < 0 || b < 0)) {
		return "error";
	}

	int rub = a * n;
	int kopecks = b * n;

	if (kopecks >= 100) {
		rub += kopecks / 100;
		kopecks -= (kopecks / 100) * 100;
	}

	return to_string(rub) + " " + to_string(kopecks);

}
