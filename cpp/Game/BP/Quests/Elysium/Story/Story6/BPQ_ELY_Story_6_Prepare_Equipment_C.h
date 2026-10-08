// /Game/BP/Quests/Elysium/Story/Story6/BPQ_ELY_Story_6_Prepare_Equipment.BPQ_ELY_Story_6_Prepare_Equipment_C
// Derives from: ABPQ_Collect_Note_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_6_Prepare_Equipment_C : public ABPQ_Collect_Note_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle Item;  // 0x0498, size 0x18

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_6_Prepare_Equipment(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
