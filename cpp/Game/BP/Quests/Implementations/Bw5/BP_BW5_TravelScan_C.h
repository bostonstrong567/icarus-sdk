// /Game/BP/Quests/Implementations/Bw5/BP_BW5_TravelScan.BP_BW5_TravelScan_C
// Derives from: ABP_BW5_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x489, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW5_TravelScan_C : public ABP_BW5_Travel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Complete_0;  // 0x0488, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_BW5_TravelScan(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
