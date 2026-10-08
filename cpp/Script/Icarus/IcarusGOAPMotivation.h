// /Script/Icarus.IcarusGOAPMotivation
// Derives from: UObject
// size 0x60, declared in Icarus/Source/Icarus/AI/IcarusGOAPMotivation.h

UCLASS()
class UIcarusGOAPMotivation : public UObject
{
public:
    UPROPERTY(BlueprintReadOnly) FGOAPMotivationsRowHandle CachedRowHandle;  // 0x0028, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentValue;  // 0x0040, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TArray<bool,TSizedDefaultAllocator<32> > ActiveTriggers;  // 0x0048, private
    float CurrentTimer;  // 0x0058, private

    UFUNCTION(BlueprintCallable, BlueprintPure) FGOAPMotivation GetMotivationData() const;  // parameters 0x70
    UFUNCTION(BlueprintImplementableEvent) void OnMotivationTriggerEvent(AIcarusNPCGOAPController* Controller, const FGOAPMotivationTrigger& TriggeredEvent, bool bWasTriggered);  // parameters 0x71
    UFUNCTION(BlueprintCallable, BlueprintPure) bool SetMotivation(int32 NewValue);  // parameters 0x5
    UFUNCTION(BlueprintCallable) bool Update(float Delta, AIcarusNPCGOAPController* Controller);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool UpdateCost(float Delta, AIcarusNPCGOAPController* Controller);  // parameters 0x11

    // Virtual functions that start here:
    //   UpdateCost_Implementation
};
