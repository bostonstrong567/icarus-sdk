// /Game/BP/Objects/World/Items/Deployables/MissionCommunication/BP_Mission_Communication_T2.BP_Mission_Communication_T2_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x779, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Communication_T2_C : public ABP_DeployableBase_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlapAudioComponent* OverlapAudio;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0748, size 0x8
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 Seed;  // 0x0750, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<FDynamicQuestsRowHandle> AvailableQuests;  // 0x0758, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<EDynamicQuestDifficulty> Difficulty;  // 0x0768, size 0x10
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool Initialised;  // 0x0778, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Communication_T2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void PopulateQuests(int32 Seed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RollQuest(int32 Seed, FDynamicQuestsRowHandle& Quest);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SelectQuest(FDynamicQuestsRowHandle Quest);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateDynamicQuests();
    UFUNCTION(BlueprintCallable) void UpdateSeed();
};
