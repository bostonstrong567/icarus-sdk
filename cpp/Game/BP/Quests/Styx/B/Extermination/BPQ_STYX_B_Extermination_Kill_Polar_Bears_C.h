// /Game/BP/Quests/Styx/B/Extermination/BPQ_STYX_B_Extermination_Kill_Polar_Bears.BPQ_STYX_B_Extermination_Kill_Polar_Bears_C
// Derives from: ABPQ_Common_Clear_Area_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_B_Extermination_Kill_Polar_Bears_C : public ABPQ_Common_Clear_Area_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_B_Extermination_Kill_Polar_Bears(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
