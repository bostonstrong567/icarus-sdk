// /Game/BP/Quests/Olympus/Omni/Recovery/BPQ_OLY_Omni_Recovery_Track.BPQ_OLY_Omni_Recovery_Track_C
// Derives from: ABPQ_Search_Area_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Omni_Recovery_Track_C : public ABPQ_Search_Area_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04C8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Omni_Recovery_Track(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
