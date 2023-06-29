/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:10:23 by jgo               #+#    #+#             */
/*   Updated: 2023/06/29 14:26:57 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFS_H
# define DEFS_H

# include "const_bonus.h"
# include "enum_bonus.h"
# include "struct_bonus.h"

typedef double			(*t_get_obj_dist)(t_obj *, const t_ray *);
typedef t_object_type	(*t_get_obj_record)(t_obj *, const t_ray *, t_record *);

#endif
