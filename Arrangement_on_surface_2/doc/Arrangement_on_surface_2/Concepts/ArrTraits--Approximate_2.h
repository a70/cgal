
/*!
\ingroup PkgArrangement2ConceptsFunctionObjects
\cgalconcept

\refines Functor 

\hasModel ArrangementLandmarkTraits_2::Approximate_2 

*/

class ArrTraits::Approximate_2 {
public:

/// \name Has Models 
/// @{

/*! 
returns an approximation of `p`'s \f$ x\f$-coordinate (if `i == 0`), 
or of `p`'s \f$ y\f$-coordinate (if `i == 1`). 
*/ 
Approximate_number_type operator()( ArrTraits::Point_2 p, 
int i); 

/// @}

}; /* end ArrTraits::Approximate_2 */

