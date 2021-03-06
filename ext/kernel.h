
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2013 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

extern zend_class_entry *phalcon_kernel_ce;

PHALCON_INIT_CLASS(Phalcon_Kernel);

PHP_METHOD(Phalcon_Kernel, preComputeHashKey);
PHP_METHOD(Phalcon_Kernel, preComputeHashKey32);
PHP_METHOD(Phalcon_Kernel, preComputeHashKey64);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_kernel_precomputehashkey, 0, 0, 1)
	ZEND_ARG_INFO(0, arrKey)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_kernel_precomputehashkey32, 0, 0, 1)
	ZEND_ARG_INFO(0, arrKey)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_kernel_precomputehashkey64, 0, 0, 1)
	ZEND_ARG_INFO(0, arrKey)
ZEND_END_ARG_INFO()

PHALCON_INIT_FUNCS(phalcon_kernel_method_entry){
	PHP_ME(Phalcon_Kernel, preComputeHashKey, arginfo_phalcon_kernel_precomputehashkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Kernel, preComputeHashKey32, arginfo_phalcon_kernel_precomputehashkey32, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Kernel, preComputeHashKey64, arginfo_phalcon_kernel_precomputehashkey64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_FE_END
};

