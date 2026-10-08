// /Game/BP/Quests/GreatHunts/Ape/D/BPQ_GH_Ape_D_TameTusker.BPQ_GH_Ape_D_TameTusker_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_D_TameTusker_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0470, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_D_TameTusker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartedTamingDialogue(UIcarusTamingComponent* TamingComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TameNotify(AIcarusMountCharacter* TamedMount, UIcarusTamingComponent* TamingComponent);  // parameters 0x10
};
