// /Game/BP/Building/Dirt/BP_Building_Ramp_Dirt.BP_Building_Ramp_Dirt_C
// Derives from: ABP_Building_Ramp_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC78, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Ramp_Dirt_C : public ABP_Building_Ramp_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0C68, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_WeatherAudioComponent_Roof_C* BP_WeatherAudioComponent_Roof;  // 0x0C70, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void BuildingStabilityColorCalc(FLinearColor& StabilityColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Calculate_Stability_State_Implementation();  // named "Calculate Stability State Implementation"
    UFUNCTION() void ExecuteUbergraph_BP_Building_Ramp_Dirt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
