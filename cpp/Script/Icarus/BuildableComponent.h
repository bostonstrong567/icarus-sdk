// /Script/Icarus.BuildableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xE0, declared in Icarus/Source/Icarus/Traits/BuildableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UBuildableComponent : public UTraitComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AIcarusActor> ClassToBuild;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 Variation;  // 0x00D8, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetBuildableData(FBuildableData& OutData) const;  // parameters 0xB9
    UFUNCTION(BlueprintCallable) void SetVariation(int32 NewVariation);  // parameters 0x4
};
