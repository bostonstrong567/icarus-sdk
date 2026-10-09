// /Script/AnimGraphRuntime.SimSpaceSettings
// size 0x40, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_RigidBody.h

USTRUCT()
struct FSimSpaceSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MasterAlpha;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VelocityScaleZ;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxLinearVelocity;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxAngularVelocity;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxLinearAcceleration;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxAngularAcceleration;  // 0x0014, size 0x4
    UPROPERTY(Deprecated) float ExternalLinearDrag;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ExternalLinearDragV;  // 0x001C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ExternalLinearVelocity;  // 0x0028, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ExternalAngularVelocity;  // 0x0034, size 0xC
};
