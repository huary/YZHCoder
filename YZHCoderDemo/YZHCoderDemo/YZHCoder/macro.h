#ifndef _MACRO_H_
#define _MACRO_H_
#include "type.h"

#define		NUM_ZER										(0)
#define 	NUM_ONE										(1)
#define		NUM_TWO 									(2)
#define		NUM_THR										(3)
#define		NUM_FOU										(4)
#define 	NUM_FIV										(5)
#define		NUM_SIX										(6)
#define		NUM_SEV										(7)
#define		NUM_EIG										(8)
#define		NUM_NIN										(9)

#define 	NUM_ONE_LL									(1ULL)
#define		NUM_TWO_LL									(2ULL)
#define		NUM_THR_LL									(3ULL)
#define		NUM_FOU_LL									(4ULL)
#define 	NUM_FIV_LL									(5ULL)
#define		NUM_SIX_LL									(6ULL)
#define		NUM_SEV_LL									(7ULL)
#define		NUM_EIG_LL									(8ULL)
#define		NUM_NIN_LL									(9ULL)

#define		ZER_POWOFTWO								(0X1)
#define		ONE_POWOFTWO								(0X2)
#define		TWO_POWOFTWO								(0X4)
#define		THR_POWOFTWO								(0X8)
#define		FOU_POWOFTWO								(0X10)
#define		FIV_POWOFTWO								(0X20)
#define		SIX_POWOFTWO								(0X40)
#define		SEV_POWOFTWO								(0X80)
#define		EIG_POWOFTWO								(0X100)
#define		TWO_EIG_POWOFTWO							(0X10000)  //2的16次幂
#define		THR_EIG_POWOFTWO							(0X1000000) //2的24次幂
#define		FOU_EIG_POWOFTWO							(0X100000000ULL) //2的32次幂

#define		ZER_POWOFTWO_SUB_ONE						(0X0)
#define		ONE_POWOFTWO_SUB_ONE						(0X1)
#define		TWO_POWOFTWO_SUB_ONE						(0X3)
#define		THR_POWOFTWO_SUB_ONE						(0X7)
#define		FOU_POWOFTWO_SUB_ONE						(0XF)
#define		FIV_POWOFTWO_SUB_ONE						(0X1F)
#define		SIX_POWOFTWO_SUB_ONE						(0X3F)
#define		SEV_POWOFTWO_SUB_ONE						(0X7F)
#define		EIG_POWOFTWO_SUB_ONE						(0XFF)
#define		TWO_EIG_POWOFTWO_SUB_ONE					(0XFFFF)  //2的16次幂-1
#define		THR_EIG_POWOFTWO_SUB_ONE					(0XFFFFFF) //2的24次幂-1
#define		FOU_EIG_POWOFTWO_SUB_ONE					(0XFFFFFFFF) //2的32次幂-1

#define		FIR_BYTE_MASK								(0XFF)
#define		SEC_BYTE_MASK								(0XFF00)
#define		THR_BYTE_MASK								(0XFF0000)
#define		FOU_BYTE_MASK								(0XFF000000)
#define		FIF_BYTE_MASK								(0XFF00000000ULL)
#define		SIX_BYTE_MASK								(0XFF0000000000ULL)
#define		SEV_BYTE_MASK								(0XFF000000000000ULL)
#define		EIG_BYTE_MASK								(0XFF00000000000000ULL)

#define     NUM_0_POWOFTWO_MASK             			(0X0)
#define     NUM_1_POWOFTWO_MASK             			(0X1)
#define     NUM_2_POWOFTWO_MASK             			(0X3)
#define     NUM_3_POWOFTWO_MASK             			(0X7)
#define     NUM_4_POWOFTWO_MASK             			(0XF)
#define     NUM_5_POWOFTWO_MASK             			(0X1F)
#define     NUM_6_POWOFTWO_MASK             			(0X3F)
#define     NUM_7_POWOFTWO_MASK             			(0X7F)
#define     NUM_8_POWOFTWO_MASK             			(0XFF)
#define     NUM_9_POWOFTWO_MASK             			(0X1FF)
#define     NUM_10_POWOFTWO_MASK            			(0X3FF)
#define     NUM_11_POWOFTWO_MASK            			(0X7FF)
#define     NUM_12_POWOFTWO_MASK            			(0XFFF)
#define     NUM_13_POWOFTWO_MASK            			(0X1FFF)
#define     NUM_14_POWOFTWO_MASK            			(0X3FFF)
#define     NUM_15_POWOFTWO_MASK            			(0X7FFF)
#define     NUM_16_POWOFTWO_MASK            			(0XFFFF)
#define     NUM_17_POWOFTWO_MASK            			(0X1FFFF)
#define     NUM_18_POWOFTWO_MASK            			(0X3FFFF)
#define     NUM_19_POWOFTWO_MASK            			(0X7FFFF)
#define     NUM_20_POWOFTWO_MASK            			(0XFFFFF)
#define     NUM_21_POWOFTWO_MASK            			(0X1FFFFF)
#define     NUM_22_POWOFTWO_MASK            			(0X3FFFFF)
#define     NUM_23_POWOFTWO_MASK            			(0X7FFFFF)
#define     NUM_24_POWOFTWO_MASK            			(0XFFFFFF)
#define     NUM_25_POWOFTWO_MASK            			(0X1FFFFFF)
#define     NUM_26_POWOFTWO_MASK            			(0X3FFFFFF)
#define     NUM_27_POWOFTWO_MASK            			(0X7FFFFFF)
#define     NUM_28_POWOFTWO_MASK            			(0XFFFFFFF)
#define     NUM_29_POWOFTWO_MASK            			(0X1FFFFFFF)
#define     NUM_30_POWOFTWO_MASK            			(0X3FFFFFFF)
#define     NUM_31_POWOFTWO_MASK            			(0X7FFFFFFF)
#define     NUM_32_POWOFTWO_MASK            			(0XFFFFFFFF)
#define     NUM_33_POWOFTWO_MASK            			(0X1FFFFFFFF)
#define     NUM_34_POWOFTWO_MASK            			(0X3FFFFFFFF)
#define     NUM_35_POWOFTWO_MASK            			(0X7FFFFFFFF)
#define     NUM_36_POWOFTWO_MASK            			(0XFFFFFFFFF)
#define     NUM_37_POWOFTWO_MASK            			(0X1FFFFFFFFF)
#define     NUM_38_POWOFTWO_MASK            			(0X3FFFFFFFFF)
#define     NUM_39_POWOFTWO_MASK            			(0X7FFFFFFFFF)
#define     NUM_40_POWOFTWO_MASK            			(0XFFFFFFFFFF)
#define     NUM_41_POWOFTWO_MASK            			(0X1FFFFFFFFFF)
#define     NUM_42_POWOFTWO_MASK            			(0X3FFFFFFFFFF)
#define     NUM_43_POWOFTWO_MASK            			(0X7FFFFFFFFFF)
#define     NUM_44_POWOFTWO_MASK            			(0XFFFFFFFFFFF)
#define     NUM_45_POWOFTWO_MASK            			(0X1FFFFFFFFFFF)
#define     NUM_46_POWOFTWO_MASK            			(0X3FFFFFFFFFFF)
#define     NUM_47_POWOFTWO_MASK            			(0X7FFFFFFFFFFF)
#define     NUM_48_POWOFTWO_MASK            			(0XFFFFFFFFFFFF)
#define     NUM_49_POWOFTWO_MASK            			(0X1FFFFFFFFFFFF)
#define     NUM_50_POWOFTWO_MASK            			(0X3FFFFFFFFFFFF)
#define     NUM_51_POWOFTWO_MASK            			(0X7FFFFFFFFFFFF)
#define     NUM_52_POWOFTWO_MASK            			(0XFFFFFFFFFFFFF)
#define     NUM_53_POWOFTWO_MASK            			(0X1FFFFFFFFFFFFF)
#define     NUM_54_POWOFTWO_MASK            			(0X3FFFFFFFFFFFFF)
#define     NUM_55_POWOFTWO_MASK            			(0X7FFFFFFFFFFFFF)
#define     NUM_56_POWOFTWO_MASK            			(0XFFFFFFFFFFFFFF)
#define     NUM_57_POWOFTWO_MASK            			(0X1FFFFFFFFFFFFFF)
#define     NUM_58_POWOFTWO_MASK            			(0X3FFFFFFFFFFFFFF)
#define     NUM_59_POWOFTWO_MASK            			(0X7FFFFFFFFFFFFFF)
#define     NUM_60_POWOFTWO_MASK            			(0XFFFFFFFFFFFFFFF)
#define     NUM_61_POWOFTWO_MASK            			(0X1FFFFFFFFFFFFFFF)
#define     NUM_62_POWOFTWO_MASK            			(0X3FFFFFFFFFFFFFFF)
#define     NUM_63_POWOFTWO_MASK            			(0X7FFFFFFFFFFFFFFF)
#define 	NUM_64_POWOFTWO_MASK						(0XFFFFFFFFFFFFFFFF)

