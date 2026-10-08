// /Game/BP/Utilities/WT/CaveLights/CaveLightsAssets/WT_CaveLightBase.WT_CaveLightBase_C
// Derives from: AActor > UObject
// size 0x244, a blueprint class, blueprint

UCLASS(Config=Engine)
class AWT_CaveLightBase_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, Transient, Instanced, BlueprintReadWrite) UBP_CaveLightController_C* CaveLightSetup;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Track_Sun;  // 0x0238, size 0x1, named "Track Sun"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SunlightPercentage;  // 0x023C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Light_Tint;  // 0x0240, size 0x4, named "Light Tint"

    UFUNCTION() void ExecuteUbergraph_WT_CaveLightBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LightDetails_Event_0(float Intensity_Out, FLinearColor Color_Out, FRotator Sun_Direction_Out);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void Post(float& SunIntensity, FRotator& SunDirection, FLinearColor& SunColor);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void WeatherManTick();
};
