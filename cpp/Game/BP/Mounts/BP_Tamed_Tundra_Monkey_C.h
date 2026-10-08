// /Game/BP/Mounts/BP_Tamed_Tundra_Monkey.BP_Tamed_Tundra_Monkey_C
// Derives from: ABP_Tame_Base_C > ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xF74, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Tamed_Tundra_Monkey_C : public ABP_Tame_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0F50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Stick;  // 0x0F58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PetTarget;  // 0x0F60, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 StickCount;  // 0x0F68, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName StickCountKey;  // 0x0F6C, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Tamed_Tundra_Monkey(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UAnimMontage* GetMontageForGameplayTag(const FGameplayTag& Tag, FName& Section) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnHeldStickUpdated();
    UFUNCTION(BlueprintCallable) void OnRep_StickCount();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateBlackboardValues();
};
