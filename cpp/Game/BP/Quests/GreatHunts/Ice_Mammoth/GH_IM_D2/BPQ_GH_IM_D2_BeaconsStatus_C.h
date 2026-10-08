// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_D2/BPQ_GH_IM_D2_BeaconsStatus.BPQ_GH_IM_D2_BeaconsStatus_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x48C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_D2_BeaconsStatus_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool A;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool B;  // 0x0471, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool C;  // 0x0472, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanPlayDialogue;  // 0x0473, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialoguePoolRowHandle Dialogue_Pool;  // 0x0474, size 0x18, named "Dialogue Pool"

    UFUNCTION(BlueprintCallable) void CustomEvent_0();
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_D2_BeaconsStatus(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
