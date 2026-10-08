// /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
// Derives from: AMagicLeapARPinInfoActorBase > AActor > UObject
// size 0x2C4, a blueprint class, blueprint

UCLASS(Config=Engine)
class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Right;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Forward;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Up;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* ValidRadiusVisualizer;  // 0x0258, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* AxisRoot;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* VisualizerRoot;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* TypeValue;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* TransErrValue;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* RotErrValue;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* ConfidenceValue;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* TransErrLabel;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* RotErrLabel;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* ConfidenceLabel;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* PinIDValue;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* InfoRoot;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Root;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationSmoothSpeed;  // 0x02C0, size 0x4

    UFUNCTION() void ExecuteUbergraph_MagicLeapARPinInfoActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnUpdateARPinState();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdatePinState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
