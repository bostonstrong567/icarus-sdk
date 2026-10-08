// /Game/BP/World/Effects/BP_IcarusPointLight.BP_IcarusPointLight_C
// Derives from: UPointLightComponent > ULocalLightComponent > ULightComponent > ULightComponentBase > USceneComponent > UActorComponent > UObject
// size 0x369, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_IcarusPointLight_C : public UPointLightComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InitWithShadows;  // 0x0368, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_IcarusPointLight(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitLightSettings();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ShadowSettingUpdated(bool Value);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateShadowSetting(bool bNewValue);  // parameters 0x1
};
