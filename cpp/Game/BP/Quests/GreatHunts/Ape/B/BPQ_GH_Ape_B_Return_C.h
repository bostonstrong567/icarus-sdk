// /Game/BP/Quests/GreatHunts/Ape/B/BPQ_GH_Ape_B_Return.BPQ_GH_Ape_B_Return_C
// Derives from: ABPQ_Travel_Small_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x489, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_B_Return_C : public ABPQ_Travel_Small_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DialoguePlayed;  // 0x0488, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_B_Return(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Overlap();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
