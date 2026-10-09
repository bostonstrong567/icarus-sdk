// /Script/PhysicsCore.BodyInstanceCore
// size 0x18, declared in Engine/Source/Runtime/PhysicsCore/Public/BodyInstanceCore.h

USTRUCT()
struct FBodyInstanceCore
{
public:
    TWeakObjectPtr<UBodySetupCore,FWeakObjectPtr> BodySetup;  // 0x0008, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSimulatePhysics : 1;  // 0x0010, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverrideMass : 1;  // 0x0010, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bEnableGravity : 1;  // 0x0010, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAutoWeld : 1;  // 0x0010, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bStartAwake : 1;  // 0x0010, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bGenerateWakeEvents : 1;  // 0x0010, mask 0x20
    UPROPERTY() uint8 bUpdateMassWhenScaleChanges : 1;  // 0x0010, mask 0x40
};
