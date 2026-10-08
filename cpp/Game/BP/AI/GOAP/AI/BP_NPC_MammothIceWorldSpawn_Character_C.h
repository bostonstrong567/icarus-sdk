// /Game/BP/AI/GOAP/AI/BP_NPC_MammothIceWorldSpawn_Character.BP_NPC_MammothIceWorldSpawn_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD38, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_MammothIceWorldSpawn_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour4;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour2;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour1;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour5;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour3;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CritArea_Tusk2;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CritArea_Tusk1;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFurShort;  // 0x0CF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFurLong;  // 0x0D00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0D08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0D10, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0D18, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle MovementCheckTimer;  // 0x0D20, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AActor* FadeOutMovementTarget;  // 0x0D28, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle FallbackTimer;  // 0x0D30, size 0x8

    UFUNCTION(BlueprintCallable) void CheckForMovementComplete();
    UFUNCTION() void ExecuteUbergraph_BP_NPC_MammothIceWorldSpawn_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FadeOutAfterReachingTarget(AActor* TargetActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void FallbackCleanup();
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable) void OnActionMontageNotify(FName NotifyName);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_FadeOutMovementTarget();
};
