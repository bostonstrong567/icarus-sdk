// /Game/BP/Objects/World/Items/Deployables/Extractors/BP_Extractor.BP_Extractor_C
// Derives from: ABP_Drill_Base_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Extractor_C : public ABP_Drill_Base_C, public IAITargetable
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Extractor_ventFX1;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Extractor_ventFX;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Extractor_engineFX;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Extractor_baseFX;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;  // 0x09E0, size 0x8

    UFUNCTION(BlueprintCallable) void ActiveStateUpdated();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TArray<FCriticalHitLocation> GetCriticalHitBones() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FAIRelationshipsRowHandle GetRelationshipData() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetTargetAlertness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetTargetLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsActorAlive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsCriticalHitDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHidden() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
};
