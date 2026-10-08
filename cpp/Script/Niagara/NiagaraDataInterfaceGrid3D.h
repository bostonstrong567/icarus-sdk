// /Script/Niagara.NiagaraDataInterfaceGrid3D
// Derives from: UNiagaraDataInterfaceRWBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x100, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceRW.h

UCLASS(Abstract, EditInlineNew)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
    UPROPERTY(EditAnywhere) FIntVector NumCells;  // 0x00D8, size 0xC
    UPROPERTY(EditAnywhere) float CellSize;  // 0x00E4, size 0x4
    UPROPERTY(EditAnywhere) int32 NumCellsMaxAxis;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere) ESetResolutionMethod SetResolutionMethod;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere) FVector WorldBBoxSize;  // 0x00F0, size 0xC
};