#define 	BIT_ZERO 									(0)
#define		BIT_ONE 									(1)

#define		TYPEUBYTE_BITS								(8)
#define		TYPEUBYTE_BITS_REMMASK						(7)
#define		TYPEUBYTE_BITS_POWOFTWO						(3)
#define		TYPEUBYTE_MASK								(0XFF)
#define 	TYPEUBYTE_MAX								(TYPEBYTE_MASK)
#define 	TYPEBYTE_MAX                				(0X7F)

#define 	TYPEUINT_BITS								(32)
#define		TYPEUINT_BITS_REMMASK						(0X1F)
#define 	TYPEUINT_BITS_POWOFTWO						(5)
#define 	TYPEUINT_MASK								(0XFFFFFFFF)
#define 	TYPEUINT_MAX								(TYPEUINT_MASK)
#define 	TYPEINT_MAX									(0X7FFFFFFF)

#define		TYPEUINT_BYTES								(4)
#define		TYPEUINT_BYTES_REMMASK						(3)
#define		TYPEUINT_BYTES_POWOFTOW						(2)

#define 	TYPEULL_BITS								(64)
#define		TYPEULL_BITS_REMMASK						(0X3F)
#define		TYPEULL_BITS_POWOFTWO						(6)
#define 	TYPEULL_MASK								(0XFFFFFFFFFFFFFFFFULL)
#define 	TYPEULL_MAX									(0XFFFFFFFFFFFFFFFFULL)
#define 	TYPELL_MAX									(0X7FFFFFFFFFFFFFFFULL)
#define		TYPEULL_LOW_32BITS_MASK						(0X00000000FFFFFFFFULL)
#define		TYPEULL_HIGH_32BITS_MASK					(0XFFFFFFFF00000000ULL)

#define 	TYPE_MAX_MASK_DIFF							(1) //2^N - (2^N-1)
//#define TYPE_MAX_MASK_DIFF_VAL						(1) 

#define 	TYPEUINT_HIGH_8_BITS_MASK					(0XFF000000)
#define 	TYPEUINT_HIGH_16_BITS_MASK					(0XFFFF0000)
#define 	TYPEUINT_LOW_16_BITS_MASK					(0X0000FF00)
#define 	TYPEUINT_LOW_8_BITS_MASK					(0X000000FF)
// #define 	TYPEUINT_LOW_8_BITS_CNT						(8)
// #define 	TYPEUINT_LOW_16_BITS_CNT					(16)
// #define 	TYPEUINT_LOW_24_BITS_CNT					(24)
/*
#define 	TYPEUINT_FIRST_BYTE_BITS 			 		(8)
#define 	TYPEUINT_SECON_BYTE_BITS  					(16)
#define 	TYPEUINT_THIRD_BYTE_BITS  					(24)
*/
#define 	TYPEUINT_ONE_BYTE_BITS 			 			(8)
#define 	TYPEUINT_TWO_BYTE_BITS  					(16)
#define 	TYPEUINT_THR_BYTE_BITS  					(24)

#define		TYPEULL_ONE_BYTE_BITS						(TYPEUINT_ONE_BYTE_BITS)
#define		TYPEULL_TWO_BYTE_BITS						(TYPEUINT_TWO_BYTE_BITS)
#define		TYPEULL_THR_BYTE_BITS						(TYPEUINT_THR_BYTE_BITS)
#define		TYPEULL_FOU_BYTE_BITS						(TYPEUINT_BITS)
#define		TYPEULL_FIV_BYTE_BITS						(40)
#define		TYPEULL_SIX_BYTE_BITS						(48)
#define		TYPEULL_SEV_BYTE_BITS						(56)

#define 	SHIFT_BASE_VALUE							(NUM_ONE)
#define 	SHIFT_BASE_VALUE_LL							(NUM_ONE_LL)
#define 	MIN_SHIFT_BITS								(1)
#define 	HALF_RIGHT_SHIFT_BITS						(1)
#define 	TWICE_LEFT_SHIFT_BITS						(1)
#define 	POW2CNT_BIGGER_THAN_POW2INDEX_CNT			(1)
#define 	TWO_HIGTH_BITS_BASE_MASK					(NUM_THR)
#define 	TWO_HIGTH_BITS_BASE_MASK_LL					(NUM_THR_LL)

#define 	MODULUS_INVERSION_VALUE						(1)

