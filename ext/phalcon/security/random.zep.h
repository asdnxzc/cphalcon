
extern zend_class_entry *phalcon_security_random_ce;

ZEPHIR_INIT_CLASS(Phalcon_Security_Random);

PHP_METHOD(Phalcon_Security_Random, base58);
PHP_METHOD(Phalcon_Security_Random, base62);
PHP_METHOD(Phalcon_Security_Random, base64);
PHP_METHOD(Phalcon_Security_Random, base64Safe);
PHP_METHOD(Phalcon_Security_Random, bytes);
PHP_METHOD(Phalcon_Security_Random, hex);
PHP_METHOD(Phalcon_Security_Random, number);
PHP_METHOD(Phalcon_Security_Random, uuid);
PHP_METHOD(Phalcon_Security_Random, base);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_base58, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_base58, 0, 0, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 1)
#else
	ZEND_ARG_INFO(0, len)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_base62, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_base62, 0, 0, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 1)
#else
	ZEND_ARG_INFO(0, len)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_base64, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_base64, 0, 0, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 1)
#else
	ZEND_ARG_INFO(0, len)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_base64safe, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_base64safe, 0, 0, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 1)
#else
	ZEND_ARG_INFO(0, len)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, padding, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, padding)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_bytes, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_bytes, 0, 0, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, len)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_hex, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_hex, 0, 0, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 1)
#else
	ZEND_ARG_INFO(0, len)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_number, 0, 1, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_number, 0, 1, IS_LONG, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, len)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_uuid, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_uuid, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_base, 0, 2, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_security_random_base, 0, 2, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, alphabet, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, alphabet)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, base)
#endif
	ZEND_ARG_INFO(0, n)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_security_random_method_entry) {
	PHP_ME(Phalcon_Security_Random, base58, arginfo_phalcon_security_random_base58, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Security_Random, base62, arginfo_phalcon_security_random_base62, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Security_Random, base64, arginfo_phalcon_security_random_base64, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Security_Random, base64Safe, arginfo_phalcon_security_random_base64safe, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Security_Random, bytes, arginfo_phalcon_security_random_bytes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Security_Random, hex, arginfo_phalcon_security_random_hex, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Security_Random, number, arginfo_phalcon_security_random_number, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Security_Random, uuid, arginfo_phalcon_security_random_uuid, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Security_Random, base, arginfo_phalcon_security_random_base, ZEND_ACC_PROTECTED)
	PHP_FE_END
};
