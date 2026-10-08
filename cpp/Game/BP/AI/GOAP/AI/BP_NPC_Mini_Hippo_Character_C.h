// /Game/BP/AI/GOAP/AI/BP_NPC_Mini_Hippo_Character.BP_NPC_Mini_Hippo_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD10, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Mini_Hippo_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0CC8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0CD0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USkeletalMesh*> HippoMeshes;  // 0x0CD8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstance*> HippoMaterials;  // 0x0CE8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 CosmeticSlotIndex;  // 0x0CF8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_NPC_Mini_Hippo_Character_C*> CachedFamily;  // 0x0D00, size 0x10

    UFUNCTION(BlueprintCallable) void AggroFamily();
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Mini_Hippo_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_CosmeticSlotIndex();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ReplaceSelfWithDeadItem(AIcarusActor*& ReplacementActor, const TArray<FIcarusStatReplicated>& CustomStats);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void UpdateCosmeticMaterials();
};
