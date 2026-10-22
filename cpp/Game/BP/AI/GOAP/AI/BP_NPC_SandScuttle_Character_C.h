// /Game/BP/AI/GOAP/AI/BP_NPC_SandScuttle_Character.BP_NPC_SandScuttle_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD00, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_SandScuttle_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* MovementAudio;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0CD0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0CD8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName LastAttackSection;  // 0x0CDC, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle EmergeTimer;  // 0x0CE8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasEmerged;  // 0x0CF0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CleanUpTimerHandle;  // 0x0CF8, size 0x8

    UFUNCTION(BlueprintCallable) void CheckForCleanUp();
    UFUNCTION(BlueprintCallable) void CompleteEmerge();
    UFUNCTION() void ExecuteUbergraph_BP_NPC_SandScuttle_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void OnRep_HasEmerged();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
