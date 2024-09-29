/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:22:56 by osredond          #+#    #+#             */
/*   Updated: 2024/03/23 11:23:00 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// 0123456789abcdef
// ---------------
// 000000000000000
// 012345678912345

#define	NONE	0x000	//0

#define	RED	0x001	//1
#define BLUE	0x002	//2
#define	GREEN	0x004	//4
#define	YELLOW	0x008	//8   8 + 64 = 72
#define	PINK	0x010	//16
#define	BLACK	0x020	//32

#define	TRES	0x040	//64
#define	CUATRO	0x080	//128
#define	CINCO	0x100	//256

	/* ************************************************** */
	/*         Color de coche y número de puertas         */
	/*                                                    */
	/* ...::: Un coche  Amarillo y tiene 3 puertas :::... */
	/* ************************************************** */

/*
 * OR	|	e1	|	e2	|	s1
  ------------------------------------------------
  	|	0	|	0	|	0
	|	1	|	0	|	1
	|	0	|	1	|	1
	|	1	|	1	|	1
*/

//	YELLOW = 0x00001000	(8)
//	TRES   = 0x01000000	(64)
//	OR
//	RESULT = 0x01001000	(72)


void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 7;
	while (i >= 0)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
	write(1, "\n", 1);
}

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit = 0;

	while (i > 0)
	{
		bit = bit * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (bit);
}

	/* ********************************************************* */
	/*            Realizar la operación de SWAP BITS             */
	/* ********************************************************* */

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

	/* ********************************************************* */
	/*            Se desplaza 4 posiciones a la derecha          */
	/*            01000001 >> 4 = 00000100                       */
	/*            Se desplaza 4 posiciones a la izquierda        */
	/*            01000001 << 4 = 00010000                       */
	/*            SE USA OR  (|)                                 */
	/*            00000100                                       */
 	/*	      00010000                                       */
  	/*        =   			                             */
   	/*            00010100    				     */
	/*                				             */
	/* ********************************************************* */

int main(void)
{
	unsigned char  octet = 9;
	printf("Reverse BITS: %hhu, %hhu\n", octet, reverse_bits(octet));
//	unsigned char bits = (unsigned char)NULL;
	unsigned char bits = 36;
	print_bits(bits);
	write(1, "-128 en binario es: ", 20);
	unsigned char bats = -128;
	print_bits(bats);
	write(1, " 128 en binario es: ", 21);
	unsigned char bots = 128;
	print_bits(bots);
	unsigned char swap = 'B';
	printf("Swap BITS: %hhu, %hhu\n", swap, swap_bits(swap));

	/* ********************************************************* */
	/* Desmostración de como desborda y se convierte en negativo */
	/* ********************************************************* */

	char c = 0;
	int f = 0;
	while (c <= 127 && f != 2)
	{
		printf("%d\n", c);
		if (c == -128)
			f++;
		c++;
	}

	printf("\n");

	/* ********************************************************* */
	/*         Demostración de como NULL en ASCII es 0          */
	/* ********************************************************* */

	int i;

	i = (int)NULL;
	while (i < 19)
	{
		printf("%d\n", i);
		i++;
	}
	printf("\n");
	
	/* ********************************************************* */
	/*    ...:::  Operación coche amarillo y 3 puertas  :::...   */
	/* ********************************************************* */
	
	printf("YELLOW (8) y TRES (64) puertas es: %d\n", YELLOW | TRES);
	printf("TRES: %d\n", TRES);
	print_bits(TRES);
	printf("YELLOW: %d\n", YELLOW);
	print_bits(YELLOW);
	print_bits(YELLOW | TRES);
	return (0);
}