#define		YES_POWOFTWO 								(1)
#define		NOT_POWOFTWO								(0)
//#define		MIN_POWOFTWO								(1)
/*
#define		BN_CELL_BYTES_CNT							(4)
#define		BN_CELL_BYTES_REMMASK						(3)
#define		BN_CELL_BYTES_POWOF_TWO						(2)
*/
//define operate

#define	 	NUM_EQ(VA,VB)								((VA) == (VB))
#define		NUM_NE(VA,VB)								((VA) != (VB))
#define		NUM_GT(VA,VB)								((VA)  > (VB))
#define		NUM_GE(VA,VB)								((VA) >= (VB))
#define		NUM_LT(VA,VB)								((VA)  < (VB))
#define		NUM_LE(VA,VB)								((VA) <= (VB))

#define		NUM_IS_ZERO(V) 								NUM_EQ(V,NUM_ZER)
#define		NUM_IS_ONE(V)								NUM_EQ(V,NUM_ONE)
#define		NUM_IS_ONE_LL(V)							NUM_EQ(V,NUM_ONE_LL)
#define		NUM_NOT_ZERO(V)								NUM_NE(V,NUM_ZER)
#define		NUM_NOT_ONE(V)								NUM_NE(V,NUM_ONE)
#define		NUM_NOT_ONE_LL(V)							NUM_NE(V,NUM_ONE_LL)

#define		NUM_IS_ODD(NUM)								( (NUM) & (NUM_ONE) )
#define		NUM_IS_EVN(NUM)								(((NUM) & (NUM_ONE)) == NUM_ZER)
#define		NUM_IS_ODD_WITHOUT_ZERO(NUM)				(((NUM) != NUM_ZER) && NUM_IS_ODD(NUM))
#define		NUM_IS_EVN_WITHOUT_ZERO(NUM)				(((NUM) != NUM_ZER) && NUM_IS_EVN(NUM))
#define		POSITIVE_NUM_IS_ODD(NUM)					(((NUM) >= 0) && NUM_IS_ODD(NUM))
#define		POSITIVE_NUM_IS_EVN(NUM)					(((NUM) >= 0) && NUM_IS_EVN(NUM))

#define		TYPE_NOT(VAL)								(~(VAL))
#define		TYPE_OPP(VAL)								(TYPE_NOT(VAL) + NUM_ONE)
#define 	TYPE_AND(VA,VB)								((VA) & (VB))
#define 	TYPE_OR(VA,VB)								((VA) | (VB))
#define 	TYPE_XOR(VA,VB)								((VA) ^ (VB))
#define 	TYPE_IOR(VA,VB)								TYPE_NOT(TYPE_XOR(VA,VB))
#define		TYPE_NBIT_MASK(N)							(TYPE_LS_SAFE(SHIFT_BASE_VALUE_LL,N) - NUM_ONE)
#define		TYPE_BIT_MASK(V)							(TYPE_LS_SAFE(SHIFT_BASE_VALUE_LL,TYPEULL_BITS_N(V)) - NUM_ONE)
//#define		TYPE_BIT_NOT(V)								TYPE_AND(TYPE_NOT(V),(TYPE_LS_SAFE(SHIFT_BASE_VALUE_LL,TYPEULL_BITS_N(V)) - NUM_ONE))	
#define		TYPE_BIT_NOT(V)								TYPE_AND(TYPE_NOT(V),TYPE_BIT_MASK(V))	


#define		TYPE_SWAP(VA,VB)							(((VA)==(VB)) ? (VA=VB) : ((VA) =TYPE_XOR(VA,VB),(VB)=TYPE_XOR(VA,VB),(VA)=TYPE_XOR(VA,VB)))
#define		TYPE_PTR_SWAP(PA,PB,TMP)					((TMP) = (PA),(PA) = (PB), (PB) = (TMP))

#define 	SET_BIT_ONE(VAL,N)							TYPE_OR(VAL,SHIFT_BASE_VALUE_LL_LS(N))
#define 	SET_BIT_ZERO(VAL,N)							TYPE_AND(VAL,TYPE_NOT(SHIFT_BASE_VALUE_LL_LS(N)))

#define		TYPE_SIZEOF(V)								(sizeof(V))
//#define 	TYPE_LS(VAL,LN)								((VAL) << (LN))
//#define 	TYPE_RS(VAL,RN)								((VAL) >> (RN))
//#define 	TYPE_LS(VAL,LN)								(((LN) >= TYPEULL_BITS) ? (0) : ((SIZE_TYPE_ULLONG)(VAL) << (LN)))
//#define	TYPE_RS(VAL,RN)								(((RN) >= TYPEULL_BITS) ? (0) : ((SIZE_TYPE_ULLONG)(VAL) >> (RN)))
#define		TYPE_RS(V,RN)								((V) >> (RN))
#define		TYPE_LS(V,LN)								((V) << (LN))
#define		TYPE_RS_SAFE(V,RN)							(((RN) >= TYPE_LS(TYPE_SIZEOF(V),TYPEUBYTE_BITS_POWOFTWO)) ? (0) : (TYPE_RS(V,RN)))
#define		TYPE_LS_SAFE(V,LN)							(((LN) >= TYPE_LS(TYPE_SIZEOF(V),TYPEUBYTE_BITS_POWOFTWO)) ? (0) : (TYPE_LS(V,LN)))
#define		TYPE_RS_WITH_ASSIGN(V,RN)					((V) = TYPE_RS(V,RN))
#define		TYPE_LS_WITH_ASSIGN(V,LN)					((V) = TYPE_LS(V,LN))
#define		TYPE_RS_SAFE_WITH_ASSIGN(V,RN)				((V) = TYPE_RS_SAFE(V,RN))
#define		TYPE_LS_SAFE_WITH_ASSIGN(V,RN)				((V) = TYPE_LS_SAFE(V,LN))
#define 	SHIFT_BASE_VALUE_RS(RN)						TYPE_RS(SHIFT_BASE_VALUE,RN)
#define 	SHIFT_BASE_VALUE_LS(LN)						TYPE_LS(SHIFT_BASE_VALUE,LN)
#define 	SHIFT_BASE_VALUE_LL_RS(RN)					TYPE_RS(SHIFT_BASE_VALUE_LL,RN)
#define 	SHIFT_BASE_VALUE_LL_LS(LN)					TYPE_LS(SHIFT_BASE_VALUE_LL,LN)

