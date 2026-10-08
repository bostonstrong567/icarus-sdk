// /Game/BP/Audio/Environment/BP_FireAudio.BP_FireAudio_C
// Derives from: AActor > UObject
// size 0x241, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FireAudio_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContext;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UMultiPointAudioEmitter* MultiPointAudioEmitter;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool Debug;  // 0x0240, size 0x1

    UFUNCTION(BlueprintCallable) void AddFlammableInstance(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddNode(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void DelayedDestroy();
    UFUNCTION() void ExecuteUbergraph_BP_FireAudio(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnFireInstanceDestroyed();
    UFUNCTION(BlueprintCallable) void OnFlammableExtinguished(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnFlammableTransferredAway(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RemoveNode(UFlammableInstance* Instance);  // parameters 0x8
};
