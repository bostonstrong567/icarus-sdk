// /Game/BP/Objects/World/Items/Deployables/AI/BP_HitchingPost.BP_HitchingPost_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_HitchingPost_C : public ABP_DeployableBase_C, public ICharacterTrap
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Attach;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<ACharacter*> TrappedCharacters;  // 0x0740, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TrapRange;  // 0x0750, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ACharacter*> LastTrappedCharacters;  // 0x0758, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UCableComponent*, ACharacter*> DynamicCableComponentMap;  // 0x0768, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector AttachPoint;  // 0x07B8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Element_Index;  // 0x07C4, size 0x4, named "Element Index"

    UFUNCTION(BlueprintCallable) void CleanupTrappedCharacter(ACharacter* TrappedCharacter);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_HitchingPost(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetBaitLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetCableComponentForCharacter(ACharacter* Character, UCableComponent*& Output);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) ACharacter* GetCurrentlyTrappedCharacter() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TArray<ACharacter*> GetCurrentlyTrappedCharacters() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetTrapOrigin() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetTrapRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitialiseTrappedCharacter(ACharacter* TrappedCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void NotifyDynamicCharacterSpawned();
    UFUNCTION(BlueprintCallable) void OnRep_TrappedCharacter();
    UFUNCTION(BlueprintCallable) void OnTrappedCharacterEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ReleaseCharacter(ACharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void RemoveTrappedCharacter(ACharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetCurrentlyTrappedCharacter(ACharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TrapCharacter(ACharacter* TrappedCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateRopeVisibility();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool WantsDynamicSpawn() const;  // parameters 0x1
};