//#define	TYPE_GET_LOWCNT(V,LN)						( (V) = TYPE_LS_SAFE(V,(TYPEUINT_BITS - LN)), (V) = TYPE_RS_SAFE(V,(TYPEUINT_BITS - LN)) )
//#define 	TYPE_GET_HIGHCNT(V,HN)						( (V) = TYPE_RS_SAFE(V,(TYPEUINT_BITS - HN)), (V) = TYPE_LS_SAFE(V,(TYPEUINT_BITS - HN)) )
#define		TYPE_GET_LOWCNT(V,LN)						TYPE_AND(V,(TYPE_LS_SAFE(SHIFT_BASE_VALUE_LL,LN)-NUM_ONE_LL))
#define 	TYPE_GET_HIGHCNT(V,HN)						TYPE_AND(V,TYPE_NOT(TYPE_LS_SAFE(SHIFT_BASE_VALUE_LL,HN)-NUM_ONE_LL))
#define		TYPE_GET_LOWCNT_WITH_ASSIGN(V,LN)			((V) = TYPE_GET_LOWCNT(V,LN))
#define		TYPE_GET_HIGHCNT_WITH_ASSIGN(V,HN)			((V) = TYPE_GET_HIGHCNT(V,HN))
#define		TYPEUBYTE_GET_LOWCNT_WITH_ASSIGN(V,LN)		( (V) = TYPE_LS_SAFE(V,(TYPEUBYTE_BITS - LN)), (V) = TYPE_RS_SAFE(V,(TYPEUBYTE_BITS - LN)) )
#define 	TYPEUBYTE_GET_HIGHCNT_WITH_ASSIGN(V,HN)		( (V) = TYPE_RS_SAFE(V,(TYPEUBYTE_BITS - HN)), (V) = TYPE_LS_SAFE(V,(TYPEUBYTE_BITS - HN)) )
#define 	TYPEUINT_GET_LOWCNT_WITH_ASSIGN(V,LN)		( (V) = TYPE_LS_SAFE(V,(TYPEUINT_BITS - LN)), (V) = TYPE_RS_SAFE(V,(TYPEUINT_BITS - LN)) )
#define 	TYPEUINT_GET_HIGHCNT_WITH_ASSIGN(V,HN)		( (V) = TYPE_RS_SAFE(V,(TYPEUINT_BITS - HN)), (V) = TYPE_LS_SAFE(V,(TYPEUINT_BITS - HN)) )
#define 	TYPEULL_GET_LOWCNT_WITH_ASSIGN(V,LN)		( (V) = TYPE_LS_SAFE(V,(TYPEULL_BITS - LN)), (V) = TYPE_RS_SAFE(V,(TYPEULL_BITS - LN)) )
#define 	TYPEULL_GET_HIGHCNT_WITH_ASSIGN(V,HN)		( (V) = TYPE_RS_SAFE(V,(TYPEULL_BITS - HN)), (V) = TYPE_LS_SAFE(V,(TYPEULL_BITS - HN)) )

// #define		TYPE_IS_POWOFTWO(V)							(((V) < 0) ? (NOT_POWOFTWO) : ( ( ( (V) & ((V) - 1) ) == 0) ? (YES_POWOFTWO) : (NOT_POWOFTWO) ) )
// #define		TYPE_IS_POWOFTWO_WITHOUT_ZERO(V)			((V == 0) ? (NOT_POWOFTWO) : (TYPE_IS_POWOFTWO(V)))
// #define		TYPE_NOT_POWOFTWO(V)						(!TYPE_IS_POWOFTWO(V))
// #define		TYPE_NOT_POWOFTWO_WITHOUT_ZERO(V)			(!TYPE_IS_POWOFTWO_WITHOUT_ZERO(V))
#define		TYPE_POS_IS_POWOFTWO(V)						( ((V) <= 0) ? (NOT_POWOFTWO) : ( (((V) & ((V) -1)) == NUM_ZER) ? (YES_POWOFTWO) : (NOT_POWOFTWO) ) )
#define		TYPE_POS_IS_POWOFTWO_WITH_ZERO(V)			( ((V) <  0) ? (NOT_POWOFTWO) : ( (((V) & ((V) -1)) == NUM_ZER) ? (YES_POWOFTWO) : (NOT_POWOFTWO) ) )
#define		TYPE_POS_NOT_POWOFTWO(V)					(!TYPE_POS_IS_POWOFTWO(V))
#define		TYPE_POS_NOT_POWOFTWO_WITH_ZERO(V)			(!TYPE_POS_IS_POWOFTWO_WITH_ZERO(V))

//the before first is error
// #define		TYPE_NEG_IS_POWOFTWO(V)						( ((V) >= 0) ? (NOT_POWOFTWO) : (TYPE_POS_IS_POWOFTWO(-V)) )				//error
// #define		TYPE_NEG_IS_POWOFTWO_WITH_ZERO(V)			( ((V) >  0) > (NOT_POWOFTWO) : (TYPE_POS_IS_POWOFTWO_WITH_ZERO(-V)) )		//error
#define		TYPE_NEG_IS_POWOFTWO(V)						( ((V) >= 0) ? (NOT_POWOFTWO) : ((TYPE_AND(TYPE_NOT(V),TYPE_NOT(V) + NUM_ONE) == NUM_ZER) ? (YES_POWOFTWO) : (NOT_POWOFTWO) ) ) //EG.V=2^31
#define		TYPE_NEG_IS_POWOFTWO_WITH_ZERO(V)			( ((V) >  0) > (NOT_POWOFTWO) : ((TYPE_AND(TYPE_NOT(V),TYPE_NOT(V) + NUM_ONE) == NUM_ZER) ? (YES_POWOFTWO) : (NOT_POWOFTWO) ) )
#define		TYPE_NEG_NOT_POWOFTWO(V)					(!TYPE_NEG_IS_POWOFTWO(V))
#define		TYPE_NEG_NOT_POWOFTWO_WITH_ZERO(V)			(!TYPE_NEG_NOT_POWOFTWO_WITH_ZERO(B))

#define		TYPE_POS_NEG_IS_POWOFTWO(V)					((TYPE_POS_IS_POWOFTWO(V) == YES_POWOFTWO) || (TYPE_NEG_IS_POWOFTWO(V) == YES_POWOFTWO))
#define		TYPE_POS_NEG_IS_POWOFTWO_WITH_ZERO(V)		((TYPE_POS_IS_POWOFTWO_WITH_ZERO(V) == YES_POWOFTWO) || (TYPE_NEG_IS_POWOFTWO_WITH_ZERO(V) == YES_POWOFTWO))
#define		TYPE_POS_NEG_NOT_POWOFTWO(V)				((TYPE_POS_IS_POWOFTWO(V) == NOT_POWOFTWO) && (TYPE_NEG_IS_POWOFTWO(V) == NOT_POWOFTWO))
#define		TYPE_POS_NEG_NOT_POWOFTWO_WITH_ZERO(V)		((TYPE_POS_IS_POWOFTWO_WITH_ZERO(V) == NOT_POWOFTWO) && (TYPE_NEG_IS_POWOFTWO_WITH_ZERO(V) == NOT_POWOFTWO)

