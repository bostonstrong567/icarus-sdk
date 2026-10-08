// /Script/Icarus.IcarusCorpse
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5B0, declared in Icarus/Source/Icarus/Actors/IcarusCorpse.h

UCLASS(Config=Engine)
class AIcarusCorpse : public ASkeletalItem
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* FPCarryAnim;  // 0x0578, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* TPCarryAnim;  // 0x0580, size 0x8
    UPROPERTY(Replicated, BlueprintReadOnly) FAISetupRowHandle AISetupRowHandle;  // 0x0588, size 0x18
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<AActor*> AttachedCorpseActors;  // 0x05A0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool AttachActorToSelf(AActor* AttachedActor);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void EnableFrozenRagdollOptimisations();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) UAnimSequence* GetCarryAnim();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FPoseSnapshot GetRagdollPose();  // parameters 0x38
    UFUNCTION(BlueprintNativeEvent) void HideInstigator();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void InitialiseAttachedActors();
    UFUNCTION() void OnRep_AttachedCorpseActors();
    UFUNCTION(BlueprintCallable) void SetAttachedCorpseActors(TArray<AActor*> AttachedActors);  // parameters 0x10

    // Virtual functions that start here:
    //   AttachActorToSelf_Implementation, EnableFrozenRagdollOptimisations_Implementation
    //   InitialiseAttachedActors_Implementation
};
