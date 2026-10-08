// /Game/BP/Quests/Elysium/SideQuests/Trails/ELY_SQ_Trials_Race_Trail_End.ELY_SQ_Trials_Race_Trail_End_C
// Derives from: ABPQ_ELY_Story_1_Eden_Mo_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class AELY_SQ_Trials_Race_Trail_End_C : public ABPQ_ELY_Story_1_Eden_Mo_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04C8, size 0x8

    UFUNCTION() void ExecuteUbergraph_ELY_SQ_Trials_Race_Trail_End(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
