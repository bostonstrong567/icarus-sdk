// /Script/HairStrandsCore.NiagaraDataInterfaceHairStrands
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x50, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/Niagara/NiagaraDataInterfaceHairStrands.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) UGroomAsset* DefaultSource;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) AActor* SourceActor;  // 0x0040, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UGroomComponent,FWeakObjectPtr> SourceComponent;  // 0x0048
};
