// /Game/BP/Objects/World/Items/WorldObjects/Missions/PRO_D/BP_Mission_NPC.BP_Mission_NPC_C
// Derives from: ABP_Mission_NPC_Base_C > AIcarusNPCMissionCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x889, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mission_NPC_C : public ABP_Mission_NPC_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07D8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 Stability;  // 0x07E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DebuffCount;  // 0x07E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Fillable;  // 0x07E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TempValue;  // 0x07EC, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* ItemInventory;  // 0x07F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Index;  // 0x07F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ENPC_InjuredStates> InjuredState;  // 0x07FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialoguePoolRowHandle Dialogue_Injured;  // 0x0800, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialoguePoolRowHandle Dialogue_Healed;  // 0x0818, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Interact_Cooldown;  // 0x0830, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool bCanTriggerMissions;  // 0x0831, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FProspectListRowHandle> MissionsToTrigger;  // 0x0838, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTimeLockedMissionInfo> OpenWorldLockedMissions;  // 0x0848, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRowHandle HealedDescription;  // 0x0858, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRowHandle InjuredDescription;  // 0x0870, size 0x18
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool PlayedHealDialog;  // 0x0888, size 0x1

    UFUNCTION(BlueprintCallable) void CustomHurtCharacter(int32 Water_Level, int32 Food_Level, int32 Oxygen_Level);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void EndInteractCooldown();
    UFUNCTION() void ExecuteUbergraph_BP_Mission_NPC(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FullyHeal();
    UFUNCTION(BlueprintCallable) void GetAvailableMission(FProspectListRowHandle& MissionToDo);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void HurtApe();
    UFUNCTION(BlueprintCallable) void HurtCharacter();
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void Interact(AIcarusPlayerCharacter* Player, bool IsHoldInteract);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsMissionInProgress(bool& bQuestInProgress);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Medical_Scan(AActor* Object);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnNPCDataUpdated();
    UFUNCTION(BlueprintCallable) void OnRep_Stability();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ShouldConsume(FItemData Item, FConsumableData ConsumableData, bool& Consume);  // parameters 0x291
    UFUNCTION(BlueprintCallable) void ShowMissionUI(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void StabilityUpdated();
};
