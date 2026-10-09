// /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Derives from: UObject
// size 0x90, declared in Engine/Source/Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h

UCLASS(Abstract)
class UClothingSimulationInteractor : public UObject
{
public:
    UPROPERTY() TMap<FName, UClothingInteractor*> ClothingInteractors;  // 0x0028, size 0x50
private:
    int32 LastNumCloths;  // 0x0078, not reflected
    int32 LastNumKinematicParticles;  // 0x007C, not reflected
    int32 LastNumDynamicParticles;  // 0x0080, not reflected
    int32 LastNumIterations;  // 0x0084, not reflected
    int32 LastNumSubsteps;  // 0x0088, not reflected
    float LastSimulationTime;  // 0x008C, not reflected
public:
    UFUNCTION(BlueprintCallable) void ClothConfigUpdated();
    UFUNCTION(BlueprintCallable) void DisableGravityOverride();
    UFUNCTION(BlueprintCallable) void EnableGravityOverride(const FVector& InVector);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) UClothingInteractor* GetClothingInteractor(FString ClothingAssetName) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumCloths() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumDynamicParticles() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumIterations() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumKinematicParticles() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumSubsteps() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSimulationTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PhysicsAssetUpdated();
    UFUNCTION(BlueprintCallable) void SetAnimDriveSpringStiffness(float InStiffness);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetNumIterations(int32 NumIterations);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetNumSubsteps(int32 NumSubsteps);  // parameters 0x4

    // Virtual functions that start here:
    //   ClothConfigUpdated, CreateClothingInteractor, DisableGravityOverride, EnableGravityOverride
    //   PhysicsAssetUpdated, SetAnimDriveSpringStiffness, SetNumIterations, SetNumSubsteps, Sync
};
