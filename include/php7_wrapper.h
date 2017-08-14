/*
+----------------------------------------------------------------------+
| SeasLog                                                              |
+----------------------------------------------------------------------+
| This source file is subject to version 2.0 of the Apache license,    |
| that is bundled with this package in the file LICENSE, and is        |
| available through the world-wide-web at the following url:           |
| http://www.apache.org/licenses/LICENSE-2.0.html                      |
| If you did not receive a copy of the Apache2.0 license and are unable|
| to obtain it through the world-wide-web, please send a note to       |
| license@php.net so we can mail you a copy immediately.               |
+----------------------------------------------------------------------+
| Author: Neeke.Gao  <neeke@php.net>                                   |
+----------------------------------------------------------------------+
*/

#if PHP_VERSION_ID >= 70000

#define SEASLOG_ZVAL_STRING(z, s) ZVAL_STRING(z, s)
#define SEASLOG_ZVAL_STRINGL(z, s, l) ZVAL_STRINGL(z, s, l)
#define SEASLOG_RETURN_STRINGL(k, l) RETURN_STRINGL(k, l)
#define SEASLOG_ADD_INDEX_STRINGL(z, i, s, l) add_index_stringl(&z, i, s, l)
#define SEASLOG_ADD_INDEX_LONG(z, i, l) add_index_long(&z, i, l)
#define SEASLOG_ADD_INDEX_ZVAL(z, i, zn) add_index_zval(&z, i, &zn)
#define SEASLOG_ADD_ASSOC_ZVAL_EX(z, s, l, zn) add_assoc_zval_ex(z, s, l, zn)
#define SEASLOG_ADD_ASSOC_STRING_EX(a, k, l, s) add_assoc_string_ex(&a, k, l, s)
#define SEASLOG_ADD_NEXT_INDEX_STRING(a, s) add_next_index_string(a, s)
#define SEASLOG_ADD_NEXT_INDEX_STRINGL(a, s, l) add_next_index_stringl(a, s, l)
#define SEASLOG_ZEND_HASH_GET_CURRENT_KEY(ht, key, idx) zend_hash_get_current_key(ht, key, idx)
#define SEASLOG_ZEND_HASH_INDEX_UPDATE(ht, h, pData, nDataSize, pDest)  zend_hash_index_update_ptr(ht, h, pData)

#else

#define SEASLOG_ZVAL_STRING(z, s) ZVAL_STRING(z, s, 1)
#define SEASLOG_ZVAL_STRINGL(z, s, l) ZVAL_STRING(z, s, l, 1)
#define SEASLOG_RETURN_STRINGL(k, l) RETURN_STRINGL(k, l, 1)
#define SEASLOG_ADD_INDEX_STRINGL(z, i, s, l) add_index_stringl(z, i, s, l, 1)
#define SEASLOG_ADD_INDEX_LONG(z, i, l) add_index_long(z, i, l)
#define SEASLOG_ADD_INDEX_ZVAL(z, i, zn) add_index_zval(z, i, zn)
#define SEASLOG_ADD_ASSOC_ZVAL_EX(z, s, l, zn) add_assoc_zval_ex(z, s, l, zn)
#define SEASLOG_ADD_ASSOC_STRING_EX(a, k, l, s) add_assoc_string_ex(a, k, l, s, 1)
#define SEASLOG_ADD_NEXT_INDEX_STRING(a, s) add_next_index_string(a, s, 1)
#define SEASLOG_ADD_NEXT_INDEX_STRINGL(a, s, l) add_next_index_stringl(a, s, l, 1)
#define SEASLOG_ZEND_HASH_GET_CURRENT_KEY(ht, key, idx) zend_hash_get_current_key(ht, key, idx, 0)
#define SEASLOG_ZEND_HASH_INDEX_UPDATE(ht, h, pData, nDataSize, pDest)  zend_hash_index_update(ht, h, pData, nDataSize, pDest)

#endif