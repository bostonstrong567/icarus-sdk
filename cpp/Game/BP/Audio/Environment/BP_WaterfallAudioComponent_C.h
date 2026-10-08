// /Game/BP/Audio/Environment/BP_WaterfallAudioComponent.BP_WaterfallAudioComponent_C
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x278, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_WaterfallAudioComponent_C : public USceneComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* TopAudioComponent;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* BottomAudioComponent;  // 0x0210, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* TopEvent;  // 0x0218, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* BottomEvent;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector WaterfallSize;  // 0x0228, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* TopEvent_Cave;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* BottomEvent_Cave;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* TopEvent_Lava;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* BottomEvent_Lava;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxPlayDistance;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TopLocation;  // 0x025C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector BottomLocation;  // 0x0268, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float UpdateFrequency;  // 0x0274, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_WaterfallAudioComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetBottomFMODEvent(UFMODEvent*& Event);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTopFMODEvent(UFMODEvent*& Event);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsInCave(bool& InCave);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsLava(bool& IsLava);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSizeParameters(UFMODAudioComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateAudio();
};
