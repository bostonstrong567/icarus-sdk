// /Script/PhysicsCore.PhysicalMaterial
// Derives from: UObject
// size 0x80, declared in Engine/Source/Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h

UCLASS()
class UPhysicalMaterial : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Friction;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float StaticFriction;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EFrictionCombineMode> FrictionCombineMode;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOverrideFrictionCombineMode;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Restitution;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EFrictionCombineMode> RestitutionCombineMode;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOverrideRestitutionCombineMode;  // 0x0039, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Density;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SleepLinearVelocityThreshold;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SleepAngularVelocityThreshold;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 SleepCounterThreshold;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float RaiseMassToPower;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DestructibleDamageThresholdScale;  // 0x0050, size 0x4
    UPROPERTY(Deprecated) UDEPRECATED_PhysicalMaterialPropertyBase* PhysicalMaterialProperty;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EPhysicalSurface> SurfaceType;  // 0x0060, size 0x1
    TUniquePtr<FPhysicsMaterialHandle_PhysX,TDefaultDelete<FPhysicsMaterialHandle_PhysX> > MaterialHandle;  // 0x0068, not reflected
    FChaosUserData UserData;  // 0x0070, not reflected
};
