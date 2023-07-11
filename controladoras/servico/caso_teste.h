#include "../../interfaces.h"
#include "../../bibliotecas/dominios.h"
#include "../../bibliotecas/entidades.h"
#include <list>

using namespace std;

class ServicoCasoTeste: public InterfaceServicoCasoTeste {
    public:
        bool deletar_caso_teste(Codigo) override;
        bool criar_caso_teste(CasoTeste) override;
        bool atualizar_caso_teste(CasoTeste) override;
        CasoTeste retornar_caso_teste(Codigo) override;
        list<CasoTeste> listar_casos_teste(Codigo);
};

    