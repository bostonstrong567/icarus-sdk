// /Script/Icarus.VocalisationComponent
// Derives from: UActorComponent > UObject
// size 0x110, declared in Icarus/Source/Icarus/Audio/VocalisationComponent.h

UCLASS(Config=Engine)
class UVocalisationComponent : public UActorComponent
{
public:
    UPROPERTY(Instanced) UFMODAudioComponent* AudioComponent;  // 0x00B0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FVocalisationsRowHandle CurrentVocalisation;  // 0x00B8, protected
    FVocalisationsRowHandle CurrentPersistentVocalisation;  // 0x00D0, protected
    TQueue<UVocalisationComponent::FVocalisationQueueItem,1> Queue;  // 0x00F0, protected
    bool bInitialised;  // 0x0100, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentVocalisationLength() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) static float GetVocalisationLength(FVocalisationsRowHandle Vocalisation);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void Initialise(USceneComponent* TargetComponent, FName TargetSocket);  // parameters 0x10
    UFUNCTION() void OnEventStopped();
    UFUNCTION(BlueprintCallable) EVocalisationPlayResult TryPlayVocalisation(FVocalisationsRowHandle Vocalisation);  // parameters 0x19

    // Virtual functions that start here:
    //   Initialise
};
