// /Game/BP/Quests/Olympus/Glacier/Expedition/BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable.BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4C4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxPlaceDistance;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondsToCharge;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float LastChargePercentage;  // 0x0478, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesRowHandle RequiredBiome;  // 0x047C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle DeploymentDialogue;  // 0x0494, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle ItemFinishedDialogue;  // 0x04AC, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Glacier_OLY_Expedition_ActivateShelteredDeployable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void ItemFinished();
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
