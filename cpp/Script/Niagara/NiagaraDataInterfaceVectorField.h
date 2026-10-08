// /Script/Niagara.NiagaraDataInterfaceVectorField
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x48, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceVectorField.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) UVectorField* Field;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) bool bTileX;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere) bool bTileY;  // 0x0041, size 0x1
    UPROPERTY(EditAnywhere) bool bTileZ;  // 0x0042, size 0x1
};
