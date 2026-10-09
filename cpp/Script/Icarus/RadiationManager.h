// /Script/Icarus.RadiationManager
// Derives from: AIcarusActor > AActor > UObject
// size 0x398, declared in Icarus/Source/Icarus/Radiation/RadiationManager.h

UCLASS(Config=Engine)
class ARadiationManager : public AIcarusActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Replicated, BlueprintReadOnly) TArray<FRadioactiveInstance> RadioactiveInstances;  // 0x02C0, size 0x10
    UPROPERTY(BlueprintReadOnly) TArray<ARadiationFxSphere*> RadiationFxSpheres;  // 0x02D0, size 0x10
protected:
    UPROPERTY(BlueprintReadOnly) FTimerHandle TimerHandle_ProcessRebuilds;  // 0x02E0, size 0x8
    float RebuildInterval;  // 0x02E8, not reflected
    double MoveThreshold;  // 0x02F0, not reflected
private:
    TMap<TWeakObjectPtr<ARadiationFxSphere const ,FWeakObjectPtr>,ARadiationManager::FSphereState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ARadiationFxSphere const ,FWeakObjectPtr>,ARadiationManager::FSphereState,0> > SphereStates;  // 0x02F8, not reflected
    TSet<TWeakObjectPtr<ARadiationFxSphere,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<ARadiationFxSphere,FWeakObjectPtr>,0>,FDefaultSetAllocator> DirtySpheres;  // 0x0348, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<ARadiationFxSphere*> GetCullingSpheres(ARadiationFxSphere* Sphere) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetInstancesAffectingLocation(const FVector& WorldLocation, const FGameplayTagQuery& OptionalQuery, TArray<FRadioactiveInstance>& OutInstances) const;  // parameters 0x68
    UFUNCTION(BlueprintCallable) float GetRadiationAtLocation(FVector& Location);  // parameters 0x10
    UFUNCTION() float GetRadiationStrength(const FRadioactiveInstance& Instance, const FVector& Location) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsPointInsideAnySphere(const FVector& WorldPoint, const TArray<ARadiationFxSphere*>& Spheres);  // parameters 0x21
    UFUNCTION(BlueprintCallable) void MarkSphereDirty(ARadiationFxSphere* Sphere);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RegisterOrUpdateRadioactiveActor(AActor* Actor, float Distance);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void UnregisterRadioactiveActor(AActor* Actor);  // parameters 0x8
};