#define 	TYPE_IS_LS_NPOWOFTWO(VA,VB,N)				( (VA) == TYPE_LS_SAFE(VB,N) || (VA) == -TYPE_LS_SAFE(VB,N) )
#define 	TYPE_IS_RN_NPOWOFTWO(VA,VB,N)				( (VA) == TYPE_RS_SAFE(VB,N) || (VA) == -TYPE_RS_SAFE(VB,N) )
#define 	TYPE_NOT_LS_NPOWOFTWO(VA,VB,N)				( (VA) != TYPE_LS_SAFE(VB,N) && (VA) != -TYPE_LS_SAFE(VB,N) )
#define 	TYPE_NOT_RS_NPOWOFTWO(VA,VB,N)				( (VA) != TYPE_RS_SAFE(VB,N) && (VA) != -TYPE_RS_SAFE(VB,N) )

#define 	TYPE_SQR(VAL)								((VAL) * (VAL))
#define 	TYPE_HALF(VAL)								((VAL) >> HALF_RIGHT_SHIFT_BITS)
#define 	TYPE_TWICE(VAL)								((VAL) << TWICE_LEFT_SHIFT_BITS)
#define 	TYPE_MASK(VAL,MASK)							((VAL) & (MASK))
#define		TYPEULL_LOW_32BITS_TOULL(ULL_VAL)			((SIZE_TYPE_ULLONG)(TYPE_AND(ULL_VAL, TYPEULL_LOW_32BITS_MASK)))
#define		TYPEULL_HIGH_32BITS_TOULL(ULL_VAL)			((SIZE_TYPE_ULLONG)(TYPE_AND(ULL_VAL, TYPEULL_HIGH_32BITS_MASK)))
#define 	TYPEULL_LOW_32BITS_TOUINT(ULL_VAL)			((SIZE_TYPE_UINT)((ULL_VAL) & TYPEUINT_MASK))
#define 	TYPEULL_HIGH_32BITS_TOUINT(ULL_VAL)			((SIZE_TYPE_UINT)(((ULL_VAL) >> TYPEUINT_BITS) & TYPEUINT_MASK))
#define 	TYPEUINT_TOULL(UINT_VAL)					((SIZE_TYPE_ULLONG)(((SIZE_TYPE_ULLONG)((UINT_VAL) & TYPEUINT_MASK)) << TYPEUINT_BITS))
#define 	TWO_TYPEUINT_TOULL(UINTA,UINTB)			    ((SIZE_TYPE_ULLONG)((((SIZE_TYPE_ULLONG)((UINTA) & TYPEUINT_MASK)) << TYPEUINT_BITS) | ((UINTB) & TYPEUINT_MASK)))


#if 0
#define 	TYPEUBYTE_BITS_N(V)							( ((V) == 0) ? (0) : \
					               											( (TYPE_RS(V,4) > 0) ? ( (TYPE_RS(V,6) > 0) ? ( (TYPE_RS(V,7) > 0) ? (8) : (7) ) : \
								  									   		( (TYPE_RS(V,5) > 0) ? (6) : (5) ) ) : \
								  					 						( (TYPE_RS(V,2) > 0) ? ( (TYPE_RS(V,3) > 0) ? (4) : (3) ) : \
								  						               		( (TYPE_RS(V,1) > 0) ? (2) : (1) ) ) ) ) 

#define 	TYPEUINT_BITS_N(V)  						( ((V) == 0) ? (0) : \
							  												( (TYPE_RS(V,TYPEUINT_SECON_BYTE_BITS) > 0) ? ( (TYPE_RS(V,TYPEUINT_THIRD_BYTE_BITS) > 0) ? ( TYPEUBYTE_BITS_N(TYPE_RS(V,TYPEUINT_THIRD_BYTE_BITS)) + TYPEUINT_THIRD_BYTE_BITS ) : ( TYPEUBYTE_BITS_N(TYPE_RS(V,TYPEUINT_SECON_BYTE_BITS)) + TYPEUINT_SECON_BYTE_BITS ) ) : \
							   					 													( (TYPE_RS(V,TYPEUINT_FIRST_BYTE_BITS) > 0) ? ( TYPEUBYTE_BITS_N(TYPE_RS(V,TYPEUINT_FIRST_BYTE_BITS)) + TYPEUINT_FIRST_BYTE_BITS ) : ( TYPEUBYTE_BITS_N(V) ) ) ) )

#define	 	TYPEULL_BITS_N(V) 							( ((V) == 0) ? (0) : ( (TYPE_RS(V,TYPEUINT_BITS) > 0) ? ( TYPEUINT_BITS_N(TYPE_RS(V,TYPEUINT_BITS)) + TYPEUINT_BITS ) : ( TYPEUINT_BITS_N(V) ) ) )
#else

#define 	TYPEUBYTE_BITS_N(V)							( ((V) == 0) ? (0) : \
					               											( ((V) > FOU_POWOFTWO_SUB_ONE) ? ( ((V) > SIX_POWOFTWO_SUB_ONE) ? ( ((V) > SEV_POWOFTWO_SUB_ONE) ? (8) : (7) ) : \
								  									   		( ((V) > FIV_POWOFTWO_SUB_ONE) ? (6) : (5) ) ) : \
								  					 						( ((V) > TWO_POWOFTWO_SUB_ONE) ? ( ((V) > THR_POWOFTWO_SUB_ONE) ? (4) : (3) ) : \
								  						               		( ((V) > ONE_POWOFTWO_SUB_ONE) ? (2) : (1) ) ) ) ) 

#define 	TYPEUINT_BITS_N(V)  						( ((V) == 0) ? (0) : \
							  												( ((V) > TWO_EIG_POWOFTWO_SUB_ONE) ? ( ((V) > THR_EIG_POWOFTWO_SUB_ONE) ? ( TYPEUBYTE_BITS_N(TYPE_RS(V,TYPEUINT_THR_BYTE_BITS)) + TYPEUINT_THR_BYTE_BITS ) : ( TYPEUBYTE_BITS_N(TYPE_RS(V,TYPEUINT_TWO_BYTE_BITS)) + TYPEUINT_TWO_BYTE_BITS ) ) : \
							   					 																 ( ((V) > EIG_POWOFTWO_SUB_ONE) ? ( TYPEUBYTE_BITS_N(TYPE_RS(V,TYPEUINT_ONE_BYTE_BITS)) + TYPEUINT_ONE_BYTE_BITS ) : ( TYPEUBYTE_BITS_N(V) ) ) ) )

#define		TYPEUINT_BYTES_N(V)							( ((V) == 0) ? (0) : \
							  												( ((V) > TWO_EIG_POWOFTWO_SUB_ONE) ? ( ((V) > THR_EIG_POWOFTWO_SUB_ONE) ? ( NUM_FOU ) : ( NUM_THR ) ) : \
							   					 																 ( ((V) > EIG_POWOFTWO_SUB_ONE) ? ( NUM_TWO ) : ( NUM_ONE ) ) ) )

