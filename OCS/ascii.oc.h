

#ifndef Aascii_included
#define Aascii_included

#define __Aascii_ACharToNat __Aascii_1
#define _Aascii_ACharToNat _Aascii_1
extern OBJ __Aascii_ACharToNat;
extern OBJ _Aascii_ACharToNat(OBJ);

#define __Aascii_ANatToChar __Aascii_2
#define _Aascii_ANatToChar _Aascii_2
extern OBJ __Aascii_ANatToChar;
extern OBJ _Aascii_ANatToChar(OBJ);

#ifndef Aascii_ACharToNat
#define Aascii_ACharToNat(x1,x2) {x2=_Aascii_ACharToNat(x1);}
#endif

#ifndef Aascii_ANatToChar
#define Aascii_ANatToChar(x1,x2) {x2=_Aascii_ANatToChar(x1);}
#endif

#ifndef Aascii_ACharToNat_L189
#define Aascii_ACharToNat_L189(x1,x188) {x188=_Aascii_ACharToNat_L189(x1);}
#endif

#ifndef Aascii_ANatToChar_L377
#define Aascii_ANatToChar_L377(x1,x191) {x191=_Aascii_ANatToChar_L377(x1);}
#endif

#endif
