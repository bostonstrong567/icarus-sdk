// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_C2/BPQ_GH_RG_C2_Observe_Scout_Copper_Deposit.BPQ_GH_RG_C2_Observe_Scout_Copper_Deposit_C
// Derives from: ABPQ_Common_Deliver_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_C2_Observe_Scout_Copper_Deposit_C : public ABPQ_Common_Deliver_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RespawnDen;  // 0x04C0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_C2_Observe_Scout_Copper_Deposit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
