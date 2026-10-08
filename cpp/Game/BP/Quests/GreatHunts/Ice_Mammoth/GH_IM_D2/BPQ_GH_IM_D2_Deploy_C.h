// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_D2/BPQ_GH_IM_D2_Deploy.BPQ_GH_IM_D2_Deploy_C
// Derives from: ABPQ_Deploy_Count_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_D2_Deploy_C : public ABPQ_Deploy_Count_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDialogueRowHandle> Dialogue;  // 0x0498, size 0x10

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_D2_Deploy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
