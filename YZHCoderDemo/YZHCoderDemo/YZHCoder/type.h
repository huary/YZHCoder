#ifndef _TYPE_YUANZH_H_
#define _TYPE_YUANZH_H_
typedef		unsigned int								SIZE_TYPE_T;

typedef		unsigned char								TYPE_T;
typedef		char										BYTE_T;

typedef		char										SIZE_TYPE_BYTE;
typedef		unsigned char								SIZE_TYPE_UBYTE;
typedef		short										SIZE_TYPE_SHORT;
typedef		unsigned short								SIZE_TYPE_USHORT;
typedef		int											SIZE_TYPE_INT;
typedef		unsigned int								SIZE_TYPE_UINT;
typedef		long										SIZE_TYPE_LONG;
typedef		unsigned long								SIZE_TYPE_ULONG;
typedef		long long									SIZE_TYPE_LLONG;
typedef		unsigned long long							SIZE_TYPE_ULLONG;

typedef		double										SIZE_TYPE_DOUBLE;

typedef 	long int 									SIZE_TYPE_LONG_INT;
typedef 	unsigned long int 							SIZE_TYPE_ULONG_INT;

typedef		int											SIZE_TYPE_INT32_T;
typedef		unsigned int								SIZE_TYPE_UINT32_T;

typedef		SIZE_TYPE_UINT32_T							SIZE_TYPE_PID_T;
typedef 	SIZE_TYPE_ULONG 							SIZE_TYPE_THREAD_ID_T;

#define		SIZEOF_BYTE_T								(sizeof(BYTE_T))
#define		SIZEOF_TYPE_T								(sizeof(TYPE_T))
#define		SIZEOF_SIZE_TYPE_BYTE						(sizeof(SIZE_TYPE_BYTE))
#define		SIZEOF_SIZE_TYPE_UBYTE						(sizeof(SIZE_TYPE_UBYTE))
#define		SIZEOF_SIZE_TYPE_SHORT						(sizeof(SIZE_TYPE_SHORT))
#define		SIZEOF_SIZE_TYPE_USHORT						(sizeof(SIZE_TYPE_USHORT))
#define		SIZEOF_SIZE_TYPE_INT						(sizeof(SIZE_TYPE_INT))
#define		SIZEOF_SIZE_TYPE_UINT						(sizeof(SIZE_TYPE_UINT))
#define		SIZEOF_SIZE_TYPE_LONG						(sizeof(SIZE_TYPE_LONG))
#define		SIZEOF_SIZE_TYPE_ULONG						(sizeof(SIZE_TYPE_ULONG))
#define		SIZEOF_SIZE_TYPE_LLONG						(sizeof(SIZE_TYPE_LLONG))
#define		SIZEOF_SIZE_TYPE_ULLONG						(sizeof(SIZE_TYPE_ULLONG))
#define 	SIZEOF_SIZE_TYPE_LONG_INT					(sizeof(SIZE_TYPE_LONG_INT))
#define 	SIZEOF_SIZE_TYPE_ULONG_INT					(sizeof(SIZE_TYPE_ULONG_INT))

#define		SIZEOF_SIZE_TYPE_INT32_T					(sizeof(SIZE_TYPE_INT32_T))
#define		SIZEOF_SIZE_TYPE_UINT32_T					(sizeof(SIZE_TYPE_UINT32_T))

#define		TYPE_OF_NAME(TYPE_NAME)						(#TYPE_NAME)


#define		KB											(1024)
#define		MB											(1048576)
#define		GB											(1073741824)

#endif
