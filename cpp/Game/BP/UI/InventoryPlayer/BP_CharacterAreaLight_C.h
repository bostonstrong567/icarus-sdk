// /Game/BP/UI/InventoryPlayer/BP_CharacterAreaLight.BP_CharacterAreaLight_C
// Derives from: AActor > UObject
// size 0x28C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CharacterAreaLight_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USpotLightComponent*> LightList;  // 0x0238, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Intensity;  // 0x0248, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor Color;  // 0x024C, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FocalAngleOuter;  // 0x025C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FocalAngleInner;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AttenuationDistance;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LightWidth;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LightLength;  // 0x026C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) bool CastShadows;  // 0x0270, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LightSamplesSquared;  // 0x0274, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float SourceRadiusMult;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float CenterOfInterestLength;  // 0x027C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Enabled;  // 0x0280, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLightingChannels Channels;  // 0x0281, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SoftRadius;  // 0x0284, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ShadowBias;  // 0x0288, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_CharacterAreaLight(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LightArraySetup();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateLightValues();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
