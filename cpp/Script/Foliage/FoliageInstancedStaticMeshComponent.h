// /Script/Foliage.FoliageInstancedStaticMeshComponent
// Derives from: UHierarchicalInstancedStaticMeshComponent > UInstancedStaticMeshComponent > UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x6B0, declared in Engine/Source/Runtime/Foliage/Public/FoliageInstancedStaticMeshComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FInstancePointDamageSignature OnInstanceTakePointDamage;  // 0x0678, size 0x10
    UPROPERTY(BlueprintAssignable) FInstanceRadialDamageSignature OnInstanceTakeRadialDamage;  // 0x0688, size 0x10
private:
    UPROPERTY() FGuid GenerationGuid;  // 0x0698, size 0x10
};
