/* mbed Microcontroller Library
 * Copyright (c) 2014 FabLab Aix-en-Provence
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

 #ifndef _2568C584_9912_4820_9FB9_53FB83B3D885_
 #define _2568C584_9912_4820_9FB9_53FB83B3D885_

/*
 * ----------------------------------------------------------------------------
 * SAM4 family
 * ----------------------------------------------------------------------------
 */

/* SAM4S series */
#define ATSAM4S8   ( defined( __ATSAM4S8B__ ) || defined( __ATSAM4S8C__ ) )
#define ATSAM4S16  ( defined( __ATSAM4S16B__ ) || defined( __ATSAM4S16C__ ) )
#define ATSAM4SA16 ( defined( __ATSAM4SA16B__ ) || defined( __ATSAM4SA16C__ ) )
#define ATSAM4SD16 ( defined( __ATSAM4SD16B__ ) || defined( __ATSAM4SD16C__ ) )
#define ATSAM4SD32 ( defined( __ATSAM4SD32B__ ) || defined( __ATSAM4SD32C__ ) )


/* Entire SAM4S series */
#define ATSAM4S_SERIES (ATSAM4S8 || ATSAM4S16 || ATSAM4S16 || ATSAM4SD16 || ATSAM4SD32)


/* Entire SAM4 family */
#define ATSAM4_SERIES ( ATSAM4S_SERIES )

#if ATSAM4_SERIES
#  include "atsam4.h"
#endif /* ATSAM4_SERIES */

#endif /* _2568C584_9912_4820_9FB9_53FB83B3D885_ */
