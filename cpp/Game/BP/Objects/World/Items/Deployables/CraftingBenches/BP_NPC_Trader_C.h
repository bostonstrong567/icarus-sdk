// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_NPC_Trader.BP_NPC_Trader_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_NPC_Trader_C : public ABP_ProcessorBase_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Head;  // 0x0990, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0998, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesCrafting;  // 0x09A0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bShowMapIcon;  // 0x09A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Name;  // 0x09B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQuestQueriesRowHandle Location;  // 0x09C0, size 0x18
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool bShifting;  // 0x09D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CleanupDistance;  // 0x09DC, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanCleanup(bool& bCanCleanup);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Cleanup();
    UFUNCTION(BlueprintCallable) void CleanupCheck();
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Trader(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSpawnInfo(FString& Name, FQuestQueriesRowHandle& Location);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void Invite();
    UFUNCTION(BlueprintCallable) void OnRep_bShowMapIcon();
    UFUNCTION(BlueprintCallable) void PerformCleanup();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ShiftToLocation(FString Name, FQuestQueriesRowHandle Location, FItemsStaticRowHandle Item, TSubclassOf<AIcarusItem> Class);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void ToggleMapIcon();
    UFUNCTION(BlueprintCallable) void UpdateMapIcon();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
