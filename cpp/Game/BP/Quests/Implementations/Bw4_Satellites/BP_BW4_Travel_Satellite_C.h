// /Game/BP/Quests/Implementations/Bw4_Satellites/BP_BW4_Travel_Satellite.BP_BW4_Travel_Satellite_C
// Derives from: ABP_Quest_TravelLarge_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW4_Travel_Satellite_C : public ABP_Quest_TravelLarge_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_BW4_Travel_Satellite(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TriggerReachedDialogue();
};
