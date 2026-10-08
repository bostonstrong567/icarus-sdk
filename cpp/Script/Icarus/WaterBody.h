// /Script/Icarus.WaterBody
// Derives from: AIcarusActor > AActor > UObject
// size 0x338, declared in Icarus/Source/Icarus/World/WaterBody.h

UCLASS(Config=Engine)
class AWaterBody : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWaterSetupRowHandle WaterSetup;  // 0x02C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxFish;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UFloatableComponent*> OverlappedFloatables;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<AActor*> OverlappedBuildings;  // 0x02F0, size 0x10
    UPROPERTY(BlueprintReadOnly) bool bWaterBodyIsLava;  // 0x0300, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FModifierStatesRowHandle ModifierBurnImmediatelyRow;  // 0x0304, private
    FModifierStatesRowHandle ModifierBurnSlowlyRow;  // 0x031C, private

    UFUNCTION(BlueprintCallable) void AddFloatableOverlap(UFloatableComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) TArray<UPrimitiveComponent*> GetNavAffectingComponents() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveFloatableOverlap(UFloatableComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TryBurnOnBeginOverlap(AActor* Actor, UActorComponent* Component);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void TryStopBurnOnEndOverlap(AActor* Actor, UActorComponent* Component);  // parameters 0x10
};
