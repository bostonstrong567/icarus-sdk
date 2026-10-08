// /Game/BP/Utilities/WT/CaveLights/CaveLightsAssets/BP_CaveLightController.BP_CaveLightController_C
// Derives from: UActorComponent > UObject
// size 0x138, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_CaveLightController_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IntensityAdvanced;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float IntensityOverride;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ColorAdvanced;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ColorOverride;  // 0x00C4, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DirectionAdvanced;  // 0x00D4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator DirectionOverride;  // 0x00D8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_AtmosphereController_C* AtmosphereController;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentIntensity;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator CurrentSunDirection;  // 0x00F4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor CurrentColour;  // 0x0100, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Time;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartHour;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StartMinute;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FLightDetails LightDetails;  // 0x0120, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EntranceFade;  // 0x0130, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Entrance;  // 0x0134, size 0x4

    UFUNCTION(BlueprintCallable) void AtmosphereControllerInput(FRotator& SunDirection, float& Intensity, FLinearColor& Color, float& Entrance);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void EventSetup();
    UFUNCTION() void ExecuteUbergraph_BP_CaveLightController(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) ABP_AtmosphereController_C* GetAtmosphereController();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LightDetails__DelegateSignature(float Intensity_Out, FLinearColor Color_Out, FRotator Sun_Direction_Out);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SunLightColor(FLinearColor Color, float Intensity, float CaveCover);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SunLightDirection(FRotator SunDirection);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void WeatherManTick();
};
