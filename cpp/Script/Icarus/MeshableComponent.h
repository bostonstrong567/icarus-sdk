// /Script/Icarus.MeshableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Traits/MeshableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UMeshableComponent : public UTraitComponent
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetMeshableData(FMeshableData& OutData) const;  // parameters 0x1D1
};
