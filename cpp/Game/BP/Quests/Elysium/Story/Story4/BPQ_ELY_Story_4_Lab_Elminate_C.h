// /Game/BP/Quests/Elysium/Story/Story4/BPQ_ELY_Story_4_Lab_Elminate.BPQ_ELY_Story_4_Lab_Elminate_C
// Derives from: ABPQ_Common_Hunt_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_4_Lab_Elminate_C : public ABPQ_Common_Hunt_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_4_Lab_Elminate(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
