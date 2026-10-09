// /Script/Icarus.VocalisationComponent
// Derives from: UActorComponent > UObject
// size 0x110, declared in Icarus/Source/Icarus/Audio/VocalisationComponent.h

UCLASS(Config=Engine)
class UVocalisationComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Instanced) UFMODAudioComponent* AudioComponent;  // 0x00B0, size 0x8
    FVocalisationsRowHandle CurrentVocalisation;  // 0x00B8, not reflected
    FVocalisationsRowHandle CurrentPersistentVocalisation;  // 0x00D0, not reflected
    TQueue<UVocalisationComponent::FVocalisationQueueItem,1> Queue;  // 0x00F0, not reflected
    bool bInitialised;  // 0x0100, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentVocalisationLength() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) static float GetVocalisationLength(FVocalisationsRowHandle Vocalisation);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void Initialise(USceneComponent* TargetComponent, FName TargetSocket);  // parameters 0x10
    UFUNCTION() void OnEventStopped();
    UFUNCTION(BlueprintCallable) EVocalisationPlayResult TryPlayVocalisation(FVocalisationsRowHandle Vocalisation);  // parameters 0x19

    // Virtual functions that start here:
    //   Initialise
};
