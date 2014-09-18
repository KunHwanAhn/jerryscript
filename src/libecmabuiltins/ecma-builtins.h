/* Copyright 2014 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ECMA_BUILTINS_H
#define ECMA_BUILTINS_H

#include "ecma-globals.h"

/* ecma-builtin.c */
extern void ecma_init_builtins (void);
extern void ecma_finalize_builtins (void);

extern ecma_property_t*
ecma_object_try_to_get_non_instantiated_property (ecma_object_t *object_p,
                                                  ecma_string_t *string_p);

/* ecma-builtin-global.c */
extern ecma_object_t* ecma_builtin_get_global_object (void);
extern bool ecma_builtin_is_global_object (ecma_object_t *object_p);

/* ecma-builtin-object.c */
extern ecma_object_t* ecma_builtin_get_object_object (void);
extern bool ecma_builtin_is_object_object (ecma_object_t *object_p);

extern ecma_object_t* ecma_builtin_get_object_prototype_object (void);
extern bool ecma_builtin_is_object_prototype_object (ecma_object_t *object_p);

/* ecma-builtin-array.c */
extern ecma_object_t* ecma_builtin_get_array_object (void);
extern bool ecma_builtin_is_array_object (ecma_object_t *object_p);

extern ecma_object_t* ecma_builtin_get_array_prototype_object (void);
extern bool ecma_builtin_is_array_prototype_object (ecma_object_t *object_p);

#endif /* !ECMA_BUILTINS_H */
