// /Script/Icarus.WeightComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xF0, declared in Icarus/Source/Icarus/Traits/WeightComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UWeightComponent : public UTraitComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UShapeComponent*> WeightSpreadingShapes;  // 0x00D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> AboveActors;  // 0x00E0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetWeight(UShapeComponent* Shape);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetWeightData(FWeightData& OutData) const;  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Init();
};
