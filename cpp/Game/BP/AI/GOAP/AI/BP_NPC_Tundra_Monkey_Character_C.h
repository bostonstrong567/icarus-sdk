// /Game/BP/AI/GOAP/AI/BP_NPC_Tundra_Monkey_Character.BP_NPC_Tundra_Monkey_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCF8, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Tundra_Monkey_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_JumpLerpComponent_C* BP_JumpLerpComponent;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0CD0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool HasStick;  // 0x0CD8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HasStickKey;  // 0x0CDC, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool InTree;  // 0x0CE4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName InTreeKey;  // 0x0CE8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* NearbyTree;  // 0x0CF0, size 0x8

    UFUNCTION(BlueprintCallable) void AttachToTree(bool& DidAttach);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Tundra_Monkey_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_InTree();
    UFUNCTION(BlueprintCallable) void ReplicateBlackboardVariables();
};
