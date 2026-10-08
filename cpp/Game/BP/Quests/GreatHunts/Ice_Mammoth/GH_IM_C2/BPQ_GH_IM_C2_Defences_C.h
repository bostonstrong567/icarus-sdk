// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_C2/BPQ_GH_IM_C2_Defences.BPQ_GH_IM_C2_Defences_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x48C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_C2_Defences_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0470, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0488, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0489, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool C;  // 0x048A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool D;  // 0x048B, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_C2_Defences(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