#define	 	TYPEULL_BITS_N(V) 							( ((V) == 0) ? (0) : ( ((V) > FOU_EIG_POWOFTWO_SUB_ONE) ? ( TYPEUINT_BITS_N(TYPE_RS(V,TYPEUINT_BITS)) + TYPEUINT_BITS ) : ( TYPEUINT_BITS_N(V) ) ) )

#define	 	TYPEULL_BYTES_N(V) 							( ((V) == 0) ? (1) : ( ((V) > FOU_EIG_POWOFTWO_SUB_ONE) ? ( TYPEUINT_BYTES_N(TYPE_RS(V,TYPEUINT_BITS)) + NUM_FOU ) : ( TYPEUINT_BYTES_N(V) ) ) )

#endif


#define		TYPEUINT_BYTE_SWAP(V)						( TYPE_LS(TYPE_MASK(V,FIR_BYTE_MASK),24) \
														| TYPE_LS(TYPE_MASK(V,SEC_BYTE_MASK),8) \
														| TYPE_RS(TYPE_MASK(V,THR_BYTE_MASK),8) \
														| TYPE_RS(TYPE_MASK(V,FOU_BYTE_MASK),24) )

#define 	TYPEULL_BYTE_SWAP(V)						( TYPE_LS(TYPE_MASK(V,FIR_BYTE_MASK),56) \
														| TYPE_LS(TYPE_MASK(V,SEC_BYTE_MASK),40) \
														| TYPE_LS(TYPE_MASK(V,THR_BYTE_MASK),24) \
														| TYPE_LS(TYPE_MASK(V,FOU_BYTE_MASK),8) \
														| TYPE_RS(TYPE_MASK(V,FIF_BYTE_MASK),8) \
														| TYPE_RS(TYPE_MASK(V,SIX_BYTE_MASK),24) \
														| TYPE_RS(TYPE_MASK(V,SEV_BYTE_MASK),40) \
														| TYPE_RS(TYPE_MASK(V,EIG_BYTE_MASK),56) )

#define		TYPEUINT_BYTE_SWAP_WITH_ASSIGN(V)			(V = TYPEUINT_BYTE_SWAP(V))
#define		TYPEULL_BYTE_SWAP_WITH_ASSIGN(V)			(V = TYPEULL_BYTE_SWAP(V))

#if (SYSTEM_ENDIAN == LITTLEENDIAN)

#define		STR_TO_TYPEUINT_WITH_LITTLE_ENDIAN(PTR_STR,UINT_VAL)	((UINT_VAL)= (SIZE_TYPE_UINT)(*((const SIZE_TYPE_UINT *)(PTR_STR))), (UINT_VAL))

#define		TYPEUINT_TO_STR_WITH_LITTLE_ENDIAN(UINT_VAL,PTR_STR)	(*((SIZE_TYPE_UINT *)(PTR_STR)) = (SIZE_TYPE_UINT)(UINT_VAL), (UINT_VAL))

#define		STR_TO_TYPEULL_WITH_LITTLE_ENDIAN(PTR_STR,ULL_VAL)		((ULL_VAL)= (SIZE_TYPE_ULLONG)(*((const SIZE_TYPE_ULLONG *)(PTR_STR))),(ULL_VAL))

#define		TYPEULL_TO_STR_WITH_LITTLE_ENDIAN(ULL_VAL,PTR_STR)		(*((SIZE_TYPE_ULLONG *)(PTR_STR)) = (SIZE_TYPE_ULLONG)(ULL_VAL),(ULL_VAL))

#define		STR_TO_TYPEUINT_WITH_BIG_ENDIAN(PTR_STR,UINT_VAL)		( UINT_VAL  = (((SIZE_TYPE_UINT)((PTR_STR)[0])) << TYPEUINT_THR_BYTE_BITS), \
																	  UINT_VAL |= (((SIZE_TYPE_UINT)((PTR_STR)[1])) << TYPEUINT_TWO_BYTE_BITS), \
																	  UINT_VAL |= (((SIZE_TYPE_UINT)((PTR_STR)[2])) << TYPEUINT_ONE_BYTE_BITS), \
																	  UINT_VAL |=  ((SIZE_TYPE_UINT)((PTR_STR)[3])), (UINT_VAL) )

#define		TYPEUINT_TO_STR_WITH_BIG_ENDIAN(UINT_VAL,PTR_STR)		( (PTR_STR)[0]  = (SIZE_TYPE_UBYTE)(((UINT_VAL) >> TYPEUINT_THR_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[1]  = (SIZE_TYPE_UBYTE)(((UINT_VAL) >> TYPEUINT_TWO_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[2]  = (SIZE_TYPE_UBYTE)(((UINT_VAL) >> TYPEUINT_ONE_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[3]  = (SIZE_TYPE_UBYTE)( (UINT_VAL) & TYPEUBYTE_MASK),(UINT_VAL) )

#define		STR_TO_TYPEULL_WITH_BIG_ENDIAN(PTR_STR,ULL_VAL)			( ULL_VAL  = (((SIZE_TYPE_ULLONG)((PTR_STR)[0])) << TYPEULL_SEV_BYTE_BITS), \
																	  ULL_VAL |= (((SIZE_TYPE_ULLONG)((PTR_STR)[1])) << TYPEULL_SIX_BYTE_BITS), \
																	  ULL_VAL |= (((SIZE_TYPE_ULLONG)((PTR_STR)[2])) << TYPEULL_FIV_BYTE_BITS), \
																	  ULL_VAL |= (((SIZE_TYPE_ULLONG)((PTR_STR)[3])) << TYPEULL_FOU_BYTE_BITS), \
																	  ULL_VAL |= (((SIZE_TYPE_ULLONG)((PTR_STR)[4])) << TYPEULL_THR_BYTE_BITS), \
																	  ULL_VAL |= (((SIZE_TYPE_ULLONG)((PTR_STR)[5])) << TYPEULL_TWO_BYTE_BITS), \
																	  ULL_VAL |= (((SIZE_TYPE_ULLONG)((PTR_STR)[6])) << TYPEULL_ONE_BYTE_BITS), \
																	  ULL_VAL |=  ((SIZE_TYPE_ULLONG)((PTR_STR)[7])), (ULL_VAL))

#define		TYPEULL_TO_STR_WITH_BIG_ENDIAN(ULL_VAL,PTR_STR)			( (PTR_STR)[0]  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_SEV_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[1]  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_SIX_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[2]  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_FIV_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[3]  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_FOU_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[4]  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_THR_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[5]  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_TWO_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[6]  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_ONE_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[7]  = (SIZE_TYPE_UBYTE)( (ULL_VAL) & TYPEUBYTE_MASK),(ULL_VAL) )




