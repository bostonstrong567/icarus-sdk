// /Script/Icarus.AudioContextComponent
// Derives from: UActorComponent > UObject
// size 0x160, declared in Icarus/Source/Icarus/Audio/AudioContextComponent.h

UCLASS(Config=Engine)
class UAudioContextComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxUpdateDistance;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OcclusionShelterContextThreshold;  // 0x00B4, size 0x4
    UPROPERTY(BlueprintAssignable) FAudioContextEnteredCave OnEnteredCave;  // 0x00B8, size 0x10
    UPROPERTY(BlueprintAssignable) FAudioContextExitedCave OnExitedCave;  // 0x00C8, size 0x10
protected:
    bool bIsLocalPlayer;  // 0x00D8, not reflected
    UPROPERTY(Replicated) EAudioShelterState ShelterState;  // 0x00D9, size 0x1
private:
    float DistSquaredToListener;  // 0x00DC, not reflected
    FVector ListenerLocation;  // 0x00E0, not reflected
    UPROPERTY(Instanced) UAudioOcclusionComponent* OcclusionComponent;  // 0x00F0, size 0x8
    UPROPERTY() TArray<FAudioContextSubscriber> Subscribers;  // 0x00F8, size 0x10
    UPROPERTY() TMap<AActor*, FAudioContextCaveColliderSet> CaveOverlaps;  // 0x0108, size 0x50
    bool bStaticCaveOverlapWasSet;  // 0x0158, not reflected
public:
    UFUNCTION(BlueprintCallable) void AddCaveOverlap(AActor* Cave, UPrimitiveComponent* Collider);  // parameters 0x10
    UFUNCTION(BlueprintCallable) ECaveContextFMODParam GetCaveContextFMODParam();  // parameters 0x1
    UFUNCTION(BlueprintCallable) float GetCurrentOcclusion(FName TracePointName) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) float GetCurrentWaterImmersion();  // parameters 0x4
    UFUNCTION(BlueprintCallable) float GetListenerCaveSpaceCorrelation();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) EOcclusionShelterContextFMODParam GetOcclusionShelterContextFMODParam(float OcclusionValue) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) EAudioShelterState GetShelterState() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RemoveCaveOverlap(AActor* Cave, UPrimitiveComponent* Collider);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetCaveOverlapOnceByLocation(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SubscribeAudioComponentToUpdates(UFMODAudioComponent* AudioComponent, bool bUsesOcclusionParameter, FName OcclusionTraceName, bool bUsesWaterImmersionParameter);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void UnsubscribeAudioComponentFromUpdates(UFMODAudioComponent* AudioComponent);  // parameters 0x8

    // Virtual functions that start here:
    //   GetCaveContextMode, GetCurrentWaterImmersion, GetShelterState
};
