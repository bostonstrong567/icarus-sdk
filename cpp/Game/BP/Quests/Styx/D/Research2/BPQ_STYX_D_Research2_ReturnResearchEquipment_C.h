// /Game/BP/Quests/Styx/D/Research2/BPQ_STYX_D_Research2_ReturnResearchEquipment.BPQ_STYX_D_Research2_ReturnResearchEquipment_C
// Derives from: ABPQ_Common_Deliver_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_D_Research2_ReturnResearchEquipment_C : public ABPQ_Common_Deliver_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Spawned;  // 0x04C0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_D_Research2_ReturnResearchEquipment(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
