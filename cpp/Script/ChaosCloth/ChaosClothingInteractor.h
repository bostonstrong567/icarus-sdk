// /Script/ChaosCloth.ChaosClothingInteractor
// Derives from: UClothingInteractor > UObject
// size 0x40, declared in Engine/Plugins/Experimental/ChaosCloth/Source/Chaos/Public/ChaosCloth/ChaosClothingSimulationInteractor.h

UCLASS()
class UChaosClothingInteractor : public UClothingInteractor
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<TDelegate<void __cdecl(Chaos::FClothingSimulationCloth *),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32> > Commands;  // 0x0030, private

    UFUNCTION(BlueprintCallable) void ResetAndTeleport(bool bReset, bool bTeleport);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetAerodynamics(float DragCoefficient, float LiftCoefficient, FVector WindVelocity);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetAnimDrive(FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetAnimDriveLinear(float AnimDriveStiffness);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetDamping(float DampingCoefficient);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetGravity(float GravityScale, bool bIsGravityOverridden, FVector GravityOverride);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetLongRangeAttachment(FVector2D TetherStiffness);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetLongRangeAttachmentLinear(float TetherStiffness);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetVelocityScale(FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);  // parameters 0x14
};
