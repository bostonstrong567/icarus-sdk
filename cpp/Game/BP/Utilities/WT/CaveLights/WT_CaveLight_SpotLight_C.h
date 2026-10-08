// /Game/BP/Utilities/WT/CaveLights/WT_CaveLight_SpotLight.WT_CaveLight_SpotLight_C
// Derives from: AWT_CaveLightBase_C > AActor > UObject
// size 0x268, a blueprint class, blueprint

UCLASS(Config=Engine)
class AWT_CaveLight_SpotLight_C : public AWT_CaveLightBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpotLightComponent* SpotLight;  // 0x0258, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) ULightComponent* Light;  // 0x0260, size 0x8

    UFUNCTION() void ExecuteUbergraph_WT_CaveLight_SpotLight(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Post(float& SunIntensity, FRotator& SunDirection, FLinearColor& SunColor);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
