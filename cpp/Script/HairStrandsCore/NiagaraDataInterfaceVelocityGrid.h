// /Script/HairStrandsCore.NiagaraDataInterfaceVelocityGrid
// Derives from: UNiagaraDataInterfaceRWBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0xE8, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/Niagara/NiagaraDataInterfaceVelocityGrid.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{
public:
    UPROPERTY(EditAnywhere) FIntVector GridSize;  // 0x00D8, size 0xC

    // Not reflected: the engine's scripting cannot see these.
    int32 NumAttributes;  // 0x00E4
};
