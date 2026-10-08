// /Game/BP/Quests/Implementations/Bw5/BP_BW5_TravelDesert.BP_BW5_TravelDesert_C
// Derives from: ABP_BW5_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW5_TravelDesert_C : public ABP_BW5_Travel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_BW5_TravelDesert(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
