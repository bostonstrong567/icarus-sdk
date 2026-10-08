// /Game/BP/Building/Stone/BP_Building_Floor_Stone.BP_Building_Floor_Stone_C
// Derives from: ABP_Building_Floor_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC78, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Floor_Stone_C : public ABP_Building_Floor_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0C68, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_WeatherAudioComponent_Roof_C* BP_WeatherAudioComponent_Roof;  // 0x0C70, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Building_Floor_Stone(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
