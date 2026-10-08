// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_O1/BPQ_GH_IM_O1_Researchers_3_Mammoth.BPQ_GH_IM_O1_Researchers_3_Mammoth_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_O1_Researchers_3_Mammoth_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0468, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Spawned_AI;  // 0x0480, size 0x8, named "Spawned AI"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemTemplateRowHandle> Items;  // 0x0488, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusPlayerCharacter*> As_Icarus_Player_Character;  // 0x0498, size 0x10, named "As Icarus Player Character"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
