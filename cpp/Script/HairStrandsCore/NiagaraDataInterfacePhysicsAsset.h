// /Script/HairStrandsCore.NiagaraDataInterfacePhysicsAsset
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x68, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/Niagara/NiagaraDataInterfacePhysicsAsset.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) UPhysicsAsset* DefaultSource;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) AActor* SourceActor;  // 0x0040, size 0x8
    TArray<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32> > SourceComponents;  // 0x0048, not reflected
    TArray<TWeakObjectPtr<UPhysicsAsset,FWeakObjectPtr>,TSizedDefaultAllocator<32> > PhysicsAssets;  // 0x0058, not reflected
};
