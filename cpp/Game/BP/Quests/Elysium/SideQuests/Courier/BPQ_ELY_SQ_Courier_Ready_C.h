// /Game/BP/Quests/Elysium/SideQuests/Courier/BPQ_ELY_SQ_Courier_Ready.BPQ_ELY_SQ_Courier_Ready_C
// Derives from: ABPQ_ELY_Setup_C > AQuest > AIcarusActor > AActor > UObject
// size 0x47B, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Courier_Ready_C : public ABPQ_ELY_Setup_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0479, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool C;  // 0x047A, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Courier_Ready(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
