// /Game/BP/World/Effects/BP_IcarusSpotLight.BP_IcarusSpotLight_C
// Derives from: USpotLightComponent > UPointLightComponent > ULocalLightComponent > ULightComponent > ULightComponentBase > USceneComponent > UActorComponent > UObject
// size 0x369, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_IcarusSpotLight_C : public USpotLightComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InitWithShadows;  // 0x0368, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_IcarusSpotLight(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitLightSettings();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ShadowSettingUpdated(bool Value);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateShadowSetting(bool bNewValue);  // parameters 0x1
};
