// /Game/BP/Quests/Dynamic/Hunt/BPQ_DYN_Hunt.BPQ_DYN_Hunt_C
// Derives from: ABPQ_DYN_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_DYN_Hunt_C : public ABPQ_DYN_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0488, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_DYN_Hunt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
