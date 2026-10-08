// /Game/BP/Quests/Elysium/Story/Story5/BPQ_ELY_Story_5_Kill_Travel.BPQ_ELY_Story_5_Kill_Travel_C
// Derives from: ABPQ_Travel_Large_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_5_Kill_Travel_C : public ABPQ_Travel_Large_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0488, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_5_Kill_Travel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Overlap();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
