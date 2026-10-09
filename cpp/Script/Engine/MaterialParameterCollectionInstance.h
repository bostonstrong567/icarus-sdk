// /Script/Engine.MaterialParameterCollectionInstance
// Derives from: UObject
// size 0x120, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h

UCLASS()
class UMaterialParameterCollectionInstance : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    bool bLoggedMissingParameterWarning;  // 0x0028, not reflected
protected:
    UPROPERTY() UMaterialParameterCollection* Collection;  // 0x0030, size 0x8
    TWeakObjectPtr<UWorld,FWeakObjectPtr> World;  // 0x0038, not reflected
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0> > ScalarParameterValues;  // 0x0040, not reflected
    TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0> > VectorParameterValues;  // 0x0090, not reflected
    FMaterialParameterCollectionInstanceResource * Resource;  // 0x00E0, not reflected
    TMulticastDelegate<void __cdecl(TTuple<FName,float>),FDefaultDelegateUserPolicy> ScalarParameterUpdatedDelegate;  // 0x00E8, not reflected
    TMulticastDelegate<void __cdecl(TTuple<FName,FLinearColor>),FDefaultDelegateUserPolicy> VectorParameterUpdatedDelegate;  // 0x0100, not reflected
    bool bNeedsRenderStateUpdate;  // 0x0118, not reflected
};