#define		STR_TO_TYPEUINT_WITH_LITTLE_ENDIAN_WITH_PTR_SHIFT(PTR_STR,UINT_VAL)		((UINT_VAL)= (SIZE_TYPE_UINT)(*((const SIZE_TYPE_UINT *)(PTR_STR))), (PTR_STR) = ((TYPE_T *)(PTR_STR)) + SIZEOF_SIZE_TYPE_UINT, (UINT_VAL))

#define		TYPEUINT_TO_STR_WITH_LITTLE_ENDIAN_WITH_PTR_SHIFT(UINT_VAL,PTR_STR)		(*((SIZE_TYPE_UINT *)(PTR_STR)) = (SIZE_TYPE_UINT)(UINT_VAL), (PTR_STR) = ((TYPE_T *)(PTR_STR)) + SIZEOF_SIZE_TYPE_UINT, (UINT_VAL))

#define		STR_TO_TYPEULL_WITH_LITTLE_ENDIAN_WITH_PTR_SHIFT(PTR_STR,ULL_VAL)		((ULL_VAL)= (SIZE_TYPE_ULLONG)(*((const SIZE_TYPE_ULLONG *)(PTR_STR))), (PTR_STR) =((TYPE_T *)(PTR_STR)) + SIZEOF_SIZE_TYPE_ULLONG, (ULL_VAL))

#define		TYPEULL_TO_STR_WITH_LITTLE_ENDIAN_WITH_PTR_SHIFT(ULL_VAL,PTR_STR)		(*((SIZE_TYPE_ULLONG *)(PTR_STR)) = (SIZE_TYPE_ULLONG)(ULL_VAL), (PTR_STR) = ((TYPE_T *)(PTR_STR)) + SIZEOF_SIZE_TYPE_ULLONG, (ULL_VAL))

#define		STR_TO_TYPEUINT_WITH_BIG_ENDIAN_WITH_PTR_SHIFT(PTR_STR,UINT_VAL)		( UINT_VAL  = (((SIZE_TYPE_UINT)(*(((TYPE_T *)(PTR_STR))++))) << TYPEUINT_THR_BYTE_BITS), \
																					  UINT_VAL |= (((SIZE_TYPE_UINT)(*(((TYPE_T *)(PTR_STR))++))) << TYPEUINT_TWO_BYTE_BITS), \
																					  UINT_VAL |= (((SIZE_TYPE_UINT)(*(((TYPE_T *)(PTR_STR))++))) << TYPEUINT_ONE_BYTE_BITS), \
																					  UINT_VAL |=  ((SIZE_TYPE_UINT)(*(((TYPE_T *)(PTR_STR))++))), (UINT_VAL) )

#define		TYPEUINT_TO_STR_WITH_BIG_ENDIAN_WITH_PTR_SHIFT(UINT_VAL,PTR_STR)		( *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((UINT_VAL) >> TYPEUINT_THR_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((UINT_VAL) >> TYPEUINT_TWO_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((UINT_VAL) >> TYPEUINT_ONE_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)( (UINT_VAL) & TYPEUBYTE_MASK),(UINT_VAL) )

#define		STR_TO_TYPEULL_WITH_BIG_ENDIAN_WITH_PTR_SHIFT(PTR_STR,ULL_VAL)			( ULL_VAL  = (((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))) << TYPEULL_SEV_BYTE_BITS), \
																					  ULL_VAL |= (((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))) << TYPEULL_SIX_BYTE_BITS), \
																					  ULL_VAL |= (((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))) << TYPEULL_FIV_BYTE_BITS), \
																					  ULL_VAL |= (((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))) << TYPEULL_FOU_BYTE_BITS), \
																					  ULL_VAL |= (((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))) << TYPEULL_THR_BYTE_BITS), \
																					  ULL_VAL |= (((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))) << TYPEULL_TWO_BYTE_BITS), \
																					  ULL_VAL |= (((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))) << TYPEULL_ONE_BYTE_BITS), \
																					  ULL_VAL |=  ((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))), (ULL_VAL))

#define		TYPEULL_TO_STR_WITH_BIG_ENDIAN_WITH_PTR_SHIFT(ULL_VAL,PTR_STR)			( *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_SEV_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_SIX_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_FIV_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_FOU_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_THR_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_TWO_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_ONE_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)( (ULL_VAL) & TYPEUBYTE_MASK),(ULL_VAL) )

#else

#define		STR_TO_TYPEUINT_WITH_LITTLE_ENDIAN(PTR_STR,UINT_VAL)	( UINT_VAL  = (((SIZE_TYPE_UINT)((PTR_STR)[0])) << TYPEUINT_THR_BYTE_BITS), \
																	  UINT_VAL |= (((SIZE_TYPE_UINT)((PTR_STR)[1])) << TYPEUINT_TWO_BYTE_BITS), \
																	  UINT_VAL |= (((SIZE_TYPE_UINT)((PTR_STR)[2])) << TYPEUINT_ONE_BYTE_BITS), \
																	  UINT_VAL |=  ((SIZE_TYPE_UINT)((PTR_STR)[3])), (UINT_VAL))

#define		TYPEUINT_TO_STR_WITH_LITTLE_ENDIAN(UINT_VAL,PTR_STR)	( (PTR_STR)[0]  = (SIZE_TYPE_UBYTE)(((UINT_VAL) >> TYPEUINT_THR_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[1]  = (SIZE_TYPE_UBYTE)(((UINT_VAL) >> TYPEUINT_TWO_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[2]  = (SIZE_TYPE_UBYTE)(((UINT_VAL) >> TYPEUINT_ONE_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[3]  = (SIZE_TYPE_UBYTE)( (UINT_VAL) & TYPEUBYTE_MASK),(UINT_VAL) )

#define		STR_TO_TYPEULL_WITH_LITTLE_ENDIAN(PTR_STR,ULL_VAL)		( ULL_VAL  = (((SIZE_TYPE_ULLONG)((PTR_STR)[0])) << TYPEULL_SEV_BYTE_BITS), \
																	  ULL_VAL |= (((SIZE_TYPE_ULLONG)((PTR_STR)[1])) << TYPEULL_SIX_BYTE_BITS), \
																	  ULL_VAL |= (((SIZE_TYPE_ULLONG)((PTR_STR)[2])) << TYPEULL_FIV_BYTE_BITS), \
																	  ULL_VAL |= (((SIZE_TYPE_ULLONG)((PTR_STR)[3])) << TYPEULL_FOU_BYTE_BITS), \
																	  ULL_VAL |= (((SIZE_TYPE_ULLONG)((PTR_STR)[4])) << TYPEULL_THR_BYTE_BITS), \
																	  ULL_VAL |= (((SIZE_TYPE_ULLONG)((PTR_STR)[5])) << TYPEULL_TWO_BYTE_BITS), \
																	  ULL_VAL |= (((SIZE_TYPE_ULLONG)((PTR_STR)[6])) << TYPEULL_ONE_BYTE_BITS), \
																	  ULL_VAL |=  ((SIZE_TYPE_ULLONG)((PTR_STR)[7])), (ULL_VAL))


