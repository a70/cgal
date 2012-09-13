
/*!
\ingroup PkgArrangement2ConceptsFunctionObjects
\cgalconcept

\refines AdaptableBinaryFunction 

\hasModel ArrangementBasicTraits_2::Equal_2 

*/

class ArrTraits::Equal_2 {
public:

/// \name Has Models 
/// @{

/*! 
determines whether `p1` and `p2` are geometrically 
equivalent. 
*/ 
bool operator()(ArrTraits::Point_2 p1, ArrTraits::Point_2 p2); 

/*! 
determines whether `xc1` and `xc2` are 
geometrically equivalent (have the same graph). 
*/ 
bool operator()(ArrTraits::X_monotone_curve_2 xc1, 
ArrTraits::X_monotone_curve_2 xc2); 

/// @}

}; /* end ArrTraits::Equal_2 */

