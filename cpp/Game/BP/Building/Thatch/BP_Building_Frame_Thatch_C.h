// /Game/BP/Building/Thatch/BP_Building_Frame_Thatch.BP_Building_Frame_Thatch_C
// Derives from: ABP_Building_Frame_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xCF8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Frame_Thatch_C : public ABP_Building_Frame_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_WeatherAudioComponent_Roof_C* BP_WeatherAudioComponent_Roof;  // 0x0CF0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Building_Frame_Thatch(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
