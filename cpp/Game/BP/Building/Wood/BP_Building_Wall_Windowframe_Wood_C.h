// /Game/BP/Building/Wood/BP_Building_Wall_Windowframe_Wood.BP_Building_Wall_Windowframe_Wood_C
// Derives from: ABP_Building_Wall_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC70, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Wall_Windowframe_Wood_C : public ABP_Building_Wall_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0C60, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_WeatherAudioComponent_Window_C* BP_WeatherAudioComponent_Window;  // 0x0C68, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Building_Wall_Windowframe_Wood(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
