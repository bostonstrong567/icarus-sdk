// /Script/Icarus.GeneticsComponent
// Derives from: UActorComponent > UObject
// size 0x1A8, declared in Icarus/Source/Icarus/AI/Mounts/GeneticsComponent.h

UCLASS(Config=Engine)
class UGeneticsComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FCreatureGeneticsUpdated OnCreatureGeneticsUpdated;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintAssignable) FCreatureSkinUpdated OnCreatureGeneticsSkinUpdated;  // 0x00C0, size 0x10
    UPROPERTY(BlueprintAssignable) FCreatureLineageUpdated OnCreatureLineageUpdated;  // 0x00D0, size 0x10
    UPROPERTY(BlueprintAssignable) FCreatureSexUpdated OnCreatureSexUpdated;  // 0x00E0, size 0x10
    UPROPERTY(BlueprintAssignable) FCreatureParentsUpdated OnCreatureParentsUpdated;  // 0x00F0, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing) TArray<FCreatureGenetics> CreatureGenetics;  // 0x0100, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing) FGeneticLineagesRowHandle CreatureLineage;  // 0x0110, size 0x18
    UPROPERTY(Replicated, ReplicatedUsing) ECreatureSex CreatureSex;  // 0x0128, size 0x1
    UPROPERTY(Replicated, ReplicatedUsing) int32 CreatureUniqueVariation;  // 0x012C, size 0x4
    UPROPERTY() FChildDNA ChildDNA;  // 0x0130, size 0x50
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 GestationProgress;  // 0x0180, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) bool bHasGeneratedGenetics;  // 0x0184, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FString Mother;  // 0x0188, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FString Father;  // 0x0198, size 0x10

    UFUNCTION(BlueprintCallable) TArray<FCreatureGenetics> GetGenetics();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FGeneticLineagesRowHandle GetLineage() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) ECreatureSex GetSex() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetUniqueVariation() const;  // parameters 0x4
    UFUNCTION() void OnCreatureLevelUpdated();
    UFUNCTION() void OnRep_CreatureLineage() const;
    UFUNCTION() void OnRep_CreatureSex() const;
    UFUNCTION() void OnRep_CreatureUniqueVariation() const;
    UFUNCTION() void OnRep_Father() const;
    UFUNCTION() void OnRep_GeneticValues() const;
    UFUNCTION() void OnRep_HasGeneratedGenetics() const;
    UFUNCTION() void OnRep_Mother() const;
    UFUNCTION(BlueprintCallable) void SetLineage(FGeneticLineagesRowHandle Lineage);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetParents(FString NewMother, FString NewFather);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetSex(ECreatureSex Sex);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetUniqueVariation(int32 Variation);  // parameters 0x4
};
