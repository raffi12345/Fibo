
													//*///////////////////////////////////////////////
													//7MM"""Mq.        db      `7MM"""YMM `7MM"""YMM//
													// MM   `MM.      ;MM:       MM    `7   MM    `7//
													// MM   ,M9      ,V^MM.      MM   d     MM   d  //
													// MMmmdM9      ,M  `MM      MM""MM     MM""MM  //
													// MM  YM.      AbmmmqMA     MM   Y     MM   Y  //
													// MM   `Mb.   A'     VML    MM         MM      //
													//JMML. .JMM..AMA.   .AMMA..JMML.     .JMML.    //
													///////////////////////////////////////////////*//
#include <stdio.h>
int main(void)

{
	//DEKLARACE INTEGERU

	int x = 1;
	int y = 0;
	int i = 0;
	int mini = 0;
	int mini2 = 0;

	//INPUT CISLA:

	printf("INPUT POSITIVE INT:\n");
	scanf_s("%i", &i);

	//POKUD NENI VLOZEN INT KTERY JE KLADNY TAK UKONCI PROGRAM.

	if (i <= 0)
	{
		printf("NEED POSITIVE NUMBER INPUT.\n");
		return 1;
	}
	//TADY ZACINA PROGRAM POKUD BYL VYPSAN KLADNY INT.
	else

		for (int counter = 0; counter < i; counter++)

			//ZDE JE KLIC PROGRAMU.   
			//COUNTER ZACINA NA 0 a DOKUD JE NIZSI NEZ HODNOTA INTEGERU i (INPUTU) TAK SE BUDE OPAKOVAT DOKUD NEBUDOU ROVNY.
			//ZA KAZDE OPAKOVANI FOR LOOPU ZKONVERTUJE CISLA PODLE POTREBY A PAK VYTISKNE VYSLEDEK.

		{
			if (mini < mini2)
			{
				y = y + x;
				printf("%i\n", y);
				mini++;
			}
			else
			{
				x = x + y;
				printf("%i\n", x);
				mini2++;
			}
		}
	return 0;
}