// /Script/Icarus.RadiationManager
// Derives from: AIcarusActor > AActor > UObject
// size 0x2D0, declared in Icarus/Source/Icarus/Radiation/RadiationManager.h

UCLASS(Config=Engine)
class ARadiationManager : public AIcarusActor
{
public:
    UPROPERTY(Replicated, BlueprintReadOnly) TArray<FRadioactiveInstance> RadioactiveInstances;  // 0x02C0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetInstancesAffectingLocation(const FVector& WorldLocation, const FGameplayTagQuery& OptionalQuery, TArray<FRadioactiveInstance>& OutInstances) const;  // parameters 0x68
    UFUNCTION(BlueprintCallable) float GetRadiationAtLocation(FVector& Location);  // parameters 0x10
    UFUNCTION() float GetRadiationStrength(const FRadioactiveInstance& Instance, const FVector& Location) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable) void RegisterOrUpdateRadioactiveActor(AActor* Actor, float Distance);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void UnregisterRadioactiveActor(AActor* Actor);  // parameters 0x8
};
