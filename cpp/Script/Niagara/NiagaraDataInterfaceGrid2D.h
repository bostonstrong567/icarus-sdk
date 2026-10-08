// /Script/Niagara.NiagaraDataInterfaceGrid2D
// Derives from: UNiagaraDataInterfaceRWBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0xF8, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceRW.h

UCLASS(Abstract, EditInlineNew)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
    UPROPERTY(EditAnywhere) int32 NumCellsX;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere) int32 NumCellsY;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere) int32 NumCellsMaxAxis;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere) int32 NumAttributes;  // 0x00E4, size 0x4
    UPROPERTY(EditAnywhere) bool SetGridFromMaxAxis;  // 0x00E8, size 0x1
    UPROPERTY(EditAnywhere) FVector2D WorldBBoxSize;  // 0x00EC, size 0x8
};
