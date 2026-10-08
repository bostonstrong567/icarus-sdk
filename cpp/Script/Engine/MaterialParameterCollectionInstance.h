// /Script/Engine.MaterialParameterCollectionInstance
// Derives from: UObject
// size 0x120, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h

UCLASS()
class UMaterialParameterCollectionInstance : public UObject
{
public:
    UPROPERTY() UMaterialParameterCollection* Collection;  // 0x0030, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    bool bLoggedMissingParameterWarning;  // 0x0028
    TWeakObjectPtr<UWorld,FWeakObjectPtr> World;  // 0x0038, protected
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0> > ScalarParameterValues;  // 0x0040, protected
    TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0> > VectorParameterValues;  // 0x0090, protected
    FMaterialParameterCollectionInstanceResource * Resource;  // 0x00E0, protected
    TMulticastDelegate<void __cdecl(TTuple<FName,float>),FDefaultDelegateUserPolicy> ScalarParameterUpdatedDelegate;  // 0x00E8, protected
    TMulticastDelegate<void __cdecl(TTuple<FName,FLinearColor>),FDefaultDelegateUserPolicy> VectorParameterUpdatedDelegate;  // 0x0100, protected
    bool bNeedsRenderStateUpdate;  // 0x0118, protected
};
