// /Script/Icarus.IcarusPawn
// Derives from: APawn > AActor > UObject
// size 0x440, declared in Icarus/Source/Icarus/Characters/IcarusPawn.h

UCLASS(Config=Game)
class AIcarusPawn : public APawn, public IModifiableInterface, public IAITargetable, public IMutableGameplayTagInterface, public IAISightTargetInterface, public ISpawnableAI, public ICriticalHitReceiver, public IGameplayTagAssetInterface
{
public:
    UPROPERTY(BlueprintReadWrite) bool bCriticalHitDisabled;  // 0x0328, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x032C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle EpicCreature;  // 0x0344, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText EpicCreatureName;  // 0x0360, size 0x18
    UPROPERTY(Replicated, Instanced, BlueprintReadOnly) UIcarusStatContainer* StatContainer;  // 0x0378, size 0x8
    UPROPERTY(Replicated, Instanced, BlueprintReadOnly) UActorState* ActorState;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAIRelationshipsRowHandle AIRelationshipTableRowNew;  // 0x0388, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bReplicateControlRotation;  // 0x03A0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) FRotator ReplicatedControlRotation;  // 0x03A4, size 0xC
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) int32 CurrentLevel;  // 0x03B0, size 0x4
    UPROPERTY(BlueprintAssignable) FPawnLevelUpdated PawnLevelUpdated;  // 0x03B8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FGameplayTagContainer GameplayTags;  // 0x03D0, size 0x20

    // Not reflected: the engine's scripting cannot see these.
    bool bHasSetUpAI;  // 0x0329, protected
    int32 CurrentModifierUID;  // 0x03C8, protected
    TMap<enum EStats,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EStats,int,0> > ActiveAuras;  // 0x03F0, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<AIcarusPlayerCharacter*> BP_GetAllDamagingPlayerCharacters() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool CanHitDamageTarget(AActor* TargetActor, FHitResult InHit);  // parameters 0x91
    UFUNCTION(BlueprintNativeEvent) FAIRelationshipsRowHandle CheckForStatBasedAIRelationshipChange(const FAIRelationshipsRowHandle& PreviousRelationship);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) USkeletalMeshComponent* GetAnimatedMeshComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FVector GetDamageSourceLocation();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void Interact(AActor* InstigatingActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintNativeEvent) void Multicast_PlayReplicatedMontage(UAnimMontage* Montage, FName StartingSection, float PlayRate, float StartPosition, bool bSkipServer);  // parameters 0x19
    UFUNCTION(BlueprintNativeEvent) void OnActorDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION() void OnRep_Level();
    UFUNCTION() void OnStatContainerUpdated_Internal();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetDamageEnabled(bool bEnabled);  // parameters 0x1

    // Virtual functions that start here:
    //   GetAnimatedMeshComponent_Implementation, Multicast_PlayReplicatedMontage_Implementation
    //   OnActorDeath_Implementation, ResistedDamage
};
