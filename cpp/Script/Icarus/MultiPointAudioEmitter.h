// /Script/Icarus.MultiPointAudioEmitter
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x2B0, declared in Icarus/Source/Icarus/Audio/MultiPoint/MultiPointAudioEmitter.h

UCLASS(Config=Engine)
class UMultiPointAudioEmitter : public USceneComponent
{
public:
    UPROPERTY(Instanced) UFMODAudioComponent* AudioComponent;  // 0x0280, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FMultiPointAudioNodeArray Nodes;  // 0x01F8, private
    EMultiPointAudioEmitterInitState InitState;  // 0x0288, private
    bool bUsingAutomaticPlayback;  // 0x0289, private
    int32 FrameCounter;  // 0x028C, private
    FVector TargetLocation;  // 0x0290, private
    float CurrentSpread;  // 0x029C, private
    float CurrentTotalNodeWeighting;  // 0x02A0, private
    bool bDebugActive;  // 0x02A4, private

    UFUNCTION(BlueprintCallable) void AddNode(UObject* NodeObject, bool bRemoveNodeOnZeroWeighting);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) UFMODAudioComponent* GetAudioComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTotalWeighting() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialize(UFMODEvent* Event, bool bUseAutomaticPlayback, float MinDistanceOverride, float MaxDistanceOverride, bool bNodesAreStatic);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void Play();
    UFUNCTION(BlueprintCallable) void RemoveNode(UObject* NodeObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetDebugActive(bool bActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetNodeDefaultWeighting(UObject* NodeObject, float Weighting);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Stop();
};
