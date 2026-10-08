// /Game/BP/Quests/Olympus/Riverlands/Extraction/BPQ_OLY_Riverlands_Extraction_Deliver.BPQ_OLY_Riverlands_Extraction_Deliver_C
// Derives from: ABPQ_Common_Deliver_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Extraction_Deliver_C : public ABPQ_Common_Deliver_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Riverlands_Extraction_Deliver(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
