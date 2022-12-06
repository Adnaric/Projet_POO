#pragma once
#include "CLmapTB.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapPersonnel^ oMappPersonnel;
		NS_Comp_Mappage::CLmapClient^ oMappClient;
		NS_Comp_Mappage::CLmapArticle^ oMappArticle;
		NS_Comp_Mappage::CLmapCommande^ oMappCommande;
	public:
		CLservices(void);
		System::Data::DataSet^ selection_tout_personnel(System::String^);
		System::Data::DataSet^ selection_tout_client(System::String^);
		System::Data::DataSet^ selection_tout_article(System::String^);
		System::Data::DataSet^ selection_tout_commande(System::String^);
		void ajouter_personnel(System::String^, System::String^, int, System::String^, int, System::String^, System::String^, int);
		void ajouter_client(System::String^, System::String^, System::String^, int, System::String^, System::String^, int, int, System::String^, System::String^, int);
		void ajouter_article(float, System::String^, System::String^, int);
		void ajouter_commande(int, System::String^, System::String^, System::String^, int, System::String^, int);
		void supprimer_personnel(int id_perso);
	};
}
