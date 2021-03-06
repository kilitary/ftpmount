#define NASHVILLE

#define VER_PRODUCT_MAJOR		1
#define VER_PRODUCT_MINOR		0
#define VER_PRODUCT_BUILD		0
#define VER_PRODUCT_QFE 		0
#define VER_MODULE_BUILD 0

#undef VER_PRODUCTMAJORVERSION
#define VER_PRODUCTMAJORVERSION VER_PRODUCT_MAJOR

#undef VER_PRODUCTMINORVERSION
#define VER_PRODUCTMINORVERSION VER_PRODUCT_MINOR

#ifndef VER_PRODUCTVERSION_STRING
	#define VER_PRODUCTVERSION_MAJORMINOR2(x,y) #x "." #y
	#define VER_PRODUCTVERSION_MAJORMINOR1(x,y) VER_PRODUCTVERSION_MAJORMINOR2(x, y)
	#define VER_PRODUCTVERSION_STRING   VER_PRODUCTVERSION_MAJORMINOR1(VER_PRODUCTMAJORVERSION, VER_PRODUCTMINORVERSION)
#endif

#ifndef VER_PRODUCTVERSION
	#define VER_PRODUCTVERSION          VER_PRODUCTMAJORVERSION,VER_PRODUCTMINORVERSION,VER_PRODUCTBUILD,VER_PRODUCT_QFE
#endif

#undef VER_COMPANYNAME_STR
#undef VER_LEGALCOPYRIGHT_STR
#undef VER_LEGALTRADEMARKS_STR
#undef VER_PRODUCTNAME_STR

#define VER_COMPANYNAME_STR		"NT KERNEL RESOURCES LAB."
#define VER_LEGALCOPYRIGHT_STR		"Copyright (C) NT KERNEL RESOURCES LAB. 2000-2010"
#define VER_LEGALTRADEMARKS_STR		"NT KERNEL RESOURCES LAB."
#define VER_PRODUCTNAME_STR		"Virtual Disk SDK (R)"


