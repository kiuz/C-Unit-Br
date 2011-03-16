/*
 ============================================================================
 Name        : massimo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "CUnit/basic.h"

int massimo(int a, int b);
void test_massimo();

/**
 * Funzioni di inizializzazione e pulizia delle suite.
 * Di default sono funzioni vuote.
 */
int suite_void_init(void) {
	return 0;
}

int suite_void_cleanup(void) {
	return 0;
}

int main(void) {
	CU_ErrorCode error;

	//TEST ARRAY
	/* Test Arrays - NOTA � L�ORDINE E� IMPORTANTE */
	CU_TestInfo test_array_max[] = { { "test di massimo()", test_massimo },
			CU_TEST_INFO_NULL, };

	// crea le suite e vi aggiunge i casi di test
	CU_SuiteInfo suites[] = {
			{ "test suite per le funzioni matematiche di base", suite_void_init,
			suite_void_cleanup, test_array_max }, CU_SUITE_INFO_NULL, };

	// dichiarazioni dei test array qui
	/* inizializza registro � e� la prima istruzione */
	if (CUE_SUCCESS != CU_initialize_registry()) {
		error = CU_get_error();
		system("PAUSE");
		return -1;
	}

	// registra le suite nel registro
	error = CU_register_suites(suites);

	// verifica la presenza di errori nella registrazione
	if (CUE_SUCCESS != error) {
		CU_cleanup_registry(); // <- il registro va ripulito anche dopo errore CU_get_error(); system("PAUSE"); return -1;
	}

	/* modo �verboso� mostra a video tutte le informazioni */
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();



	return EXIT_SUCCESS;
}

int massimo(int a, int b) {
	int max = 0;
	if (a > b) {
		max = a;
	} else {
		max = b;
	}
	return max;
}



//test per massimo()

void test_massimo(void) {

	CU_ASSERT_EQUAL(massimo(1, 2), 4);
	CU_ASSERT(massimo(0, -2) == 0);
	CU_TEST(massimo(2, 2) == 2);

	//CU_ASSERT_FALSE(massimo(5, 6) == 2);
	//CU_ASSERT_FALSE(massimo(5, 6) == 2);
	//CU_ASSERT_TRUE(massimo(-100, -1) == 1);
}
