/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <aautin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:54:50 by aautin            #+#    #+#             */
/*   Updated: 2023/07/20 16:03:12 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = (char **)malloc((ft_count_words(str, charset) + 1) * sizeof(char *));
}