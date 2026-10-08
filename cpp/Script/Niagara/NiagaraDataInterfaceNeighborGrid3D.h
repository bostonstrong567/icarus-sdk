// /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
// Derives from: UNiagaraDataInterfaceGrid3D > UNiagaraDataInterfaceRWBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x108, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceNeighborGrid3D.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
    UPROPERTY(EditAnywhere) uint32 MaxNeighborsPerCell;  // 0x0100, size 0x4
};
