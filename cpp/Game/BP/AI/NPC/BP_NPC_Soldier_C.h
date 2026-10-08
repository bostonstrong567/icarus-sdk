// /Game/BP/AI/NPC/BP_NPC_Soldier.BP_NPC_Soldier_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD51, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Soldier_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_ITM_Flashlight_SML;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DroneFlare;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Feet;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Legs;  // 0x0CF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Arms;  // 0x0D00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Chest;  // 0x0D08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Head;  // 0x0D10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh_Item;  // 0x0D18, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsADS;  // 0x0D20, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsADSKey;  // 0x0D24, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DeathMontageSection;  // 0x0D2C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName FollowTargetActorKey_0;  // 0x0D34, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName LastKnownTargetLocationKey;  // 0x0D3C, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FVector_NetQuantize LastKnownTargetLocation;  // 0x0D44, size 0xC
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool HasGeneratedRewards;  // 0x0D50, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_NPC_Soldier(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AActor* GetCurrentAnimationTarget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetOverrideMoveSpeedMappingMultiplier(float& OutMultiplier) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) EStealthAttackType GetStealthAwarenessLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Interact(AActor* InstigatingActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void OnHighlightChanged(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReplicateBlackboardVariables();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