#define		TYPEULL_TO_STR_WITH_LITTLE_ENDIAN(ULL_VAL,PTR_STR)		( (PTR_STR)[0]  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_SEV_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[1]  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_SIX_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[2]  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_FIV_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[3]  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_FOU_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[4]  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_THR_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[5]  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_TWO_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[6]  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_ONE_BYTE_BITS) & TYPEUBYTE_MASK), \
																	  (PTR_STR)[7]  = (SIZE_TYPE_UBYTE)( (ULL_VAL) & TYPEUBYTE_MASK),(ULL_VAL) )


#define		STR_TO_TYPEUINT_WITH_BIG_ENDIAN(PTR_STR,UINT_VAL)		((UINT_VAL)= (SIZE_TYPE_UINT)(*((const SIZE_TYPE_UINT *)(PTR_STR))), (UINT_VAL))

#define		TYPEUINT_TO_STR_WITH_BIG_ENDIAN(UINT_VAL,PTR_STR)		(*((SIZE_TYPE_UINT *)(PTR_STR)) = (SIZE_TYPE_UINT)(UINT_VAL), (UINT_VAL))

#define		STR_TO_TYPEULL_WITH_BIG_ENDIAN(PTR_STR,ULL_VAL)			((ULL_VAL)= (SIZE_TYPE_ULLONG)(*((const SIZE_TYPE_ULLONG *)(PTR_STR))),(ULL_VAL))

#define		TYPEULL_TO_STR_WITH_BIG_ENDIAN(ULL_VAL,PTR_STR)			(*((SIZE_TYPE_ULLONG *)(PTR_STR)) = (SIZE_TYPE_ULLONG)(ULL_VAL),(ULL_VAL))




#define		STR_TO_TYPEUINT_WITH_LITTLE_ENDIAN_WITH_PTR_SHIFT(PTR_STR,UINT_VAL)		( UINT_VAL  = (((SIZE_TYPE_UINT)(*(((TYPE_T *)(PTR_STR))++))) << TYPEUINT_THR_BYTE_BITS), \
																					  UINT_VAL |= (((SIZE_TYPE_UINT)(*(((TYPE_T *)(PTR_STR))++))) << TYPEUINT_TWO_BYTE_BITS), \
																					  UINT_VAL |= (((SIZE_TYPE_UINT)(*(((TYPE_T *)(PTR_STR))++))) << TYPEUINT_ONE_BYTE_BITS), \
																					  UINT_VAL |=  ((SIZE_TYPE_UINT)(*(((TYPE_T *)(PTR_STR))++))), (UINT_VAL) )

#define		TYPEUINT_TO_STR_WITH_LITTLE_ENDIAN_WITH_PTR_SHIFT(UINT_VAL,PTR_STR)		( *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((UINT_VAL) >> TYPEUINT_THR_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((UINT_VAL) >> TYPEUINT_TWO_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((UINT_VAL) >> TYPEUINT_ONE_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)( (UINT_VAL) & TYPEUBYTE_MASK),(UINT_VAL) )

#define		STR_TO_TYPEULL_WITH_LITTLE_ENDIAN_WITH_PTR_SHIFT(PTR_STR,ULL_VAL)		( ULL_VAL  = (((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))) << TYPEULL_SEV_BYTE_BITS), \
																					  ULL_VAL |= (((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))) << TYPEULL_SIX_BYTE_BITS), \
																					  ULL_VAL |= (((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))) << TYPEULL_FIV_BYTE_BITS), \
																					  ULL_VAL |= (((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))) << TYPEULL_FOU_BYTE_BITS), \
																					  ULL_VAL |= (((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))) << TYPEULL_THR_BYTE_BITS), \
																					  ULL_VAL |= (((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))) << TYPEULL_TWO_BYTE_BITS), \
																					  ULL_VAL |= (((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))) << TYPEULL_ONE_BYTE_BITS), \
																					  ULL_VAL |=  ((SIZE_TYPE_ULLONG)(*(((TYPE_T *)(PTR_STR))++))), (ULL_VAL))

#define		TYPEULL_TO_STR_WITH_LITTLE_ENDIAN_WITH_PTR_SHIFT(ULL_VAL,PTR_STR)		( *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_SEV_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_SIX_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_FIV_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_FOU_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_THR_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_TWO_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)(((ULL_VAL) >> TYPEULL_ONE_BYTE_BITS) & TYPEUBYTE_MASK), \
																					  *(((TYPE_T *)(PTR_STR))++)  = (SIZE_TYPE_UBYTE)( (ULL_VAL) & TYPEUBYTE_MASK),(ULL_VAL) )


#define		STR_TO_TYPEUINT_WITH_BIG_ENDIAN_WITH_PTR_SHIFT(PTR_STR,UINT_VAL)		((UINT_VAL)= (SIZE_TYPE_UINT)(*((const SIZE_TYPE_UINT *)(PTR_STR))), (PTR_STR) = ((TYPE_T *)(PTR_STR)) + SIZEOF_SIZE_TYPE_UINT, (UINT_VAL))

#define		TYPEUINT_TO_STR_WITH_BIG_ENDIAN_WITH_PTR_SHIFT(UINT_VAL,PTR_STR)		(*((SIZE_TYPE_UINT *)(PTR_STR)) = (SIZE_TYPE_UINT)(UINT_VAL), (PTR_STR) = ((TYPE_T *)(PTR_STR)) + SIZEOF_SIZE_TYPE_UINT, (UINT_VAL))

#define		STR_TO_TYPEULL_WITH_BIG_ENDIAN_WITH_PTR_SHIFT(PTR_STR,ULL_VAL)			((ULL_VAL)= (SIZE_TYPE_ULLONG)(*((const SIZE_TYPE_ULLONG *)(PTR_STR))), (PTR_STR) =((TYPE_T *)(PTR_STR)) + SIZEOF_SIZE_TYPE_ULLONG, (ULL_VAL))

#define		TYPEULL_TO_STR_WITH_BIG_ENDIAN_WITH_PTR_SHIFT(ULL_VAL,PTR_STR)			(*((SIZE_TYPE_ULLONG *)(PTR_STR)) = (SIZE_TYPE_ULLONG)(ULL_VAL), (PTR_STR) = ((TYPE_T *)(PTR_STR)) + SIZEOF_SIZE_TYPE_ULLONG, (ULL_VAL))


#endif

#endif
