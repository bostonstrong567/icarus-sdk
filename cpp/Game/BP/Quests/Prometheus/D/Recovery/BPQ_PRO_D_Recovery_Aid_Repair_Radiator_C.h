// /Game/BP/Quests/Prometheus/D/Recovery/BPQ_PRO_D_Recovery_Aid_Repair_Radiator.BPQ_PRO_D_Recovery_Aid_Repair_Radiator_C
// Derives from: ABPQ_Common_Deliver_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_D_Recovery_Aid_Repair_Radiator_C : public ABPQ_Common_Deliver_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_D_Recovery_Aid_Repair_Radiator(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
