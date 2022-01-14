/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:16:59 by apaduan-          #+#    #+#             */
/*   Updated: 2021/11/14 17:22:56 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(void)
{
	t_fruta	fruta;

	fruta.banana = 10;
	fruta.pera = 11;
	printf("valor da banana %d \n", fruta.banana);
	printf("valor da pera %d \n", fruta.pera);
	printf("valor da maca %d \n", fruta.maca);
	printf("tamanho struct %lu \n", sizeof(fruta));
	printf("\n");
	printf("tamanho char %lu \n", sizeof(char));
	printf("tamanho char* %lu \n", sizeof(char *));
	printf("tamanho int %lu \n", sizeof(int));
	printf("\n");
	printf("tamanho tp_fruta %lu \n", sizeof(t_fruta));
	return (0);
}
