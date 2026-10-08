// /Script/Icarus.DeployableManagerSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x38, declared in Icarus/Source/Icarus/Objects/DeployableManagerSubsystem.h

UCLASS()
class UDeployableManagerSubsystem : public UWorldSubsystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TUniquePtr<FDeployableOctree,TDefaultDelete<FDeployableOctree> > DeployableOctree;  // 0x0030, private

    UFUNCTION(BlueprintCallable) TArray<ADeployable*> GetAllDeployables() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<ADeployable*> GetDeployablesMatchingTagQuery(const FGameplayTagQuery& GameplayTagQuery) const;  // parameters 0x58
    UFUNCTION(BlueprintCallable) TArray<ADeployable*> GetDeployablesNearLocation(const FVector& WorldLocation, const float& MaxDistance) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable) TArray<ADeployable*> GetDeployablesNearLocationMatchingTagQuery(const FVector& WorldLocation, const float& MaxDistance, const FGameplayTagQuery& GameplayTagQuery) const;  // parameters 0x68
};
