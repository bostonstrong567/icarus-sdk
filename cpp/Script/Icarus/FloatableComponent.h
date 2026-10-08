// /Script/Icarus.FloatableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xE8, declared in Icarus/Source/Icarus/Traits/FloatableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UFloatableComponent : public UTraitComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UPrimitiveComponent*> OverlappedComponents;  // 0x00D0, size 0x10
    UPROPERTY(BlueprintAssignable) FFloatableUpdated OnFloatableUpdated;  // 0x00E0, size 0x1

    UFUNCTION(BlueprintCallable) void AddOverlap(UPrimitiveComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckOverlapArray();
    UFUNCTION(BlueprintCallable) void FloatableUpdated(bool bNewFloating);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetFloatableData(FFloatableData& OutData) const;  // parameters 0x59
    UFUNCTION(BlueprintCallable) TArray<FWaterSetupRowHandle> GetWaterSetupsFromOverlaps() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveOverlap(UPrimitiveComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void UpdateOverlappedState();

    // Virtual functions that start here:
    //   FloatableUpdated, UpdateOverlappedState_Implementation
};
