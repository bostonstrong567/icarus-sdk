// /Script/Niagara.NiagaraDataInterfaceLandscape
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x58, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceLandscape.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) AActor* SourceLandscape;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) ENDILandscape_SourceMode SourceMode;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere) TArray<UPhysicalMaterial*> PhysicalMaterials;  // 0x0048, size 0x10
};
