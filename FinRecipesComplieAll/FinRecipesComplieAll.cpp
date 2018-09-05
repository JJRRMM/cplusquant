// FinRecipesComplieAll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "fin_recipes.h"
// Present Value
//
//#include "examples_present_value.cc"
//#include "cflow_pv_discrete.cc"
//#include "cflow_irr.cc"
//#include "cflow_irr_discrete.cc"
//
// *** Error with cplus program cflow_pv.cc below: C2370 - ERROR: redefinition different storage class <-- const ERROR statement.
//#include "cflow_pv.cc"

//#include "examples_bond_pricing_flat_term_structure.cc"
#include "examples_term_structure.cc"
// Term structure transformation includes: Chapter 5
//
#include "termstru_transforms.cc"
#include "termstru_yield_interpolated.cc"
#include "term_structure_class.cc"
#include "term_structure_class_flat.cc"
#include "term_structure_class_interpolated.cc"
#include "bonds_price_termstru.cc"
#include "bonds_duration_termstru.cc"
#include "bonds_convexity_termstru.cc"
// Futures Price - pg. 
//
#include "examples_forwards_futures.cc"
#include "futures_price.cc"
#include "examples_binomial.cc"
// Binmomail Chapter 8 
//
#include "bin_eur_call_ud_one.cc"
#include "bin_eur_call_ud.cc"
//#include "examples_black_scholes.cc"
//#include "examples_black_scholes_extensions.cc"
//#include "examples_binomial_approximations.cc"
//#include "examples_warrants.cc"
//#include "examples_simulation.cc"
//#include "examples_finite_differences.cc"
//#include "examples_approximations.cc"
//#include "examples_alternative_formulas.cc"
//#include "examples_average_and_lookback_options.cc"
//#include "examples_generic_binomial.cc"
//#include "examples_trinomial.cc"
//#include "examples_bond_options.cc"
//#include "examples_credit_risk.cc"
//#include "examples_term_structure_model.cc"
//#include "examples_binomial_term_structure_models.cc"
//#include "examples_interest_rate_trees_gbm.cc"
//#include "examples_interest_rate_trees_ho_lee.cc"
//#include "examples_term_structure_derivatives.cc"
//#include "examples_normal_distribution.cc"

#ifdef _HAVE_NEWMAT_
#include "fin_recipes_newmat.h"
#include "examples_mean_variance_cxx_newmat.cc"
#include "examples_implicit_finite_diff_using_newmat.cc"
#endif 
#ifdef _HAVE_ITPP_
#include "fin_recipes_itpp.h"
#include "examples_mean_variance_cxx_itpp.cc"
#include "examples_implicit_finite_diff_using_itpp.cc"
#endif 

#ifdef _HAVE_GSL_
#include "fin_recipes_gsl.h"
#endif



int main() {
	 // present_value_examples();
	//bond_pricing_flat_term_structure_examples();
	term_structure_examples();
	forwards_futures_examples();
	binomial_examples();
	//black_scholes_examples();
	//black_scholes_extensions_examples();
	//binomial_approximations_examples();
	//warrant_examples();
	//simulation_examples();
	//finite_differences_examples();
	//approximations_examples();
	//alternative_formulas_examples();
	//average_and_lookback_options_examples();
	//examples_generic_binomial();
	//examples_trinomial_trees();
	//bond_options_examples();
	//credit_risk_examples();
	//term_structure_model_examples();
	//binomial_term_structure_models_examples();
	//examples_interest_rate_trees_gbm();
	//examples_interest_rate_trees_ho_lee();
	//term_structure_derivatives_examples();
	//normal_distribution_examples();
	cout << "\n Chapter 5, 6 ,7 and 8 - Term structures ... Finrecipes - Enter a Number Hit Enter \n";
	int tt;
	cin >> tt; 
#ifdef _HAVE_NEWMAT_
	examples_mean_variance_newmat();
	examples_finite_diffs_using_newmat();
#endif
#ifdef _HAVE_ITPP_
	examples_mean_variance_itpp();
	examples_finite_diffs_using_itpp();
#endif
};

