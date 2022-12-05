#include "CLservices.h"
#include "CLcad.h"
#include "CLmapTB.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapPersonnel();
}

